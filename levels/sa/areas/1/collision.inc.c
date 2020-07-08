// 0x07003000 - 0x07003282
const Collision sa_seg7_collision[] = {
    COL_INIT(),
    COL_VERTEX_INIT(0x30),
    COL_VERTEX(-2661, 0, 3072),
    COL_VERTEX(2662, 0, 3072),
    COL_VERTEX(2662, -4607, 3072),
    COL_VERTEX(-2661, -4607, 3072),
    COL_VERTEX(2662, 0, -3071),
    COL_VERTEX(-2661, 0, -3071),
    COL_VERTEX(-2661, -4607, -3071),
    COL_VERTEX(2662, -4607, -3071),
    COL_VERTEX(-3071, 0, -2661),
    COL_VERTEX(-3071, 0, 2662),
    COL_VERTEX(-3071, -4607, 2662),
    COL_VERTEX(-3071, -4607, -2661),
    COL_VERTEX(3072, 0, 2662),
    COL_VERTEX(3072, -4607, -2661),
    COL_VERTEX(3072, -4607, 2662),
    COL_VERTEX(3072, 0, -2661),
    COL_VERTEX(3072, 0, 3072),
    COL_VERTEX(-3071, -4607, 3072),
    COL_VERTEX(512, -4607, -511),
    COL_VERTEX(-511, -4607, -511),
    COL_VERTEX(307, -4402, -306),
    COL_VERTEX(-511, -4607, 512),
    COL_VERTEX(512, -4607, 512),
    COL_VERTEX(-2866, -4607, 2662),
    COL_VERTEX(-2661, -4607, 2867),
    COL_VERTEX(-2661, -4607, -2866),
    COL_VERTEX(-2866, -4607, -2661),
    COL_VERTEX(2867, -4607, -2661),
    COL_VERTEX(2662, -4607, -2866),
    COL_VERTEX(2662, -4607, 2867),
    COL_VERTEX(2867, -4607, 2662),
    COL_VERTEX(-3071, 0, -3071),
    COL_VERTEX(3072, 0, -3071),
    COL_VERTEX(-3071, 0, 3072),
    COL_VERTEX(3072, -4607, 3072),
    COL_VERTEX(-3071, -4607, -3071),
    COL_VERTEX(3072, -4607, -3071),
    COL_VERTEX(-306, -4402, 307),
    COL_VERTEX(307, -4402, 307),
    COL_VERTEX(-306, -4402, -306),
    COL_VERTEX(-2866, 0, 2662),
    COL_VERTEX(-2661, 0, 2867),
    COL_VERTEX(-2661, 0, -2866),
    COL_VERTEX(-2866, 0, -2661),
    COL_VERTEX(2867, 0, -2661),
    COL_VERTEX(2662, 0, -2866),
    COL_VERTEX(2662, 0, 2867),
    COL_VERTEX(2867, 0, 2662),
    COL_TRI_INIT(SURFACE_DEFAULT, 52),
    COL_TRI(12, 13, 14),
    COL_TRI(0, 1, 2),
    COL_TRI(0, 2, 3),
    COL_TRI(4, 5, 6),
    COL_TRI(4, 6, 7),
    COL_TRI(8, 9, 10),
    COL_TRI(8, 10, 11),
    COL_TRI(17, 19, 35),
    COL_TRI(12, 15, 13),
    COL_TRI(16, 31, 32),
    COL_TRI(16, 33, 31),
    COL_TRI(17, 34, 22),
    COL_TRI(17, 22, 21),
    COL_TRI(17, 21, 19),
    COL_TRI(21, 39, 19),
    COL_TRI(18, 22, 34),
    COL_TRI(18, 34, 36),
    COL_TRI(19, 18, 36),
    COL_TRI(19, 36, 35),
    COL_TRI(20, 37, 38),
    COL_TRI(19, 39, 20),
    COL_TRI(19, 20, 18),
    COL_TRI(18, 20, 38),
    COL_TRI(20, 39, 37),
    COL_TRI(21, 37, 39),
    COL_TRI(24, 0, 3),
    COL_TRI(22, 38, 37),
    COL_TRI(22, 37, 21),
    COL_TRI(18, 38, 22),
    COL_TRI(10, 9, 40),
    COL_TRI(10, 40, 23),
    COL_TRI(23, 40, 41),
    COL_TRI(23, 41, 24),
    COL_TRI(24, 41, 0),
    COL_TRI(27, 44, 45),
    COL_TRI(6, 5, 42),
    COL_TRI(6, 42, 25),
    COL_TRI(25, 42, 43),
    COL_TRI(25, 43, 26),
    COL_TRI(26, 43, 8),
    COL_TRI(26, 8, 11),
    COL_TRI(13, 15, 44),
    COL_TRI(13, 44, 27),
    COL_TRI(30, 12, 14),
    COL_TRI(27, 45, 28),
    COL_TRI(28, 45, 4),
    COL_TRI(28, 4, 7),
    COL_TRI(2, 1, 46),
    COL_TRI(2, 46, 29),
    COL_TRI(29, 46, 47),
    COL_TRI(29, 47, 30),
    COL_TRI(30, 47, 12),
    COL_TRI_STOP(),
    COL_SPECIAL_INIT(1),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_null_start, /*pos*/ 0, -1535, 0, /*yaw*/ 64), // unused, probably an early way to set intial position
    COL_WATER_BOX_INIT(1),
    COL_WATER_BOX(0, -3173, -3173, 3174, 3174, 102),
    COL_END(),
};
