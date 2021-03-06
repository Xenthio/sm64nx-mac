#include <ultra64.h>

#include "sm64.h"
#include "area.h"
#include "audio/external.h"
#include "camera.h"
#include "mario_misc.h"
#include "behavior_actions.h"
#include "behavior_data.h"
#include "engine/behavior_script.h"
#include "game.h"
#include "engine/graph_node.h"
#include "envfx_snow.h"
#include "level_update.h"
#include "engine/math_util.h"
#include "memory.h"
#include "object_helpers.h"
#include "object_helpers2.h"
#include "rendering_graph_node.h"
#include "save_file.h"
#include "sound_init.h"
#include "skybox.h"
#include "interaction.h"
#include "object_list_processor.h"
#include "dialog_ids.h"

#define TOAD_STAR_1_REQUIREMENT 12
#define TOAD_STAR_2_REQUIREMENT 25
#define TOAD_STAR_3_REQUIREMENT 35

#define TOAD_STAR_1_DIALOG DIALOG_082
#define TOAD_STAR_2_DIALOG DIALOG_076
#define TOAD_STAR_3_DIALOG DIALOG_083

#define TOAD_STAR_1_DIALOG_AFTER DIALOG_154
#define TOAD_STAR_2_DIALOG_AFTER DIALOG_155
#define TOAD_STAR_3_DIALOG_AFTER DIALOG_156

enum ToadMessageStates
{
	TOAD_MESSAGE_FADED,
	TOAD_MESSAGE_OPAQUE,
	TOAD_MESSAGE_OPACIFYING,
	TOAD_MESSAGE_FADING,
	TOAD_MESSAGE_TALKING
};

enum UnlockDoorStarStates
{
	UNLOCK_DOOR_STAR_RISING,
	UNLOCK_DOOR_STAR_WAITING,
	UNLOCK_DOOR_STAR_SPAWNING_PARTICLES,
	UNLOCK_DOOR_STAR_DONE
};

static s8 D_8032CDF0[7]		       = {0x01, 0x02, 0x01, 0x00, 0x01, 0x02, 0x01};
static s8 gMarioAttackScaleAnimation[] = {0x0a, 0x0c, 0x10, 0x18, 0x0a, 0x0a, 0x0a, 0x0e, 0x14, 0x1e, 0x0a, 0x0a, 0x0a, 0x10, 0x14, 0x1a, 0x1a, 0x14, 0x00, 0x00};
GraphNodeObject D_80339FE0;
MarioBodyState playerShapeCtrl[2]; // 2nd is never accessed in practice, most likely Luigi related

// This whole file is weirdly organized. It has to be the same file due
// to rodata boundries and function aligns, which means the programmer
// treated this like a "misc" file for vaguely mario related things
// (message NPC related things, the mario head geo, and mario geo
// functions)

// mario head geo
Gfx* Geo18_802764B0(s32 callContext, struct GraphNode* node, Mat4* c)
{
	return nullptr;
}

static void bhvToadMessage_faded(void)
{
	if(gCurrentObject->oDistanceToMario > 700.0f)
	{
		gCurrentObject->oToadMessageRecentlyTalked = 0;
	}
	if(gCurrentObject->oToadMessageRecentlyTalked == 0 && gCurrentObject->oDistanceToMario < 600.0f)
	{
		gCurrentObject->oToadMessageState = TOAD_MESSAGE_OPACIFYING;
	}
}

static void bhvToadMessage_opaque(void)
{
	if(gCurrentObject->oDistanceToMario > 700.0f)
	{
		gCurrentObject->oToadMessageState = TOAD_MESSAGE_FADING;
	}
	else
	{
		if(gCurrentObject->oToadMessageRecentlyTalked == 0)
		{
			gCurrentObject->oInteractionSubtype = INT_SUBTYPE_NPC;
			if(gCurrentObject->oInteractStatus & INT_STATUS_INTERACTED)
			{
				gCurrentObject->oInteractStatus	  = 0;
				gCurrentObject->oToadMessageState = TOAD_MESSAGE_TALKING;
				Na_kinopioAppearBgm();
			}
		}
	}
}

