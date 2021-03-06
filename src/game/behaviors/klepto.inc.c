static struct ObjectHitbox sKleptoHitbox = {
    /* interactType:      */ INTERACT_HIT_FROM_BELOW,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 1,
    /* numLootCoins:      */ 0,
    /* radius:            */ 160,
    /* height:            */ 250,
    /* hurtboxRadius:     */ 80,
    /* hurtboxHeight:     */ 200,
};

static Vec3f sKleptoTargetPositions[] = {
    {2200.0f, 1250.0f, -2820.0f},
    {-6200.0f, 1250.0f, -2800.0f},
    {-6200.0f, 1250.0f, 1150.0f},
};

static u8 sKleptoAttackHandlers[] = {2, 2, 5, 5, 2, 2};

static void klepto_target_mario(void)
{
	o->oKleptoDistanceToTarget = s_distanceXZ_obj2obj(gMarioObject, o);
	o->oKleptoPitch		   = obj_turn_pitch_toward_mario(250.0f, 0);
	o->oKleptoYawToTarget	   = o->oAngleToMario;
	o->oKleptoUnkTimer	   = -60 * FRAME_RATE_SCALER_INV;
}

static s32 func_8030F158(void)
{
	if(o->oSoundStateID == 6)
	{
		func_802F932C(5);
	}
	else if(o->oSoundStateID == 5)
	{
		if(func_802F932C(0))
		{
			objsound(SOUND_GENERAL_SWISH_WATER);
			o->header.gfx.unk38.setFrameRaw(9);
		}
	}
	else
	{
		if(s_check_animenumber(9))
		{
			objsound(SOUND_GENERAL_SWISH_WATER);
		}
		return TRUE;
	}

	return FALSE;
}

static void func_8030F218(void)
{
	if(o->oKleptoUnkTimer > 0)
	{
		if(o->oKleptoPitch < -400)
		{
			o->oKleptoUnkTimer = 0;
		}
		else
		{
			if(o->oSoundStateID == 0)
			{
				if(s_check_animenumber(9))
				{
					objsound(SOUND_GENERAL_SWISH_WATER);
					s_set_skelanimeNo(6);
				}
			}
			else if(--o->oKleptoUnkTimer == 0)
			{
				o->oKleptoUnkTimer = -random_linear_offset(60, 60) * FRAME_RATE_SCALER_INV;
			}

			obj_move_pitch_approach(400, 10 / FRAME_RATE_SCALER_INV);
		}
	}
	else
	{
		obj_move_pitch_approach(o->oKleptoPitch, 600 / FRAME_RATE_SCALER_INV);
		if(func_8030F158() != 0)
		{
			if(o->oKleptoUnkTimer != 0)
			{
				o->oKleptoUnkTimer += 1;
			}
			else if(o->oKleptoPitch > -100)
			{
				o->oKleptoUnkTimer = random_linear_offset(60, 60) * FRAME_RATE_SCALER_INV;
			}
		}
	}

	obj_face_pitch_approach(0, 1000 / FRAME_RATE_SCALER_INV);
}

void bhv_klepto_init(void)
{
	if(o->oBehParams2ndByte != 0)
	{
#ifdef KLEPTO_BLUE_STAR_FIX
		if(BuGetStarFlag(activePlayerNo - 1, COURSE_SSL) & 1)
			o->oAnimState = KLEPTO_ANIM_STATE_HOLDING_BLUE_STAR;
		else
			o->oAnimState = KLEPTO_ANIM_STATE_HOLDING_STAR;
#else
		o->oAnimState = KLEPTO_ANIM_STATE_HOLDING_STAR;
#endif
	}
	else
	{
		o->oKleptoStartPosX = o->oPosX;
		o->oKleptoStartPosY = o->oPosY;
		o->oKleptoStartPosZ = o->oPosZ;

		if(BuGetItemFlag() & SAVE_FLAG_CAP_ON_KLEPTO)
		{
			o->oAnimState = KLEPTO_ANIM_STATE_HOLDING_CAP;
		}
		else
		{
			o->oAction = KLEPTO_ACT_WAIT_FOR_MARIO;
		}
	}
}

