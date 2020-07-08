// 0x07012644 - 0x07012758
const Collision ssl_seg7_collision_tox_box[] = {
    COL_INIT(),
    COL_VERTEX_INIT(0x10),
    COL_VERTEX(-255, 256, 256),
    COL_VERTEX(256, 256, -255),
    COL_VERTEX(-255, 256, -255),
    COL_VERTEX(256, 256, 256),
    COL_VERTEX(-255, -255, 256),
    COL_VERTEX(256, -255, 256),
    COL_VERTEX(256, -255, -255),
    COL_VERTEX(-255, -255, -255),
    COL_VERTEX(154, -255, 154),
    COL_VERTEX(154, -255, -153),
    COL_VERTEX(-153, -255, -153),
    COL_VERTEX(-153, -255, 154),
    COL_VERTEX(-153, 154, 154),
    COL_VERTEX(-153, 154, -153),
    COL_VERTEX(154, 154, -153),
    COL_VERTEX(154, 154, 154),
    COL_TRI_INIT(SURFACE_WALL_MISC, 28),
    COL_TRI(12, 13, 14),
    COL_TRI(0, 1, 2),
    COL_TRI(0, 3, 1),
    COL_TRI(4, 0, 2),
    COL_TRI(5, 0, 4),
    COL_TRI(5, 3, 0),
    COL_TRI(6, 3, 5),
    COL_TRI(6, 1, 3),
    COL_TRI(7, 1, 6),
    COL_TRI(7, 2, 1),
    COL_TRI(4, 2, 7),
    COL_TRI(8, 6, 5),
    COL_TRI(8, 9, 6),
    COL_TRI(7, 6, 9),
    COL_TRI(4, 8, 5),
    COL_TRI(7, 9, 10),
    COL_TRI(7, 11, 4),
    COL_TRI(7, 10, 11),
    COL_TRI(4, 11, 8),
    COL_TRI(12, 11, 10),
    COL_TRI(12, 10, 13),
    COL_TRI(10, 14, 13),
    COL_TRI(10, 9, 14),
    COL_TRI(8, 11, 12),
    COL_TRI(14, 9, 8),
    COL_TRI(12, 14, 15),
    COL_TRI(8, 12, 15),
    COL_TRI(14, 8, 15),
    COL_TRI_STOP(),
    COL_END(),
};