static void bhvToadMessage_talking(void)
{
	if(s_call_talkdemo(3, 1, CUTSCENE_DIALOG, gCurrentObject->oToadMessageDialogId) != 0)
	{
		gCurrentObject->oToadMessageRecentlyTalked = 1;
		gCurrentObject->oToadMessageState	   = TOAD_MESSAGE_FADING;
		switch(gCurrentObject->oToadMessageDialogId)
		{
			case TOAD_STAR_1_DIALOG:
				gCurrentObject->oToadMessageDialogId = TOAD_STAR_1_DIALOG_AFTER;
				bhv_spawn_star_no_level_exit(0);
				break;
			case TOAD_STAR_2_DIALOG:
				gCurrentObject->oToadMessageDialogId = TOAD_STAR_2_DIALOG_AFTER;
				bhv_spawn_star_no_level_exit(1);
				break;
			case TOAD_STAR_3_DIALOG:
				gCurrentObject->oToadMessageDialogId = TOAD_STAR_3_DIALOG_AFTER;
				bhv_spawn_star_no_level_exit(2);
				break;
		}
	}
}

static void bhvToadMessage_opacifying(void)
{
	if((gCurrentObject->oOpacity += 6) == 255)
	{
		gCurrentObject->oToadMessageState = TOAD_MESSAGE_OPAQUE;
	}
}

static void bhvToadMessage_fading(void)
{
	if((gCurrentObject->oOpacity -= 6) == 81)
	{
		gCurrentObject->oToadMessageState = TOAD_MESSAGE_FADED;
	}
}

void bhvToadMessage_loop(void)
{
	if(gCurrentObject->header.gfx.node.flags & 1)
	{
		gCurrentObject->oInteractionSubtype = 0;
		switch(gCurrentObject->oToadMessageState)
		{
			case TOAD_MESSAGE_FADED:
				bhvToadMessage_faded();
				break;
			case TOAD_MESSAGE_OPAQUE:
				bhvToadMessage_opaque();
				break;
			case TOAD_MESSAGE_OPACIFYING:
				bhvToadMessage_opacifying();
				break;
			case TOAD_MESSAGE_FADING:
				bhvToadMessage_fading();
				break;
			case TOAD_MESSAGE_TALKING:
				bhvToadMessage_talking();
				break;
		}
	}
}

void bhvToadMessage_init(void)
{
	s32 saveFlags	= BuGetItemFlag();
	s32 starCount	= BuGetSumStars(activePlayerNo - 1, 0, 24);
	s32 dialogId	= (gCurrentObject->oBehParams >> 24) & 0xFF;
	s32 enoughStars = TRUE;

	switch(dialogId)
	{
		case TOAD_STAR_1_DIALOG:
			enoughStars = (starCount >= TOAD_STAR_1_REQUIREMENT);
			if(saveFlags & (1 << 24))
			{
				dialogId = TOAD_STAR_1_DIALOG_AFTER;
			}
			break;
		case TOAD_STAR_2_DIALOG:
			enoughStars = (starCount >= TOAD_STAR_2_REQUIREMENT);
			if(saveFlags & (1 << 25))
			{
				dialogId = TOAD_STAR_2_DIALOG_AFTER;
			}
			break;
		case TOAD_STAR_3_DIALOG:
			enoughStars = (starCount >= TOAD_STAR_3_REQUIREMENT);
			if(saveFlags & (1 << 26))
			{
				dialogId = TOAD_STAR_3_DIALOG_AFTER;
			}
			break;
	}
	if(enoughStars)
	{
		gCurrentObject->oToadMessageDialogId	   = dialogId;
		gCurrentObject->oToadMessageRecentlyTalked = 0;
		gCurrentObject->oToadMessageState	   = TOAD_MESSAGE_FADED;
		gCurrentObject->oOpacity		   = 81;
	}
	else
	{
		s_remove_obj(gCurrentObject);
	}
}

