// bully.c.inc

static struct ObjectHitbox sSmallBullyHitbox = {
    /* interactType:      */ INTERACT_BULLY,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 73,
    /* height:            */ 123,
    /* hurtboxRadius:     */ 63,
    /* hurtboxHeight:     */ 113,
};

static struct ObjectHitbox sBigBullyHitbox = {
    /* interactType:      */ INTERACT_BULLY,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 115,
    /* height:            */ 235,
    /* hurtboxRadius:     */ 105,
    /* hurtboxHeight:     */ 225,
};

void bhv_small_bully_init(void)
{
	stSetSkelAnimeNumber(0);

	o->oHomeX	     = o->oPosX;
	o->oHomeZ	     = o->oPosZ;
	o->oBehParams2ndByte = BULLY_BP_SIZE_SMALL;
	o->oGravity	     = 4.0;
	o->oFriction	     = 0.91;
	o->oBuoyancy	     = 1.3;

	s_set_hitparam(o, &sSmallBullyHitbox);
}

void bhv_big_bully_init(void)
{
	stSetSkelAnimeNumber(0);

	o->oHomeX	     = o->oPosX;
	o->oHomeY	     = o->oPosY;
	o->oHomeZ	     = o->oPosZ;
	o->oBehParams2ndByte = BULLY_BP_SIZE_BIG;
	o->oGravity	     = 5.0;
	o->oFriction	     = 0.93;
	o->oBuoyancy	     = 1.3;

	s_set_hitparam(o, &sBigBullyHitbox);
}

void BullyCheckMarioCollision(void)
{
	if(o->oInteractStatus & INT_STATUS_INTERACTED)
	{
		if(o->oBehParams2ndByte == BULLY_BP_SIZE_SMALL)
			objsound(SOUND_OBJ2_BULLY_ATTACKED);
		else
			objsound(SOUND_OBJ2_LARGE_BULLY_ATTACKED);

		o->oInteractStatus &= ~INT_STATUS_INTERACTED;
		o->oAction = BULLY_ACT_KNOCKBACK;
		o->oFlags &= ~0x8; /* bit 3 */
		stSetSkelAnimeNumber(3);
		o->oBullyMarioCollisionAngle = o->oMoveAngleYaw;
	}
}

void BullyChaseMarioLoop(void)
{
	f32 homeX = o->oHomeX;
	f32 posY  = o->oPosY;
	f32 homeZ = o->oHomeZ;

	if(o->oTimer < 10 * FRAME_RATE_SCALER_INV)
	{
		o->oForwardVel = 3.0;
		s_chase_obj_angle(o, gMarioObject, 0x10, 0x1000 / FRAME_RATE_SCALER_INV);
	}
	else if(o->oBehParams2ndByte == BULLY_BP_SIZE_SMALL)
	{
		o->oForwardVel = 20.0;
		if(o->oTimer >= 31 * FRAME_RATE_SCALER_INV)
			o->oTimer = 0;
	}
	else
	{
		o->oForwardVel = 30.0;

		if(o->oTimer >= 36 * FRAME_RATE_SCALER_INV)
			o->oTimer = 0;
	}

	if(!PlayerApproach(homeX, posY, homeZ, 1000))
	{
		o->oAction = BULLY_ACT_PATROL;
		stSetSkelAnimeNumber(0);
	}
}

void BullyKnockbackLoop(void)
{
	if(o->oForwardVel < 10.0 && (s32)o->oVelY == 0)
	{
		o->oForwardVel = 1.0;
		o->oBullyKBTimerAndMinionKOCounter++;
		o->oFlags |= 0x8; /* bit 3 updates turn*/
		o->oMoveAngleYaw = o->oFaceAngleYaw;
		s_chase_obj_angle(o, gMarioObject, 16, 1280);
	}
	else
	{
		o->header.gfx.unk38.animFrameAccelAssist = 0;
	}

	if(o->oBullyKBTimerAndMinionKOCounter == 18 * FRAME_RATE_SCALER_INV)
	{
		o->oAction			   = BULLY_ACT_CHASE_MARIO;
		o->oBullyKBTimerAndMinionKOCounter = 0;
		stSetSkelAnimeNumber(1);
	}
}

