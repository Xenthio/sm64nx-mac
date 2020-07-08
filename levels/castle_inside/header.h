#ifndef CASTLE_INSIDE_HEADER_H
#define CASTLE_INSIDE_HEADER_H

#include "types.h"
#include "game/moving_texture.h"
#include "game/debug.h"

// geo
EXTERN_GeoLayout(castle_geo_000F00);
EXTERN_GeoLayout(castle_geo_000F18);
EXTERN_GeoLayout(castle_geo_000F30);
EXTERN_GeoLayout(castle_geo_000F70);
EXTERN_GeoLayout(castle_geo_000F88);
EXTERN_GeoLayout(castle_geo_000FA8);
EXTERN_GeoLayout(castle_geo_000FD0);
EXTERN_GeoLayout(castle_geo_001000);
EXTERN_GeoLayout(castle_geo_001038);
EXTERN_GeoLayout(castle_geo_001088);
EXTERN_GeoLayout(castle_geo_0010C8);
EXTERN_GeoLayout(castle_geo_001110);
EXTERN_GeoLayout(castle_geo_001158);
EXTERN_GeoLayout(castle_geo_0011A8);
EXTERN_GeoLayout(castle_geo_001200);
EXTERN_GeoLayout(castle_geo_001260);
EXTERN_GeoLayout(castle_geo_0012C8);
EXTERN_GeoLayout(castle_geo_001348);
EXTERN_GeoLayout(castle_geo_0013B8);
EXTERN_GeoLayout(castle_geo_001400);
EXTERN_GeoLayout(castle_geo_001518);
EXTERN_GeoLayout(castle_geo_001530);
EXTERN_GeoLayout(castle_geo_001548);
EXTERN_GeoLayout(castle_geo_001560);
EXTERN_GeoLayout(castle_geo_001578);
EXTERN_GeoLayout(castle_geo_0015B8);
EXTERN_GeoLayout(castle_geo_0015F8);
EXTERN_GeoLayout(castle_geo_001628);
EXTERN_GeoLayout(castle_geo_001668);
EXTERN_GeoLayout(castle_geo_001690);
EXTERN_GeoLayout(castle_geo_0016D8);
EXTERN_GeoLayout(castle_geo_001740);
EXTERN_GeoLayout(castle_geo_001798);
EXTERN_GeoLayout(castle_geo_001800);
EXTERN_GeoLayout(castle_geo_001858);
EXTERN_GeoLayout(castle_geo_001940);
EXTERN_GeoLayout(castle_geo_001958);
EXTERN_GeoLayout(castle_geo_001980);
EXTERN_GeoLayout(castle_geo_0019C8);
EXTERN_GeoLayout(castle_geo_0019F8);
EXTERN_GeoLayout(castle_geo_001A30);
EXTERN_GeoLayout(castle_geo_001A58);
EXTERN_GeoLayout(castle_geo_001AB8);
EXTERN_GeoLayout(castle_geo_001AF8);
EXTERN_GeoLayout(castle_geo_001B48);
EXTERN_GeoLayout(castle_geo_001BB0);
EXTERN_GeoLayout(castle_inside_level_geo);

