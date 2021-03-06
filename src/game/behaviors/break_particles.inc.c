// break_particles.c.inc

void s_boxeffect(s16 numTris, s16 triModel, f32 triSize, s16 triAnimState)
{
	struct Object* triangle;
	s32 i;
	for(i = 0; i < numTris; i++)
	{
		triangle	     = s_makeobj_nowpos(o, triModel, sm64::bhv::bhvBreakBoxTriangle());
		triangle->oAnimState = triAnimState;
		triangle->oPosY += 100.0f;
		triangle->oMoveAngleYaw	  = RandomU16();
		triangle->oFaceAngleYaw	  = triangle->oMoveAngleYaw;
		triangle->oFaceAnglePitch = RandomU16();
		triangle->oVelY		  = s_random_f(50.0f);
		if(triModel == 138 || triModel == 56)
		{
			triangle->oAngleVelPitch = 0xF00;
			triangle->oAngleVelYaw	 = 0x500;
			triangle->oForwardVel	 = 30.0f;
		}
		else
		{
			triangle->oAngleVelPitch = 0x80 * (s32)(Randomf() + 50.0f);
			triangle->oForwardVel	 = 30.0f;
		}
		s_scale(triangle, triSize);
	}
}