static void bhvUnlockDoorStar_spawn_particle(s16 angleOffset)
{
	struct Object* sparkleParticle = s_makeobj_nowpos(gCurrentObject, 0, sm64::bhv::bhvSparkleSpawn());

	sparkleParticle->oPosX += 100.0f * sins((gCurrentObject->oUnlockDoorStarTimer * 0x2800) + angleOffset);
	sparkleParticle->oPosZ += 100.0f * coss((gCurrentObject->oUnlockDoorStarTimer * 0x2800) + angleOffset);
	// Particles are spawned lower each frame
	sparkleParticle->oPosY -= gCurrentObject->oUnlockDoorStarTimer * 10.0f * FRAME_RATE_SCALER;
}

void bhvUnlockDoorStar_init(void)
{
	gCurrentObject->oUnlockDoorStarState  = UNLOCK_DOOR_STAR_RISING;
	gCurrentObject->oUnlockDoorStarTimer  = 0;
	gCurrentObject->oUnlockDoorStarYawVel = 0x1000;
	gCurrentObject->oPosX += 30.0f * sins(marioWorks->faceAngle[1] - 0x4000);
	gCurrentObject->oPosY += 160.0f;
	gCurrentObject->oPosZ += 30.0f * coss(marioWorks->faceAngle[1] - 0x4000);
	gCurrentObject->oMoveAngleYaw = 0x7800;
	s_scale(gCurrentObject, 0.5f);
}

void bhvUnlockDoorStar_loop(void)
{
	UNUSED u8 unused1[4];
	s16 prevYaw = gCurrentObject->oMoveAngleYaw;
	UNUSED u8 unused2[4];

	// Speed up the star every frame
	if(gCurrentObject->oUnlockDoorStarYawVel < 0x2400)
	{
		gCurrentObject->oUnlockDoorStarYawVel += 0x60;
	}
	switch(gCurrentObject->oUnlockDoorStarState)
	{
		case UNLOCK_DOOR_STAR_RISING:
			gCurrentObject->oPosY += 3.4f;									       // Raise the star up in the air
			gCurrentObject->oMoveAngleYaw += gCurrentObject->oUnlockDoorStarYawVel;				       // Apply yaw velocity
			s_scale(gCurrentObject, gCurrentObject->oUnlockDoorStarTimer / 50.0f * FRAME_RATE_SCALER + 0.5f); // Scale the star to be bigger
			if(++gCurrentObject->oUnlockDoorStarTimer == 30 * FRAME_RATE_SCALER_INV)
			{
				gCurrentObject->oUnlockDoorStarTimer = 0;
				gCurrentObject->oUnlockDoorStarState++; // Sets state to UNLOCK_DOOR_STAR_WAITING
			}
			break;
		case UNLOCK_DOOR_STAR_WAITING:
			gCurrentObject->oMoveAngleYaw += gCurrentObject->oUnlockDoorStarYawVel; // Apply yaw velocity
			if(++gCurrentObject->oUnlockDoorStarTimer == 30 * FRAME_RATE_SCALER_INV)
			{
				AudStartSound(SOUND_MENU_STAR_SOUND,
					      gCurrentObject->header.gfx.cameraToObject); // Play final sound
				s_shape_hide();						  // Hide the object
				gCurrentObject->oUnlockDoorStarTimer = 0;
				gCurrentObject->oUnlockDoorStarState++; // Sets state to UNLOCK_DOOR_STAR_SPAWNING_PARTICLES
			}
			break;
		case UNLOCK_DOOR_STAR_SPAWNING_PARTICLES:
			// Spawn two particles, opposite sides of the star.
			bhvUnlockDoorStar_spawn_particle(0);
			bhvUnlockDoorStar_spawn_particle(0x8000);
			if(gCurrentObject->oUnlockDoorStarTimer++ == 20 * FRAME_RATE_SCALER_INV)
			{
				gCurrentObject->oUnlockDoorStarTimer = 0;
				gCurrentObject->oUnlockDoorStarState++; // Sets state to UNLOCK_DOOR_STAR_DONE
			}
			break;
		case UNLOCK_DOOR_STAR_DONE: // The object stays loaded for an additional 50 frames so that the
					    // sound doesn't immediately stop.
			if(gCurrentObject->oUnlockDoorStarTimer++ == 50 * FRAME_RATE_SCALER_INV)
			{
				s_remove_obj(gCurrentObject);
			}
			break;
	}
	// Checks if the angle has cycled back to 0.
	// This means that the code will execute when the star completes a full revolution.
	if(prevYaw > (s16)gCurrentObject->oMoveAngleYaw)
	{
		AudStartSound(SOUND_GENERAL_SHORT_STAR,
			      gCurrentObject->header.gfx.cameraToObject); // Play a sound every time the star spins once
	}
}

