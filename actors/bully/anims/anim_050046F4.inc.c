// 0x050045B0
static const s16 bully_seg5_animvalue_050045B0[] = {
	 0x0000,  0x00ae,  0x00ae,  0x00ae,  0x00c1,  0x00d0,  0x00d7,  0x00d3, 
	 0x00ca,  0x00bd,  0x00ae,  0x00ae,  0x00ae,  0x3fff, -0x3ff3, -0x40eb, 
	-0x3feb, -0x3422, -0x3c27, -0x4796, -0x4e36, -0x4dac, -0x4a41, -0x45ae, 
	-0x41ab, -0x3ff3, -0x7fff, -0x7fff,  0x3fa3,  0x3ef5,  0x4050,  0x4bdc, 
	 0x43f9,  0x38bd,  0x3231,  0x329c,  0x35d3,  0x3a2b,  0x3dfe,  0x3fa3, 
	-0x360c, -0x394c, -0x4070, -0x4795, -0x4ad4, -0x40b2, -0x360c, -0x3902, 
	-0x4001, -0x4520, -0x4352, -0x403e, -0x360c, -0x394c, -0x4070, -0x4795, 
	-0x4ad4, -0x40b2, -0x360c, -0x3902, -0x4001, -0x4520, -0x4352, -0x403e, 
	-0x3fb1, -0x3fb1,  0x3581,  0x38c0,  0x3fe5,  0x4709,  0x4a48,  0x4027, 
	 0x3581,  0x3877,  0x3f76,  0x4494,  0x42c7,  0x3fb2, 
};

// 0x0500464C
static const u16 bully_seg5_animindex_0500464C[] = {
    0x0001, 0x0000, 0x000C, 0x0001, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x000D, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000C, 0x0042,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0041,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000C, 0x0028,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000C, 0x000E,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0040,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000C, 0x0034,
    0x0001, 0x001A, 0x0001, 0x001B, 0x000C, 0x001C,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
};

// 0x050046F4
static const struct Animation bully_seg5_anim_050046F4 = {
	Animation::Flags::NONE,
    0,
    0,
    0,
    0x0C,
    ANIMINDEX_NUMPARTS(bully_seg5_animindex_0500464C),
    bully_seg5_animvalue_050045B0,
    bully_seg5_animindex_0500464C,
    0,
};
