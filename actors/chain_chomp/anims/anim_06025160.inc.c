// 0x06025030
static const s16 chain_chomp_seg6_animvalue_06025030[] = {
	 0x0000,  0x3fff, -0x69fe, -0x6b7d, -0x6f2e, -0x73e5, -0x7872, -0x7ba6, 
	-0x7c54, -0x7752, -0x6d9c, -0x643b, -0x6037, -0x6384, -0x6af1, -0x73d9, 
	-0x7b93, -0x7f76, -0x7cb8, -0x7545, -0x6d8d, -0x69fe,  0x6fb2,  0x70c6, 
	 0x7369,  0x76ba,  0x79d6,  0x7bdd,  0x7beb,  0x7752,  0x6ed7,  0x66ca, 
	 0x6379,  0x6692,  0x6d54,  0x756c,  0x7c87, -0x7fac,  0x7e7c,  0x78b0, 
	 0x728d,  0x6fb2, -0x69fe, -0x6b7d, -0x6f2e, -0x73e5, -0x7872, -0x7ba6, 
	-0x7c54, -0x7752, -0x6d9c, -0x643b, -0x6037, -0x6384, -0x6af1, -0x73d9, 
	-0x7b93, -0x7f76, -0x7cb8, -0x7545, -0x6d8d, -0x69fe,  0x6fb2,  0x70c6, 
	 0x7369,  0x76ba,  0x79d6,  0x7bdd,  0x7beb,  0x7752,  0x6ed7,  0x66ca, 
	 0x6379,  0x6692,  0x6d54,  0x756c,  0x7c87, -0x7fac,  0x7e7c,  0x78b0, 
	 0x728d,  0x6fb2,  0x6fb2,  0x70c6,  0x7369,  0x76ba,  0x79d6,  0x7bdd, 
	 0x7beb,  0x7752,  0x6ed7,  0x66ca,  0x6379,  0x6692,  0x6d54,  0x756c, 
	 0x7c87, -0x7fac,  0x7e7c,  0x78b0,  0x728d,  0x6fb2,  0x3fff,  0x0000, 
	
};

// 0x06025100
static const u16 chain_chomp_seg6_animindex_06025100[] = {
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0014, 0x002A,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0014, 0x0002,
    0x0001, 0x0000, 0x0001, 0x0066, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0014, 0x0052,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0014, 0x003E,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0014, 0x0016,
};

// 0x06025160
static const struct Animation chain_chomp_seg6_anim_06025160 = {
	Animation::Flags::NONE,
    0,
    0,
    0,
    0x14,
    ANIMINDEX_NUMPARTS(chain_chomp_seg6_animindex_06025100),
    chain_chomp_seg6_animvalue_06025030,
    chain_chomp_seg6_animindex_06025100,
    0,
};