static Gfx* make_gfx_mario_alpha(struct GraphNodeGenerated* node, s16 b)
{
	Gfx* sp2C;
	Gfx* sp28 = NULL;

	if(b == 255)
	{
		node->fnNode.node.flags = (node->fnNode.node.flags & 0xFF) | 0x100;
		sp28			= (Gfx*)AllocDynamic(2 * sizeof(*sp28));
		sp2C			= sp28;
	}
	else
	{
		node->fnNode.node.flags = (node->fnNode.node.flags & 0xFF) | 0x500;
		sp28			= (Gfx*)AllocDynamic(3 * sizeof(*sp28));
		sp2C			= sp28;
		gDPSetAlphaCompare(sp2C++, G_AC_DITHER);
	}
	gDPSetEnvColor(sp2C++, 255, 255, 255, b);
	gSPEndDisplayList(sp2C);
	return sp28;
}

Gfx* geo_mirror_mario_set_alpha(s32 callContext, struct GraphNode* node, UNUSED Mat4* c)
{
	UNUSED u8 unused1[4];
	Gfx* sp28			= NULL;
	struct GraphNodeGenerated* sp24 = (struct GraphNodeGenerated*)node;
	struct MarioBodyState* sp20	= &playerShapeCtrl[sp24->parameter];
	s16 sp1E;
	UNUSED u8 unused2[4];

	if(callContext == GEO_CONTEXT_RENDER)
	{
		sp1E = (sp20->modelState & 0x100) ? (sp20->modelState & 0xFF) : 255;
		sp28 = make_gfx_mario_alpha(sp24, sp1E);
	}
	return sp28;
}

Gfx* geo_switch_mario_stand_run(s32 callContext, struct GraphNode* node, UNUSED Mat4* mtx)
{
	struct GraphNodeSwitchCase* switchCase = (struct GraphNodeSwitchCase*)node;
	struct MarioBodyState* sp0	       = &playerShapeCtrl[switchCase->numCases];

	if(callContext == GEO_CONTEXT_RENDER)
	{
		// assign result. 0 if moving, 1 if stationary.
		switchCase->selectedCase = ((sp0->action & ACT_FLAG_STATIONARY) == FALSE);
	}
	return NULL;
}

Gfx* geo_switch_mario_eyes(s32 callContext, struct GraphNode* node, UNUSED Mat4* c)
{
	struct GraphNodeSwitchCase* switchCase = (struct GraphNodeSwitchCase*)node;
	struct MarioBodyState* sp8	       = &playerShapeCtrl[switchCase->numCases];
	s16 sp6;

	if(callContext == GEO_CONTEXT_RENDER)
	{
		if(sp8->eyeState == 0)
		{
			sp6 = ((switchCase->numCases * 32 + animationCounter) >> 1) & 0x1F;
			if(sp6 < 7)
			{
				switchCase->selectedCase = D_8032CDF0[sp6];
			}
			else
			{
				switchCase->selectedCase = 0;
			}
		}
		else
		{
			switchCase->selectedCase = sp8->eyeState - 1;
		}
	}
	return NULL;
}

