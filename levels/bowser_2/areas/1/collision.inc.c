// 0x070019F0 - 0x07001A66
const Collision bowser_2_seg7_collision_lava[] = {
    COL_INIT(),
    COL_VERTEX_INIT(0x8),
    COL_VERTEX(-2776, -1023, -6479),
    COL_VERTEX(-6545, -1023, -2617),
    COL_VERTEX(-6479, -1023, 2777),
    COL_VERTEX(6480, -1023, -2776),
    COL_VERTEX(2618, -1023, -6545),
    COL_VERTEX(-2617, -1023, 6546),
    COL_VERTEX(6546, -1023, 2618),
    COL_VERTEX(2777, -1023, 6480),
    COL_TRI_INIT(SURFACE_BURNING, 6),
    COL_TRI(0, 1, 2),
    COL_TRI(0, 3, 4),
    COL_TRI(0, 2, 5),
    COL_TRI(0, 6, 3),
    COL_TRI(0, 7, 6),
    COL_TRI(0, 5, 7),
    COL_TRI_STOP(),
    COL_SPECIAL_INIT(2),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_null_start, /*pos*/  0, 1229,     0, /*yaw*/ 128), // unused, probably an early way to set intial position
    SPECIAL_OBJECT(/*preset*/ special_bowser,     /*pos*/ -8, 1229, -1418),
    COL_END(),
};
