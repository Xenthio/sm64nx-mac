// 0x07016F18 - 0x070170A0
const MacroObject ttm_seg7_area_1_macro_objs[] = {
    MACRO_OBJECT(/*preset*/ macro_bobomb_buddy_opens_cannon,   /*yaw*/   0, /*pos*/   799, -2668,  3320),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_cannon_closed,               /*yaw*/  45, /*pos*/  5035, -3994, -3445, /*behParam*/ 0xC0),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/  90, /*pos*/  3644, -1304,  1422, /*behParam*/ DIALOG_072),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/   0, /*pos*/   622, -4331,  5466, /*behParam*/ DIALOG_094),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  1450, -2750, -4250),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  2550, -2750, -3400),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  4150, -2700, -2800),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/ -1600, -1650, -2500),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/ -1200, -1600, -3250),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/ -1850,   100, -2850),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/ -1500,  -800, -2750),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/ 180, /*pos*/ -1126, -3448, -4400, /*behParam*/ DIALOG_091),
    MACRO_OBJECT(/*preset*/ macro_goomba_triplet_spawner,      /*yaw*/   0, /*pos*/  1740, -4236,  5320),
    MACRO_OBJECT(/*preset*/ macro_coin_ring_horizontal,        /*yaw*/   0, /*pos*/  4540, -4607,  1060),
    MACRO_OBJECT(/*preset*/ macro_1up,                         /*yaw*/   0, /*pos*/ -3713, -4130,  3530),
    MACRO_OBJECT(/*preset*/ macro_bobomb,                      /*yaw*/   0, /*pos*/ -3507, -2480, -1046),
    MACRO_OBJECT(/*preset*/ macro_bobomb,                      /*yaw*/   0, /*pos*/ -3538, -2409,   -61),
    MACRO_OBJECT(/*preset*/ macro_bobomb,                      /*yaw*/   0, /*pos*/ -3538, -2330,  1046),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/  82, /*pos*/  -521, -2047,  3568),
    MACRO_OBJECT(/*preset*/ macro_bobomb,                      /*yaw*/   0, /*pos*/  2369, -1451, -3876),
    MACRO_OBJECT(/*preset*/ macro_bobomb,                      /*yaw*/   0, /*pos*/   707, -1223, -3846),
    MACRO_OBJECT(/*preset*/ macro_1up,                         /*yaw*/   0, /*pos*/ -1010,  -705, -3385),
    MACRO_OBJECT(/*preset*/ macro_goomba_triplet_spawner,      /*yaw*/   0, /*pos*/  -584,   195,  1476),
    MACRO_OBJECT(/*preset*/ macro_1up,                         /*yaw*/   0, /*pos*/  1530,   620,  1670),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/   0, /*pos*/  3476,   708,  -896),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/ 125, /*pos*/  2461,  1461,  1960),
    MACRO_OBJECT(/*preset*/ macro_box_1up,                     /*yaw*/   0, /*pos*/  3261, -2553, -4092),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal_flying, /*yaw*/ 330, /*pos*/ -1907,  -861, -3138),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/  30, /*pos*/  1950,   880,  1321),
    MACRO_OBJECT(/*preset*/ macro_floor_switch_hidden_objects, /*yaw*/  50, /*pos*/ -1200,  1543,   460),
    MACRO_OBJECT(/*preset*/ macro_goomba_triplet_spawner,      /*yaw*/   0, /*pos*/  -600,  1177, -1340),
    MACRO_OBJECT(/*preset*/ macro_fish_group,                  /*yaw*/   0, /*pos*/  -780, -4580,  4440),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/  55, /*pos*/  -900,  1540,   580),
    MACRO_OBJECT(/*preset*/ macro_chuckya,                     /*yaw*/ 270, /*pos*/ -2676, -2145,  2923),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  1840, -2880, -3600),
    MACRO_OBJECT(/*preset*/ macro_coin_line_vertical,          /*yaw*/   0, /*pos*/  -880,  1750,   580),
    MACRO_OBJECT(/*preset*/ macro_fire_fly_guy,                /*yaw*/   0, /*pos*/  2300, -1384,  3753),
    MACRO_OBJECT(/*preset*/ macro_butterfly_triplet,           /*yaw*/   0, /*pos*/  -606,  1186, -1290),
    MACRO_OBJECT(/*preset*/ macro_jumping_box,                 /*yaw*/   0, /*pos*/  4980, -4607,  2680),
    MACRO_OBJECT_END(),
};

#include "game/debug.h"

namespace sm64::macro
{
	EXPORT_MACRO(ttm_seg7_area_1_macro_objs);
}