/**
 * Makes Mario's upper body tilt depending on the rotation stored in his bodyState
 */
Gfx* geo_mario_tilt_torso(s32 callContext, struct GraphNode* node, UNUSED Mat4* c)
{
	struct GraphNodeGenerated* sp24 = (struct GraphNodeGenerated*)node;
	struct MarioBodyState* sp20	= &playerShapeCtrl[sp24->parameter];
	s32 action			= sp20->action;

	if(callContext == GEO_CONTEXT_RENDER)
	{
		struct GraphNodeRotation* sp18 = (struct GraphNodeRotation*)node->next;

		if(action != 0x00840452 && action != 0x00840454 && action != 0x04000440 && action != 0x20810446)
		{
			vec3s_copy(sp20->torsoAngle, gVec3sZero);
		}
		sp18->rotation[0] = sp20->torsoAngle[1];
		sp18->rotation[1] = sp20->torsoAngle[2];
		sp18->rotation[2] = sp20->torsoAngle[0];
	}
	return NULL;
}

/**
 * Makes Mario's head rotate with the camera angle when in C-up mode
 */
Gfx* geo_mario_head_rotation(s32 callContext, struct GraphNode* node, UNUSED Mat4* c)
{
	struct GraphNodeGenerated* sp2C	 = (struct GraphNodeGenerated*)node;
	struct MarioBodyState* bodyState = &playerShapeCtrl[sp2C->parameter];
	s32 action			 = bodyState->action;

	if(callContext == GEO_CONTEXT_RENDER)
	{
		struct GraphNodeRotation* sp20 = (struct GraphNodeRotation*)node->next;
		struct Camera* camera	       = gCurGraphNodeCamera->config.camera;

		if(camera->mode == CAMERA_MODE_C_UP)
		{
			sp20->rotation[0] = camPlayerInfo->headRotation[1];
			sp20->rotation[2] = camPlayerInfo->headRotation[0];
		}
		else if(action & 0x20000000)
		{
			sp20->rotation[0] = bodyState->headAngle[1];
			sp20->rotation[1] = bodyState->headAngle[2];
			sp20->rotation[2] = bodyState->headAngle[0];
		}
		else
		{
			SetSVector(bodyState->headAngle, 0, 0, 0);
			SetSVector(sp20->rotation, 0, 0, 0);
		}
	}
	return NULL;
}

/**
 * Switch between hand models.
 * Possible options are described in the MarioHandGSCId enum.
 */
Gfx* geo_switch_mario_hand(s32 callContext, struct GraphNode* node, UNUSED Mat4* c)
{
	struct GraphNodeSwitchCase* switchCase = (struct GraphNodeSwitchCase*)node;
	struct MarioBodyState* sp0	       = &playerShapeCtrl[0];

	if(callContext == GEO_CONTEXT_RENDER)
	{
		if(sp0->handState == 0)
		{
			switchCase->selectedCase = ((sp0->action & ACT_FLAG_SWIMMING_OR_FLYING) != 0);
		}
		else
		{
			if(switchCase->numCases == 0)
			{
				switchCase->selectedCase = (sp0->handState < 5) ? sp0->handState : 1;
			}
			else
			{
				switchCase->selectedCase = (sp0->handState < 2) ? sp0->handState : 0;
			}
		}
	}
	return NULL;
}

/**
 * Increase Mario's hand / foot size when he punches / kicks.
 * Since animation geo nodes only support rotation, this scaling animation
 * was scripted separately. The node with this script should be placed before
 * a scaling node containing the hand / foot geo layout.
 * ! Since the animation gets updated in GEO_CONTEXT_RENDER, drawing Mario multiple times
 * (such as in the mirror room) results in a faster and desynced punch / kick animation.
 */