void BullyBackUpLoop(void)
{
	if(o->oTimer == 0)
	{
		o->oFlags &= ~0x8; /* bit 3 */
		o->oMoveAngleYaw += 0x8000;
	}

	o->oForwardVel = 5.0;

	//! BullyBackUpCheck() happens after this function, and has the potential to reset
	//  the bully's action to BULLY_ACT_BACK_UP. Because the back up action is only
	//  set to end when the timer EQUALS 15, if this happens on that frame, the bully
	//  will be stuck in BULLY_ACT_BACK_UP forever until Mario hits it or its death
	//  conditions are activated. However because its angle is set to its facing angle,
	//  it will walk forward instead of backing up.

	if(o->oTimer == 15 * FRAME_RATE_SCALER_INV)
	{
		o->oMoveAngleYaw = o->oFaceAngleYaw;
		o->oFlags |= 0x8; /* bit 3 */
		o->oAction = BULLY_ACT_PATROL;
	}
}

void BullyBackUpCheck(s16 collisionFlags)
{
	if(!(collisionFlags & 0x8) && o->oAction != BULLY_ACT_KNOCKBACK) /* bit 3 */
	{
		o->oPosX   = o->oBullyPrevX;
		o->oPosZ   = o->oBullyPrevZ;
		o->oAction = BULLY_ACT_BACK_UP;
	}
}

void PlayBullyStompingSound(void)
{
	s16 sp26 = o->header.gfx.unk38.frame();
	switch(o->oAction)
	{
		case BULLY_ACT_PATROL:
			if(sp26 == 0 || sp26 == 12)
			{
				if(o->oBehParams2ndByte == BULLY_BP_SIZE_SMALL)
					objsound(SOUND_OBJ_BULLY_WALK);
				else
					objsound(SOUND_OBJ_BULLY_WALKING);
			}
			break;

		case BULLY_ACT_CHASE_MARIO:
		case BULLY_ACT_BACK_UP:
			if(sp26 == 0 || sp26 == 5)
			{
				if(o->oBehParams2ndByte == BULLY_BP_SIZE_SMALL)
					objsound(SOUND_OBJ_BULLY_WALK);
				else
					objsound(SOUND_OBJ_BULLY_WALKING);
			}
			break;
	}
}

void BullyStep(void)
{
	s16 collisionFlags = 0;
	collisionFlags	   = ObjMoveEvent();
	BullyBackUpCheck(collisionFlags);
	PlayBullyStompingSound();
	ObjDangerCheck(collisionFlags, sObjFloor);

	if(o->oBullySubtype & BULLY_STYPE_CHILL)
	{
		if(o->oPosY < 1030.0f)
			o->oAction = BULLY_ACT_LAVA_DEATH;
	}
}

void BullySpawnCoin(void)
{
	struct Object* coin = s_makeobj_nowpos(o, MODEL_YELLOW_COIN, sm64::bhv::bhvMovingYellowCoin());
	objsound(SOUND_GENERAL_COIN_SPURT_2);
	coin->oForwardVel   = 10.0f;
	coin->oVelY	    = 100.0f;
	coin->oPosY	    = o->oPosY + 310.0f;
	coin->oMoveAngleYaw = (f32)(o->oBullyMarioCollisionAngle + 0x8000) + Randomf() * 1024.0f;
}

void BullyLavaDeath(void)
{
	if(ObjMeltEvent() == 1)
	{
		if(o->oBehParams2ndByte == BULLY_BP_SIZE_SMALL)
		{
			if(o->oBullySubtype == BULLY_STYPE_MINION)
				o->parentObj->oBullyKBTimerAndMinionKOCounter++;
			BullySpawnCoin();
		}
		else
		{
			s_kemuri();

			if(o->oBullySubtype == BULLY_STYPE_CHILL)
				s_enemyset_star(130.0f, 1600.0f, -4335.0f);
			else
			{
				s_enemyset_star(0, 950.0f, -6800.0f);
				s_makeobj_absolute(o, 0, MODEL_NONE, sm64::bhv::bhvLllTumblingBridge(), 0, 154, -5631, 0, 0, 0);
			}
		}
	}
}