static void klepto_change_target(void)
{
	s32 newTarget = 0;
	s32 i;
	f32 dx;
	f32 dz;
	f32 targetDist;
	f32 minTargetDist;

	if(o->oDistanceToMario > 2000.0f)
	{
		minTargetDist = 99999.0f;

		for(i = 0; i < 3; i++)
		{
			dx = gMarioObject->oPosX - sKleptoTargetPositions[i][0];
			dz = gMarioObject->oPosZ - sKleptoTargetPositions[i][2];

			targetDist = sqrtf(dx * dx + dz * dz);
			if(targetDist < minTargetDist)
			{
				minTargetDist = targetDist;
				newTarget     = i;
			}
		}
	}
	else
	{
		newTarget = RandomU16() % 3;
	}

	o->oKleptoUnkF8	       = 400 * s_abs_d(newTarget - o->oKleptoTargetNumber);
	o->oKleptoTargetNumber = newTarget;

	o->oHomeX = sKleptoTargetPositions[o->oKleptoTargetNumber][0];
	o->oHomeY = sKleptoTargetPositions[o->oKleptoTargetNumber][1] + o->oKleptoUnkF8;
	o->oHomeZ = sKleptoTargetPositions[o->oKleptoTargetNumber][2];

	o->oKleptoUnkFC = s_calc_enemyscope() / 2.0f;
}

static void klepto_circle_target(f32 radius, f32 targetSpeed)
{
	s16 turnAmount;
	f32 accel;

	if(o->oAnimState != KLEPTO_ANIM_STATE_HOLDING_NOTHING && ((o->oTimer > 60 * FRAME_RATE_SCALER_INV && o->oDistanceToMario > 2000.0f) || o->oTimer >= o->oKleptoTimeUntilTargetChange))
	{
		klepto_change_target();
		o->oKleptoTimeUntilTargetChange = random_linear_offset(300, 300) * FRAME_RATE_SCALER_INV;
		;
		o->oAction = KLEPTO_ACT_APPROACH_TARGET_HOLDING;
	}
	else
	{
		turnAmount = 0x4000 - atan2s(radius, o->oKleptoDistanceToTarget - radius);
		accel	   = 0.05f;
		if((s16)(o->oMoveAngleYaw - o->oKleptoYawToTarget) < 0)
		{
			turnAmount = -turnAmount;
		}

		o->oKleptoYawToTarget += turnAmount / FRAME_RATE_SCALER_INV;
		func_8030F218();

		//! The multiplied value is sometimes out of range for an s16 during the s32 -> s16 cast,
		//  which might invert sign.
		turnAmount = (s16)(s32)(s_calc_dangle(o->oKleptoYawToTarget, o->oMoveAngleYaw) * (0.03f * o->oKleptoSpeed));
		clamp_s16(&turnAmount, 400, 700);
		obj_rotate_yaw_and_bounce_off_walls(o->oKleptoYawToTarget, turnAmount / FRAME_RATE_SCALER_INV);

		if(o->oKleptoSpeed > 50.0f)
		{
			accel = 2.0f;
		}

		approach_f32_ptr(&o->oKleptoSpeed, targetSpeed, accel * FRAME_RATE_SCALER);
	}
}

static void klepto_approach_target(f32 targetSpeed)
{
	if(o->oKleptoDistanceToTarget < 1800.0f)
	{
		o->oAction = KLEPTO_ACT_CIRCLE_TARGET_HOLDING;
	}
	else
	{
		if(o->oKleptoUnkFC > 0.0f)
		{
			if((o->oKleptoUnkFC -= o->oForwardVel) <= 0.0f)
			{
				o->oHomeY -= o->oKleptoUnkF8;
			}
		}

		func_8030F218();
		obj_rotate_yaw_and_bounce_off_walls(o->oKleptoYawToTarget, 400 / FRAME_RATE_SCALER_INV);
		approach_f32_ptr(&o->oKleptoSpeed, targetSpeed, 0.05f * FRAME_RATE_SCALER);
	}
}

static void klepto_act_wait_for_mario(void)
{
	if(o->oKleptoDistanceToTarget < 1000.0f)
	{
		klepto_target_mario();
		if(o->oKleptoDistanceToTarget < 1000.0f)
		{
			o->oAction = KLEPTO_ACT_TURN_TOWARD_MARIO;
			o->oFlags &= ~0x00000008;
		}
	}

	klepto_circle_target(300.0f, 40.0f);
}

static void klepto_act_turn_toward_mario(void)
{
	klepto_target_mario();

	if(func_8030F158() && s_check_animeend_2() && o->oKleptoDistanceToTarget > 800.0f && s_calc_dangle(o->oAngleToMario, o->oFaceAngleYaw) < 0x800 && o->oKleptoPitch < 0x400)
	{
		objsound(SOUND_OBJ_KLEPTO1);
		o->oAction	 = KLEPTO_ACT_DIVE_AT_MARIO;
		o->oMoveAngleYaw = o->oFaceAngleYaw;
		o->oFlags |= 0x00000008;

		s_set_skelanimeNo(3);
	}

	klepto_circle_target(1000.0f, 40.0f);
	obj_face_yaw_approach(o->oAngleToMario, 1000 / FRAME_RATE_SCALER_INV);
}