Gfx* geo_mario_hand_foot_scaler(s32 callContext, struct GraphNode* node, UNUSED Mat4* c)
{
	static s16 sMarioAttackAnimCounter     = 0;
	struct GraphNodeGenerated* asGenerated = (struct GraphNodeGenerated*)node;
	struct GraphNodeScale* sp8	       = (struct GraphNodeScale*)node->next;
	struct MarioBodyState* bodyState       = &playerShapeCtrl[0];

	if(callContext == GEO_CONTEXT_RENDER)
	{
		sp8->scale = 1.0f;
		if(asGenerated->parameter == bodyState->punchState >> 6)
		{
			if(sMarioAttackAnimCounter != animationCounter && (bodyState->punchState & 0x3F) > 0)
			{
				bodyState->punchState -= 1;
				sMarioAttackAnimCounter = animationCounter;
			}
			sp8->scale = gMarioAttackScaleAnimation[asGenerated->parameter * 6 + (bodyState->punchState & 0x3F)] / 10.0f;
		}
	}
	return NULL;
}

Gfx* geo_switch_mario_cap_effect(s32 callContext, struct GraphNode* node, UNUSED Mat4* c)
{
	struct GraphNodeSwitchCase* switchCase = (struct GraphNodeSwitchCase*)node;
	struct MarioBodyState* sp0	       = &playerShapeCtrl[switchCase->numCases];

	if(callContext == GEO_CONTEXT_RENDER)
	{
		switchCase->selectedCase = sp0->modelState >> 8;
	}
	return NULL;
}

Gfx* geo_switch_mario_cap_on_off(s32 callContext, struct GraphNode* node, UNUSED Mat4* c)
{
	struct GraphNode* next		       = node->next;
	struct GraphNodeSwitchCase* switchCase = (struct GraphNodeSwitchCase*)node;
	struct MarioBodyState* sp4	       = &playerShapeCtrl[switchCase->numCases];

	if(callContext == GEO_CONTEXT_RENDER)
	{
		switchCase->selectedCase = sp4->capState & 1;
		while(next != node)
		{
			if(next->type == 21)
			{
				if(sp4->capState & 2)
				{
					next->flags |= 1;
				}
				else
				{
					next->flags &= ~1;
				}
			}
			next = next->next;
		}
	}
	return NULL;
}

/**
 * Geo node script that makes the wings on Mario's wing cap flap.
 * Should be placed before a rotation node.
 */
Gfx* geo_mario_rotate_wing_cap_wings(s32 callContext, struct GraphNode* node, UNUSED Mat4* c)
{
	s16 rotX;
	struct GraphNodeGenerated* sp8 = (struct GraphNodeGenerated*)node;

	if(callContext == GEO_CONTEXT_RENDER)
	{
		struct GraphNodeRotation* rotNode = (struct GraphNodeRotation*)node->next;

		if(playerShapeCtrl[sp8->parameter >> 1].unk07 == 0)
		{
			rotX = (coss((animationCounter & 0xF) << 12) + 1.0f) * 4096.0f;
		}
		else
		{
			rotX = (coss((animationCounter & 7) << 13) + 1.0f) * 6144.0f;
		}
		if(!(sp8->parameter & 1))
		{
			rotNode->rotation[0] = -rotX;
		}
		else
		{
			rotNode->rotation[0] = rotX;
		}
	}
	return NULL;
}

Gfx* geo_switch_mario_hand_grab_pos(s32 callContext, struct GraphNode* b, Mat4* c)
{
	struct GraphNodeHeldObject* sp2C = (struct GraphNodeHeldObject*)b;
	Mat4* sp28			 = c;
	struct PlayerRecord* sp24	 = &playerWorks[sp2C->playerIndex];

	if(callContext == GEO_CONTEXT_RENDER)
	{
		sp2C->objNode = NULL;
		if(sp24->heldObj != NULL)
		{
			sp2C->objNode = sp24->heldObj;
			switch(sp24->marioBodyState->grabPos)
			{
				case GRAB_POS_LIGHT_OBJ:
					if(sp24->status & ACT_FLAG_THROWING)
					{
						SetSVector(sp2C->translation, 50, 0, 0);
					}
					else
					{
						SetSVector(sp2C->translation, 50, 0, 110);
					}
					break;
				case GRAB_POS_HEAVY_OBJ:
					SetSVector(sp2C->translation, 145, -173, 180);
					break;
				case GRAB_POS_BOWSER:
					SetSVector(sp2C->translation, 80, -270, 1260);
					break;
			}
		}
	}
	else if(callContext == GEO_CONTEXT_HELD_OBJ)
	{
		get_pos_from_transform_mtx(sp24->marioBodyState->unk18, *sp28, *(Mat4*)gCurGraphNodeCamera->matrixPtr);
	}
	return NULL;
}