void bhv_bully_loop(void)
{
	o->oBullyPrevX = o->oPosX;
	o->oBullyPrevY = o->oPosY;
	o->oBullyPrevZ = o->oPosZ;

	//! Because this function runs no matter what, Mario is able to interrupt the bully's
	//  death action by colliding with it. Since the bully hitbox is tall enough to collide
	//  with Mario even when it is under a lava floor, this can get the bully stuck OOB
	//  if there is nothing under the lava floor.
	BullyCheckMarioCollision();

	switch(o->oAction)
	{
		case BULLY_ACT_PATROL:
			o->oForwardVel = 5.0;

			if(ShapePatrol(o, o->oHomeX, o->oPosY, o->oHomeZ, 800) == 1)
			{
				o->oAction = BULLY_ACT_CHASE_MARIO;
				stSetSkelAnimeNumber(1);
			}

			BullyStep();
			break;

		case BULLY_ACT_CHASE_MARIO:
			BullyChaseMarioLoop();
			BullyStep();
			break;

		case BULLY_ACT_KNOCKBACK:
			BullyKnockbackLoop();
			BullyStep();
			break;

		case BULLY_ACT_BACK_UP:
			BullyBackUpLoop();
			BullyStep();
			break;

		case BULLY_ACT_LAVA_DEATH:
			BullyLavaDeath();
			break;

		case BULLY_ACT_DEATH_PLANE_DEATH:
			o->activeFlags = 0;
			break;
	}

	PlayerApproachOnOff(o, 3000);
}

// sp38 = arg0
// sp3c = arg1
// sp40 = arg2
// sp44 = arg3

void BigBullySpawnMinion(s32 arg0, s32 arg1, s32 arg2, s16 arg3)
{
	struct Object* bully	 = s_makeobj_absolute(o, 0, MODEL_BULLY, sm64::bhv::bhvSmallBully(), arg0, arg1, arg2, 0, arg3, 00);
	bully->oBullySubtype	 = BULLY_STYPE_MINION;
	bully->oBehParams2ndByte = BULLY_BP_SIZE_SMALL;
}

void bhv_big_bully_with_minions_init(void)
{
	BigBullySpawnMinion(4454, 307, -5426, 0);
	BigBullySpawnMinion(3840, 307, -6041, 0);
	BigBullySpawnMinion(3226, 307, -5426, 0);

	o->header.gfx.node.flags |= 0x10; /* bit 4 */

	s_hitOFF();

	o->oAction = BULLY_ACT_INACTIVE;
}

void BigBullyWithMinionsLavaDeath(void)
{
	if(ObjMeltEvent() == 1)
	{
		s_kemuri();
		s_enemyset_star(3700.0f, 600.0f, -5500.0f);
	}
}

void bhv_big_bully_with_minions_loop(void)
{
	s16 collisionFlags;

	o->oBullyPrevX = o->oPosX;
	o->oBullyPrevY = o->oPosY;
	o->oBullyPrevZ = o->oPosZ;

	BullyCheckMarioCollision();

	switch(o->oAction)
	{
		case BULLY_ACT_PATROL:
			o->oForwardVel = 5.0;

			if(ShapePatrol(o, o->oHomeX, o->oPosY, o->oHomeZ, 1000) == 1)
			{
				o->oAction = BULLY_ACT_CHASE_MARIO;
				stSetSkelAnimeNumber(1);
			}

			BullyStep();
			break;

		case BULLY_ACT_CHASE_MARIO:
			BullyChaseMarioLoop();
			BullyStep();
			break;

		case BULLY_ACT_KNOCKBACK:
			BullyKnockbackLoop();
			BullyStep();
			break;

		case BULLY_ACT_BACK_UP:
			BullyBackUpLoop();
			BullyStep();
			break;

		case BULLY_ACT_INACTIVE:
			//! The Big Bully that spawns from killing its 3 minions uses the knockback timer
			//  for counting the number of dead minions. This means that when it activates,
			//  the knockback timer is at 3 instead of 0. So the bully knockback time will
			//  be reduced by 3 frames (16.67%) on the first hit.
			if(o->oBullyKBTimerAndMinionKOCounter == 3)
			{
				Na_NazoClearBgm();

				if(o->oTimer >= 91 * FRAME_RATE_SCALER_INV)
					o->oAction = BULLY_ACT_ACTIVATE_AND_FALL;
			}
			break;

		case BULLY_ACT_ACTIVATE_AND_FALL:
			collisionFlags = ObjMoveEvent();
			if((collisionFlags & 0x9) == 0x9) /* bits 0 and 3 */
				o->oAction = BULLY_ACT_PATROL;

			if(collisionFlags == 1)
			{
				objsound(SOUND_OBJ_THWOMP);
				Viewshaking(SHAKE_POS_SMALL, o->oPosX, o->oPosY, o->oPosZ);
				s_kemuri();
			}

			o->header.gfx.node.flags &= ~0x10; /* bit 4 */
			s_hitON();
			break;

		case BULLY_ACT_LAVA_DEATH:
			BigBullyWithMinionsLavaDeath();
			break;

		case BULLY_ACT_DEATH_PLANE_DEATH:
			o->activeFlags = 0;
			break;
	}
}
