// jumping_box.c.inc

struct ObjectHitbox sJumpingBoxHitbox = {
    /* interactType: */ INTERACT_GRABBABLE,
    /* downOffset: */ 20,
    /* damageOrCoinValue: */ 0,
    /* health: */ 1,
    /* numLootCoins: */ 5,
    /* radius: */ 150,
    /* height: */ 250,
    /* hurtboxRadius: */ 150,
    /* hurtboxHeight: */ 250,
};

void ActionJumpingBox0(void)
{
	if(o->oSubAction == 0)
	{
		if(o->oJumpingBoxUnkF8-- < 0)
			o->oSubAction++;
		if(o->oTimer > o->oJumpingBoxUnkF4 * FRAME_RATE_SCALER_INV)
		{
			o->oVelY = Randomf() * 5.0f + 15.0f;
			o->oSubAction++;
		}
	}
	else if(o->oMoveFlags & 2)
	{
		o->oSubAction	    = 0;
		o->oJumpingBoxUnkF8 = Randomf() * 60.0f + 30.0f;
	}
}

void ActionJumpingBox1(void)
{
	if(o->oMoveFlags & (0x200 | 0x40 | 0x20 | 0x10 | 0x8 | 0x1))
	{
		s_remove_obj(o);
		s_kemuri();
	}
}

void (*sJumpingBoxActions[])(void) = {ActionJumpingBox0, ActionJumpingBox1};

void func_802B1F84(void)
{
	s_change_shape(MODEL_BREAKABLE_BOX);
	s_set_scale(0.5f);
	s_set_hitparam(o, &sJumpingBoxHitbox);
	s_enemybgcheck();
	s_enemymove(78);
	s_modejmp(sJumpingBoxActions);
}

void bhv_jumping_box_loop(void)
{
	switch(o->oHeldState)
	{
		case HELD_FREE:
			func_802B1F84();
			break;
		case HELD_HELD:
			s_copy_worldXYZ(o, gMarioObject);
			s_change_shape(MODEL_BREAKABLE_BOX_SMALL);
			s_mode_catch(-1, 0);
			break;
		case HELD_THROWN:
			s_mode_throw(40.0f, 20.0f, 1);
			break;
		case HELD_DROPPED:
			s_mode_drop();
			o->oAction = 1;
			break;
	}
	if(o->oInteractStatus & INTERACT_HIT_FROM_BELOW)
	{
		obj_remove_sound(SOUND_GENERAL_BREAK_BOX);
		s_burn_remove(46.0f, 1);
	}
	o->oInteractStatus = 0;
}
