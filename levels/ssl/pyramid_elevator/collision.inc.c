// 0x07028110 - 0x07028274
const Collision ssl_seg7_collision_pyramid_elevator[] = {
    COL_INIT(),
    COL_VERTEX_INIT(0x14),
    COL_VERTEX(-511, 0, 512),
    COL_VERTEX(512, 0, 512),
    COL_VERTEX(512, 0, -511),
    COL_VERTEX(-511, 0, -511),
    COL_VERTEX(512, 256, -511),
    COL_VERTEX(461, 256, 461),
    COL_VERTEX(512, 256, 512),
    COL_VERTEX(-460, 256, 461),
    COL_VERTEX(-511, 256, 512),
    COL_VERTEX(-511, 256, -511),
    COL_VERTEX(461, 256, -460),
    COL_VERTEX(-460, 256, -460),
    COL_VERTEX(461, 0, 461),
    COL_VERTEX(-460, 0, 461),
    COL_VERTEX(461, 0, -460),
    COL_VERTEX(-460, 0, -460),
    COL_VERTEX(-511, -50, -511),
    COL_VERTEX(512, -50, -511),
    COL_VERTEX(512, -50, 512),
    COL_VERTEX(-511, -50, 512),
    COL_TRI_INIT(SURFACE_DEFAULT, 10),
    COL_TRI(2, 16, 3),
    COL_TRI(2, 17, 16),
    COL_TRI(1, 17, 2),
    COL_TRI(1, 18, 17),
    COL_TRI(16, 17, 18),
    COL_TRI(3, 16, 19),
    COL_TRI(16, 18, 19),
    COL_TRI(3, 19, 0),
    COL_TRI(0, 19, 18),
    COL_TRI(0, 18, 1),
    COL_TRI_INIT(SURFACE_CLOSE_CAMERA, 2),
    COL_TRI(0, 1, 2),
    COL_TRI(0, 2, 3),
    COL_TRI_INIT(SURFACE_NO_CAM_COLLISION, 24),
    COL_TRI(10, 12, 5),
    COL_TRI(4, 5, 6),
    COL_TRI(6, 5, 7),
    COL_TRI(6, 7, 8),
    COL_TRI(6, 2, 4),
    COL_TRI(6, 1, 2),
    COL_TRI(8, 1, 6),
    COL_TRI(8, 0, 1),
    COL_TRI(4, 2, 3),
    COL_TRI(4, 3, 9),
    COL_TRI(4, 10, 5),
    COL_TRI(9, 10, 4),
    COL_TRI(8, 7, 11),
    COL_TRI(8, 11, 9),
    COL_TRI(9, 0, 8),
    COL_TRI(9, 3, 0),
    COL_TRI(9, 11, 10),
    COL_TRI(5, 12, 13),
    COL_TRI(5, 13, 7),
    COL_TRI(11, 14, 10),
    COL_TRI(10, 14, 12),
    COL_TRI(7, 13, 15),
    COL_TRI(7, 15, 11),
    COL_TRI(11, 15, 14),
    COL_TRI_STOP(),
    COL_END(),
};