Gfx* geo_render_mirror_mario(s32 callContext, struct GraphNode* node, UNUSED Mat4* c)
{
	f32 sp34;
	struct Object* sp30 = playerWorks->marioObj;

	switch(callContext)
	{
		case GEO_CONTEXT_CREATE:
			init_graph_node_object(NULL, &D_80339FE0, NULL, gVec3fZero, gVec3sZero, gVec3fOne);
			break;
		case GEO_CONTEXT_AREA_LOAD:
			geo_add_child(node, &D_80339FE0.node);
			break;
		case GEO_CONTEXT_AREA_UNLOAD:
			geo_remove_child(&D_80339FE0.node);
			break;
		case GEO_CONTEXT_RENDER:
			if(sp30->header.gfx.pos[0] > 1700.0f)
			{
				// TODO: Is this a geo layout copy or a graph node copy?
				D_80339FE0.sharedChild = sp30->header.gfx.sharedChild;
				D_80339FE0.unk18       = sp30->header.gfx.unk18;
				vec3s_copy(D_80339FE0.angle, sp30->header.gfx.angle);
				CopyFVector(D_80339FE0.pos, sp30->header.gfx.pos);
				CopyFVector(D_80339FE0.scale, sp30->header.gfx.scale);
				// FIXME: why does this set unk38, an inline struct, to a ptr to another one? wrong
				// GraphNode types again?
				D_80339FE0.unk38    = *(struct GraphNodeObject_sub*)&sp30->header.gfx.unk38.animID;
				sp34		    = 4331.53 - D_80339FE0.pos[0];
				D_80339FE0.pos[0]   = sp34 + 4331.53;
				D_80339FE0.angle[1] = -D_80339FE0.angle[1];
				D_80339FE0.scale[0] *= -1.0f;
				// FIXME: Why doesn't this match?
				// D_80339FE0.node.flags |= 1;
				((s16*)&D_80339FE0)[1] |= 1;
			}
			else
			{
				// FIXME: Why doesn't this match?
				// D_80339FE0.node.flags &= ~1;
				((s16*)&D_80339FE0)[1] &= ~1;
			}
			break;
	}
	return NULL;
}

Gfx* geo_mirror_mario_backface_culling(s32 callContext, struct GraphNode* node, UNUSED Mat4* c)
{
	struct GraphNodeGenerated* sp34 = (struct GraphNodeGenerated*)node;
	Gfx* sp30			= NULL;

	if(callContext == GEO_CONTEXT_RENDER && gCurGraphNodeObject == &D_80339FE0)
	{
		sp30 = (Gfx*)AllocDynamic(3 * sizeof(*sp30));

		if(sp34->parameter == 0)
		{
			gSPClearGeometryMode(&sp30[0], G_CULL_BACK);
			gSPSetGeometryMode(&sp30[1], G_CULL_FRONT);
			gSPEndDisplayList(&sp30[2]);
		}
		else
		{
			gSPClearGeometryMode(&sp30[0], G_CULL_FRONT);
			gSPSetGeometryMode(&sp30[1], G_CULL_BACK);
			gSPEndDisplayList(&sp30[2]);
		}
		sp34->fnNode.node.flags = (sp34->fnNode.node.flags & 0xFF) | 0x100;
	}
	return sp30;
}