static void klepto_act_dive_at_mario(void)
{
	approach_f32_ptr(&o->oKleptoSpeed, 60.0f, 10.0f * FRAME_RATE_SCALER);
	if(o->oSoundStateID == 2)
	{
		if(s_check_animenumber(11))
		{
			objsound(SOUND_GENERAL_SWISH_WATER);
		}

		if(func_802F932C(0))
		{
			if(o->oAnimState != KLEPTO_ANIM_STATE_HOLDING_NOTHING)
			{
				o->oAction			= KLEPTO_ACT_CIRCLE_TARGET_HOLDING;
				o->oKleptoTimeUntilTargetChange = 0;
			}
			else
			{
				o->oAction = KLEPTO_ACT_WAIT_FOR_MARIO;
			}
		}
	}
	else
	{
		f32 dy = o->oPosY - gMarioObject->oPosY;
		if(o->oSoundStateID == 3)
		{
			func_802F932C(4);
		}
		else if(o->oVelY > 0.0f && dy > 200.0f)
		{
			s_set_skelanimeNo(2);
		}

		o->oKleptoPitch = -0x3000;
		if(o->oAnimState == KLEPTO_ANIM_STATE_HOLDING_NOTHING)
		{
			if(o->oSubAction == 0)
			{
				o->oKleptoPitch	      = obj_turn_pitch_toward_mario(0.0f, 0);
				o->oKleptoYawToTarget = o->oAngleToMario;

				if(dy < 160.0f)
				{
					o->oSubAction += 1;
				}
			}

			if(playerWorks[0].status != ACT_SLEEPING && !(playerWorks[0].status & (ACT_FLAG_SHORT_HITBOX | ACT_FLAG_BUTT_OR_STOMACH_SLIDE)) && o->oDistanceToMario < 200.0f && dy > 50.0f && dy < 90.0f)
			{
				if(PL_StealMariosHat(1))
				{
					o->oAnimState = KLEPTO_ANIM_STATE_HOLDING_CAP;
				}
			}
		}
	}

	obj_move_pitch_approach(o->oKleptoPitch, 600 / FRAME_RATE_SCALER_INV);
	obj_face_pitch_approach(o->oMoveAnglePitch, 600 / FRAME_RATE_SCALER_INV);
	obj_rotate_yaw_and_bounce_off_walls(o->oKleptoYawToTarget, 600 / FRAME_RATE_SCALER_INV);
}

static void klepto_act_struck_by_mario(void)
{
	s_set_skelanimeNo(1);

	obj_face_pitch_approach(0, 800 / FRAME_RATE_SCALER_INV);
	obj_face_yaw_approach(o->oMoveAngleYaw + 0x8000, 800 / FRAME_RATE_SCALER_INV);
	obj_face_roll_approach(0, 800 / FRAME_RATE_SCALER_INV);

	if(s_check_animeend())
	{
		o->oAction  = KLEPTO_ACT_RETREAT;
		o->oGravity = 0.0f;

		o->oMoveAnglePitch = -obj_get_pitch_from_vel();
		o->oKleptoSpeed	   = sqrtf(o->oForwardVel * o->oForwardVel + o->oVelY * o->oVelY);

		o->oHomeX = o->oPosX;
		o->oHomeY = o->oPosY + 500.0f;
		o->oHomeZ = o->oPosZ;
	}
}

static void klepto_act_retreat(void)
{
	s_set_skelanimeNo(0);
	approach_f32_ptr(&o->oKleptoSpeed, 40.0f, 10.0f * FRAME_RATE_SCALER);

	obj_move_pitch_approach(o->oKleptoPitch, 1000 / FRAME_RATE_SCALER_INV);

	obj_face_pitch_approach(o->oMoveAnglePitch, 1000 / FRAME_RATE_SCALER_INV);
	obj_rotate_yaw_and_bounce_off_walls(o->oKleptoYawToTarget, 600 / FRAME_RATE_SCALER_INV);

	if(obj_face_yaw_approach(o->oMoveAngleYaw, 1000 / FRAME_RATE_SCALER_INV))
	{
		if(s_calc_dangle(o->oFaceAnglePitch, o->oMoveAnglePitch) == 0)
		{
			o->oAction	   = KLEPTO_ACT_RESET_POSITION;
			o->oHomeY	   = 1500.0f;
			o->oKleptoUnkTimer = -100 * FRAME_RATE_SCALER_INV;
			o->oFlags |= 0x00000008;
			s_hitON();
		}
	}
}

