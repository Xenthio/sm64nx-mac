// 0x07010F00 - 0x0701109C
const MacroObject pss_seg7_macro_objs[] = {
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -3233,  4688, -5600),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -5636,  4331, -5054),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -5980,  3453,   945),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -2870,  2837,  2300),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  3930,   274,  2425),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  5174,    61,  3200),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  5707,  -128,  4565),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  5194,  -310,  5845),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  3640,  -543,  6450),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  2550,  -700,  6050),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  1821,  -921,  4616),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/   -20, -2542, -6304),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -1197, -2929, -4692),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -2565, -3268, -3525),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -4909, -3633, -4218),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -6290, -3937, -2545),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,      /*yaw*/  90, /*pos*/  3580,  6140, -5180, /*behParam*/ DIALOG_149),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal, /*yaw*/  90, /*pos*/  3000,  6180, -5640),
    MACRO_OBJECT(/*preset*/ macro_blue_coin_switch,     /*yaw*/   0, /*pos*/  5423,  6140, -6540),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,     /*yaw*/   0, /*pos*/   780,  5613, -5600),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,     /*yaw*/   0, /*pos*/  2360,  5979, -5600),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/  1880, -1440,    60),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/  1860, -1760, -1720),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/  1860, -1200,  1680),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_trigger,   /*yaw*/   0, /*pos*/  1860, -1220,  1700),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_trigger,   /*yaw*/   0, /*pos*/  1880, -1460,    80),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_trigger,   /*yaw*/   0, /*pos*/  1860, -1820, -1680),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_trigger,   /*yaw*/   0, /*pos*/ -6380, -4550,  6320),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_hidden_1up,           /*yaw*/   0, /*pos*/ -6380, -4500,  5980, /*behParam*/ 4),
    MACRO_OBJECT(/*preset*/ macro_1up_sliding,          /*yaw*/ 180, /*pos*/  1847,  -961,  3863),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal, /*yaw*/  90, /*pos*/   260,  2580,  2280),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal, /*yaw*/  90, /*pos*/  -880,  2880,  2280),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,     /*yaw*/   0, /*pos*/  -809,  5245, -5600),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,     /*yaw*/   0, /*pos*/ -2409,  4877, -5600),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -6400, -4146,  -590),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -6400, -4335,  1409),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -6400, -4530,  3481),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,     /*yaw*/   0, /*pos*/ -4445,  4490, -5536),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,     /*yaw*/   0, /*pos*/ -6263,  4150, -4009),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  1854, -2132, -4290),
    MACRO_OBJECT(/*preset*/ macro_box_star_1,           /*yaw*/   0, /*pos*/ -6385, -4200,  5770),
    MACRO_OBJECT_END(),
};

#include "game/debug.h"

namespace sm64::macro
{
	EXPORT_MACRO(pss_seg7_macro_objs);
}
