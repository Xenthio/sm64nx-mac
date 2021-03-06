// water_objs.c.inc
// TODO: Better name, please

void bhv_water_air_bubble_init(void)
{
	s_set_scale(4.0f);
}

// Fields 0xF4 & 0xF8 seem to be angles for bubble and cannon

void bhv_water_air_bubble_loop(void)
{
	s32 i;
	o->header.gfx.scale[0] = sins(o->oWaterObjScaleCounterX) * 0.5 + 4.0;
	o->header.gfx.scale[1] = -sins(o->oWaterObjScaleCounterX) * 0.5 + 4.0;
	o->oWaterObjScaleCounterX += 0x400 / FRAME_RATE_SCALER_INV;
	if(o->oTimer < 30 * FRAME_RATE_SCALER_INV)
	{
		s_hitOFF();
		o->oPosY += 3.0f * FRAME_RATE_SCALER;
	}
	else
	{
		s_hitON();
		obj_forward_vel_approach_upward(2.0f, 10.0f * FRAME_RATE_SCALER);
		o->oMoveAngleYaw = s_calc_targetangle(o, gMarioObject);
		s_optionmove_F();
	}

	o->oPosX += (Randomf() * 4.0f - 2.0f) * FRAME_RATE_SCALER;
	o->oPosZ += (Randomf() * 4.0f - 2.0f) * FRAME_RATE_SCALER;

	if(o->oInteractStatus & INT_STATUS_INTERACTED || o->oTimer > 200 * FRAME_RATE_SCALER_INV)
	{
		objsound(SOUND_GENERAL_QUIET_BUBBLE);
		s_remove_obj(o);
		for(i = 0; i < 30; i++)
			s_makeobj_nowpos(o, MODEL_BUBBLE, sm64::bhv::bhvBubbleMaybe());
	}
	if(mcWaterCheck(o->oPosX, o->oPosZ) < o->oPosY)
		s_remove_obj(o);
	o->oInteractStatus = 0;
}

void bhv_bubble_wave_init(void)
{
	o->oWaterObjAnimSpeedX = 0x800 + (s32)(Randomf() * 2048.0f);
	o->oWaterObjAnimSpeedY = 0x800 + (s32)(Randomf() * 2048.0f);
	objsound(SOUND_GENERAL_QUIET_BUBBLE);
}

void Unknown802A7E48(void)
{
	s_set_scale(Randomf() + 1.0);
}

void bhv_bubble_maybe_loop(void)
{
	o->oPosY += (Randomf() * 3.0f + 6.0f) * FRAME_RATE_SCALER;
	o->oPosX += (Randomf() * 10.0f - 5.0f) * FRAME_RATE_SCALER;
	o->oPosZ += (Randomf() * 10.0f - 5.0f) * FRAME_RATE_SCALER;

	o->header.gfx.scale[0] = sins(o->oWaterObjScaleCounterX) * 0.2 + 1.0;
	o->oWaterObjScaleCounterX += o->oWaterObjAnimSpeedX / FRAME_RATE_SCALER_INV;
	o->header.gfx.scale[1] = sins(o->oWaterObjScaleCounterY) * 0.2 + 1.0;
	o->oWaterObjScaleCounterY += o->oWaterObjAnimSpeedY / FRAME_RATE_SCALER_INV;
}

void bhv_small_water_wave_loop(void)
{
	f32 waterLevel = mcWaterCheck(o->oPosX, o->oPosZ);

	o->header.gfx.scale[0] = sins(o->oWaterObjScaleCounterX) * 0.2 + 1.0;
	o->oWaterObjScaleCounterX += o->oWaterObjAnimSpeedX / FRAME_RATE_SCALER_INV;

	o->header.gfx.scale[1] = sins(o->oWaterObjScaleCounterY) * 0.2 + 1.0;
	o->oWaterObjScaleCounterY += o->oWaterObjAnimSpeedY / FRAME_RATE_SCALER_INV;

	if(o->oPosY > waterLevel)
	{
		o->activeFlags = 0;
		o->oPosY += 5.0f * FRAME_RATE_SCALER;
		if(gFreeObjectList.next != NULL)
		{
			s_makeobj_nowpos(o, MODEL_SPOT_ON_GROUND, sm64::bhv::bhvWaterSurfaceWhiteWave2());
		}
	}

	if(o->oInteractStatus & INT_STATUS_INTERACTED)
	{
		s_remove_obj(o);
	}
}

void func_802A81C4(void)
{
	o->header.gfx.scale[0] = sins(o->oWaterObjScaleCounterX) * 0.5 + 2.0;
	o->oWaterObjScaleCounterX += o->oWaterObjAnimSpeedX / FRAME_RATE_SCALER_INV;
	o->header.gfx.scale[1] = sins(o->oWaterObjScaleCounterY) * 0.5 + 2.0;
	o->oWaterObjScaleCounterY += o->oWaterObjAnimSpeedY / FRAME_RATE_SCALER_INV;
}

void bhv_particle_init(void)
{
	stSetScale(o, 2.0f, 2.0f, 1.0f);
	o->oWaterObjAnimSpeedX = 0x800 + (s32)(Randomf() * 2048.0f);
	o->oWaterObjAnimSpeedY = 0x800 + (s32)(Randomf() * 2048.0f);
	s_random_XYZ_offset(o, 100.0f);
}

void bhv_particle_loop()
{
	f32 sp24 = mcWaterCheck(o->oPosX, o->oPosZ);
	o->oPosY += 5.0f * FRAME_RATE_SCALER;
	s_random_XZ_offset(o, 4.0f);
	func_802A81C4();
	if(o->oPosY > sp24 && o->oTimer)
	{
		s_remove_obj(o);
		s_makeobj_effect(5, 0, o, MODEL_SPOT_ON_GROUND, sm64::bhv::bhvWaterSurfaceWhiteWave2());
	}
}

void bhv_small_bubbles_loop(void)
{
	o->oPosY += 5.0f * FRAME_RATE_SCALER;
	s_random_XZ_offset(o, 4.0f);
	func_802A81C4();
}

void bhv_fish_group_loop(void)
{
	if(gMarioCurrentRoom == 15 || gMarioCurrentRoom == 7)
		if(frameCounter & 1)
			s_makeobj_nowpos(o, MODEL_WHITE_PARTICLE_SMALL, sm64::bhv::bhvSmallParticleBubbles());
}

void bhv_water_waves_init(void)
{
	s32 sp1C;
	for(sp1C = 0; sp1C < 3; sp1C++)
		s_makeobj_nowpos(o, MODEL_WHITE_PARTICLE_SMALL, sm64::bhv::bhvSmallParticle());
}