static void klepto_act_reset_position(void)
{
	if(o->oTimer < 300 * FRAME_RATE_SCALER_INV)
	{
		klepto_circle_target(300.0f, 20.0f);
	}
	else if(o->oBehParams2ndByte != 0)
	{
		o->oHomeX = -2000.0f;
		o->oHomeZ = -1000.0f;
		o->oHomeY = o->oKleptoDistanceToTarget = 9999.0f;

		if(o->oPosY > 5000.0f)
		{
			s_remove_obj(o);
		}
		else
		{
			klepto_approach_target(20.0f);
		}
	}
	else
	{
		o->oAction = KLEPTO_ACT_WAIT_FOR_MARIO;
		o->oHomeX  = o->oKleptoStartPosX;
		o->oHomeY  = o->oKleptoStartPosY;
		o->oHomeZ  = o->oKleptoStartPosZ;
	}
}

void obj_set_speed_to_zero(void)
{
	o->oForwardVel = o->oVelY = 0.0f;
}

void bhv_klepto_update(void)
{
	UNUSED s32 unused;

	s_enemybgcheck();

	o->oKleptoDistanceToTarget = s_calc_enemyscope();
	o->oKleptoPitch		   = obj_get_pitch_to_home(o->oKleptoDistanceToTarget);
	o->oKleptoYawToTarget	   = s_calc_returnangle();

	if(o->oAction == KLEPTO_ACT_STRUCK_BY_MARIO)
	{
		klepto_act_struck_by_mario();
	}
	else
	{
		obj_compute_vel_from_move_pitch(o->oKleptoSpeed);

		switch(o->oAction)
		{
			case KLEPTO_ACT_CIRCLE_TARGET_HOLDING:
				klepto_circle_target(300.0f, 40.0f);
				break;
			case KLEPTO_ACT_APPROACH_TARGET_HOLDING:
				klepto_approach_target(50.0f);
				break;
			case KLEPTO_ACT_WAIT_FOR_MARIO:
				klepto_act_wait_for_mario();
				break;
			case KLEPTO_ACT_TURN_TOWARD_MARIO:
				klepto_act_turn_toward_mario();
				break;
			case KLEPTO_ACT_DIVE_AT_MARIO:
				klepto_act_dive_at_mario();
				break;
			case KLEPTO_ACT_RESET_POSITION:
				klepto_act_reset_position();
				break;
			case KLEPTO_ACT_RETREAT:
				klepto_act_retreat();
				break;
		}

		if(obj_handle_attacks(&sKleptoHitbox, o->oAction, sKleptoAttackHandlers))
		{
			objsound(SOUND_OBJ_KLEPTO2);

			if(o->oAnimState == KLEPTO_ANIM_STATE_HOLDING_CAP)
			{
				BuClrItemFlag(SAVE_FLAG_CAP_ON_KLEPTO);
				s_makeobj_nowpos(o, MODEL_MARIOS_CAP, sm64::bhv::bhvNormalCap());
			}
			else if(o->oAnimState == KLEPTO_ANIM_STATE_HOLDING_STAR)
			{
				s_enemyset_star(-5550.0f, 300.0f, -930.0f);
			}
			else if(o->oAnimState == KLEPTO_ANIM_STATE_HOLDING_BLUE_STAR)
			{
				s_enemyset_star(-5550.0f, 300.0f, -930.0f);
				s_change_shape(MODEL_TRANSPARENT_STAR);
			}

			o->oAnimState = KLEPTO_ANIM_STATE_HOLDING_NOTHING;
			o->oAction    = KLEPTO_ACT_STRUCK_BY_MARIO;
			o->oGravity   = -2.0f;

			o->oMoveAngleYaw = o->oAngleToMario + 0x8000;
			o->oFlags &= ~0x00000008;
			s_hitOFF();
		}
		else if(playerWorks[0].status == ACT_SLEEPING || (playerWorks[0].status & (ACT_FLAG_SHORT_HITBOX | ACT_FLAG_BUTT_OR_STOMACH_SLIDE)))
		{
			s_hitOFF();
		}
		else
		{
			s_hitON();
		}
	}

	obj_roll_to_match_yaw_turn(o->oKleptoYawToTarget, 0x3000, 600);
	s_enemymove(78);
}
