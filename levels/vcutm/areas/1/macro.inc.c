// 0x0700AB0C - 0x0700AC44
const MacroObject vcutm_seg7_macro_objs[] = {
    MACRO_OBJECT(/*preset*/ macro_box_1up,              /*yaw*/   0, /*pos*/ -3434,  2951, -3076),
    MACRO_OBJECT(/*preset*/ macro_1up,                  /*yaw*/   0, /*pos*/ -4711,  1594, -2532),
    MACRO_OBJECT(/*preset*/ macro_1up,                  /*yaw*/   0, /*pos*/ -5952,  -393, -1141),
    MACRO_OBJECT(/*preset*/ macro_box_vanish_cap,       /*yaw*/   0, /*pos*/  3980,   300, -6220),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_trigger,   /*yaw*/   0, /*pos*/  4200,     0, -4940),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_trigger,   /*yaw*/   0, /*pos*/  4740,     0, -4940),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_trigger,   /*yaw*/   0, /*pos*/  4740,     0, -4400),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_hidden_1up,           /*yaw*/   0, /*pos*/  4460,     0, -4700, /*behParam*/ 3),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  4200,     0, -4940),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  4740,     0, -4940),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  4740,     0, -4400),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/ -2100, -3276,    20),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_circling_amp,         /*yaw*/   0, /*pos*/ -2100, -2800, -3866, /*behParam*/ 1),
    MACRO_OBJECT(/*preset*/ macro_box_three_coins,      /*yaw*/   0, /*pos*/ -2145, -2160, -5963),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/ -5920,  4575, -4618),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/ -4740,  3581, -3854),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/ -4727,  -227, -1161),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/ -3418,  -559,  -836),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/  -600, -1400, -6300),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/   900, -1400, -6300),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/  2750,  -800, -6300),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/  4509,     0, -5527),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,         /*yaw*/   0, /*pos*/ -1740, -3240,  1580),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,         /*yaw*/   0, /*pos*/ -2400, -3240,   600),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,         /*yaw*/   0, /*pos*/ -1740, -3240,     0),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,         /*yaw*/   0, /*pos*/ -2400, -3240, -1079),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,         /*yaw*/   0, /*pos*/ -2920, -3240,   880),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,         /*yaw*/   0, /*pos*/ -4000, -3240,  1600),
    MACRO_OBJECT(/*preset*/ macro_box_vanish_cap,       /*yaw*/   0, /*pos*/ -6020, -2976,  1240),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,         /*yaw*/   0, /*pos*/ -2100, -2840, -3866),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,         /*yaw*/   0, /*pos*/ -4600,  5760, -6140),
    MACRO_OBJECT_END(),
};

#include "game/debug.h"

namespace sm64::macro
{
	EXPORT_MACRO(vcutm_seg7_macro_objs);
}