// 0x070157D8 - 0x0701585C
const Collision ttc_seg7_collision_070157D8[] = {
    COL_INIT(),
    COL_VERTEX_INIT(0x8),
    COL_VERTEX(102, 205, 102),
    COL_VERTEX(-101, 0, 102),
    COL_VERTEX(102, 0, 102),
    COL_VERTEX(102, 0, -101),
    COL_VERTEX(-101, 205, -101),
    COL_VERTEX(-101, 205, 102),
    COL_VERTEX(-101, 0, -101),
    COL_VERTEX(102, 205, -101),
    COL_TRI_INIT(SURFACE_NOT_SLIPPERY, 12),
    COL_TRI(0, 1, 2),
    COL_TRI(2, 1, 3),
    COL_TRI(0, 2, 3),
    COL_TRI(4, 1, 5),
    COL_TRI(4, 6, 1),
    COL_TRI(0, 5, 1),
    COL_TRI(1, 6, 3),
    COL_TRI(4, 7, 3),
    COL_TRI(4, 3, 6),
    COL_TRI(0, 3, 7),
    COL_TRI(7, 5, 0),
    COL_TRI(7, 4, 5),
    COL_TRI_STOP(),
    COL_END(),
};
