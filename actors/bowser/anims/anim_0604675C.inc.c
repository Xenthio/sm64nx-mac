// 0x06046734
static const s16 bowser_seg6_animvalue_06046734[] = {
	 0x0000,  0x0076,  0x00db,  0x0050, -0x3de4, -0x1734, -0x39c5,  0x0000, 
	
};

// 0x06046744
static const u16 bowser_seg6_animindex_06046744[] = {
    0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0003, 0x0001, 0x0004, 0x0001, 0x0005, 0x0001, 0x0006,
};

// 0x0604675C
static const struct Animation bowser_seg6_anim_0604675C = {
	Animation::Flags::NONE,
    0,
    0,
    0,
    0x64,
    ANIMINDEX_NUMPARTS(bowser_seg6_animindex_06046744),
    bowser_seg6_animvalue_06046734,
    bowser_seg6_animindex_06046744,
    0,
};