// leveldata
EXTERN_Gfx(inside_castle_seg7_dl_070225D8);
EXTERN_Gfx(inside_castle_seg7_dl_07022610);
EXTERN_Gfx(inside_castle_seg7_dl_070234C0);
EXTERN_Gfx(inside_castle_seg7_dl_07023520);
extern struct Painting bob_painting;
extern struct Painting ccm_painting;
extern struct Painting wf_painting;
extern struct Painting jrb_painting;
extern struct Painting lll_painting;
extern struct Painting ssl_painting;
extern struct Painting hmc_painting;
extern struct Painting ddd_painting;
extern struct Painting wdw_painting;
extern struct Painting thi_tiny_painting;
extern struct Painting ttm_painting;
extern struct Painting ttc_painting;
extern struct Painting sl_painting;
extern struct Painting thi_huge_painting;
EXTERN_Gfx(inside_castle_seg7_dl_07023DB0);
EXTERN_Gfx(inside_castle_seg7_dl_07028FD0);
EXTERN_Gfx(inside_castle_seg7_dl_07029578);
EXTERN_Gfx(inside_castle_seg7_dl_0702A650);
EXTERN_Gfx(dl_castle_lobby_wing_cap_light);
EXTERN_Gfx(inside_castle_seg7_dl_0702AA10);
EXTERN_Gfx(inside_castle_seg7_dl_0702AB20);
EXTERN_Gfx(inside_castle_seg7_dl_0702E408);
EXTERN_Gfx(inside_castle_seg7_dl_0702FD30);
EXTERN_Vtx(inside_castle_seg7_vertex_07030940);
EXTERN_Gfx(inside_castle_seg7_dl_07031168);
EXTERN_Gfx(inside_castle_seg7_dl_07031588);
EXTERN_Gfx(inside_castle_seg7_dl_07031720);
EXTERN_Gfx(inside_castle_seg7_dl_07031830);
EXTERN_Gfx(inside_castle_seg7_dl_07032FC0);
EXTERN_Gfx(inside_castle_seg7_dl_07033158);
EXTERN_Gfx(inside_castle_seg7_dl_07034D88);
EXTERN_Gfx(inside_castle_seg7_dl_07035178);
EXTERN_Gfx(inside_castle_seg7_dl_07035288);
EXTERN_Gfx(inside_castle_seg7_dl_07036D88);
EXTERN_Gfx(inside_castle_seg7_dl_07037988);
EXTERN_Gfx(inside_castle_seg7_dl_07037BF8);
EXTERN_Gfx(inside_castle_seg7_dl_07037DE8);
EXTERN_Gfx(dl_castle_aquarium_light);
EXTERN_Gfx(inside_castle_seg7_dl_07038350);
EXTERN_Gfx(inside_castle_seg7_dl_0703A6C8);
EXTERN_Gfx(inside_castle_seg7_dl_0703A808);
EXTERN_Gfx(inside_castle_seg7_dl_0703BA08);
EXTERN_Gfx(inside_castle_seg7_dl_0703BCB8);
EXTERN_Gfx(inside_castle_seg7_dl_0703BFA8);
EXTERN_Gfx(inside_castle_seg7_dl_0703E6F0);
EXTERN_Gfx(inside_castle_seg7_dl_07043028);
EXTERN_Gfx(inside_castle_seg7_dl_07043B48);
EXTERN_Gfx(inside_castle_seg7_dl_07043CD8);
EXTERN_Gfx(inside_castle_seg7_dl_0704A0E8);
EXTERN_Gfx(inside_castle_seg7_dl_0704A2E0);
EXTERN_Gfx(inside_castle_seg7_dl_0704AA98);
EXTERN_Gfx(inside_castle_seg7_dl_0704C7D8);
EXTERN_Gfx(inside_castle_seg7_dl_07050938);
EXTERN_Gfx(inside_castle_seg7_dl_070512F8);
EXTERN_Gfx(inside_castle_seg7_dl_07051678);
EXTERN_Gfx(inside_castle_seg7_dl_070519C8);
EXTERN_Gfx(inside_castle_seg7_dl_07051B60);
EXTERN_Gfx(inside_castle_seg7_dl_070558D0);
EXTERN_Gfx(inside_castle_seg7_dl_070572A0);
EXTERN_Gfx(inside_castle_seg7_dl_07057F00);
EXTERN_Gfx(inside_castle_seg7_dl_07058950);
EXTERN_Gfx(inside_castle_seg7_dl_07059190);
EXTERN_Gfx(inside_castle_seg7_dl_0705E088);
EXTERN_Gfx(inside_castle_seg7_dl_0705E2A0);
EXTERN_Gfx(inside_castle_seg7_dl_0705E450);
EXTERN_Gfx(inside_castle_seg7_dl_070616E8);
EXTERN_Gfx(inside_castle_seg7_dl_07061C20);
EXTERN_Gfx(inside_castle_seg7_dl_07064B78);
EXTERN_Gfx(inside_castle_seg7_dl_07064D58);
EXTERN_Gfx(inside_castle_seg7_dl_07066CE0);
EXTERN_Gfx(inside_castle_seg7_dl_07066E90);
EXTERN_Gfx(inside_castle_seg7_dl_07066FA0);
EXTERN_Gfx(inside_castle_seg7_dl_07068850);
EXTERN_Gfx(inside_castle_seg7_dl_07068B10);
EXTERN_Collision(inside_castle_seg7_area_1_collision);
EXTERN_Collision(inside_castle_seg7_area_2_collision);
EXTERN_Collision(inside_castle_seg7_area_3_collision);
EXTERN_Collision(inside_castle_seg7_collision_ddd_warp);
EXTERN_Collision(inside_castle_seg7_collision_ddd_warp_2);
EXTERN_MacroObject(inside_castle_seg7_area_1_macro_objs);
EXTERN_MacroObject(inside_castle_seg7_area_2_macro_objs);
EXTERN_MacroObject(inside_castle_seg7_area_3_macro_objs);
EXTERN_u8(inside_castle_seg7_area_1_rooms);
EXTERN_u8(inside_castle_seg7_area_2_rooms);
EXTERN_u8(inside_castle_seg7_area_3_rooms);
EXTERN_Collision(inside_castle_seg7_collision_floor_trap);
EXTERN_Collision(inside_castle_seg7_collision_star_door);
EXTERN_Collision(inside_castle_seg7_collision_water_level_pillar);
extern const Trajectory *const inside_castle_seg7_trajectory_mips[];
EXTERN_MovtexQuadCollection(inside_castle_movtex_green_room_water);
EXTERN_MovtexQuadCollection(inside_castle_movtex_moat_water);

// script
EXTERN_LevelScript(level_castle_inside_entry);

#endif
