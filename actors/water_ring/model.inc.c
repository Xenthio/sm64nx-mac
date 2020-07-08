// Water Ring

// 0x06012368
static const Lights1 water_ring_seg6_lights_06012368 = gdSPDefLights1(
    0x3f, 0x3f, 0x3f,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x06012380
ALIGNED8 static const u8 water_ring_seg6_texture_06012380[] = {
#include "actors/water_ring/water_ring.rgba16.inc.c"
};

// 0x06013380
static const Vtx water_ring_seg6_vertex_06013380[] = {
    {{{     0,    264,      0}, 0, {     0,      0}, {0x00, 0x2a, 0x77, 0x00}}},
    {{{  -131,    228,      0}, 0, {     0,      0}, {0xeb, 0x25, 0x77, 0x00}}},
    {{{   -98,    171,     23}, 0, {     0,      0}, {0xeb, 0x25, 0x77, 0x00}}},
    {{{     0,    198,     23}, 0, {     0,      0}, {0x00, 0x2a, 0x77, 0x00}}},
    {{{     0,    198,     23}, 0, {     0,      0}, {0x00, 0x81, 0x00, 0x00}}},
    {{{   -98,    171,     23}, 0, {     0,      0}, {0x3f, 0x93, 0x00, 0x00}}},
    {{{   -98,    171,    -23}, 0, {     0,      0}, {0x3f, 0x93, 0x00, 0x00}}},
    {{{     0,    198,    -23}, 0, {     0,      0}, {0x00, 0x81, 0x00, 0x00}}},
    {{{     0,    198,    -23}, 0, {     0,      0}, {0x00, 0x2a, 0x89, 0x00}}},
    {{{   -98,    171,    -23}, 0, {     0,      0}, {0xeb, 0x25, 0x89, 0x00}}},
    {{{  -131,    228,      0}, 0, {     0,      0}, {0xeb, 0x25, 0x89, 0x00}}},
    {{{     0,    264,      0}, 0, {     0,      0}, {0x00, 0x2a, 0x89, 0x00}}},
    {{{  -227,    132,      0}, 0, {     0,      0}, {0xdb, 0x15, 0x77, 0x00}}},
    {{{  -170,     99,     23}, 0, {     0,      0}, {0xdb, 0x15, 0x77, 0x00}}},
    {{{  -170,     99,     23}, 0, {     0,      0}, {0x6d, 0xc1, 0x00, 0x00}}},
    {{{  -170,     99,    -23}, 0, {     0,      0}, {0x6d, 0xc1, 0x00, 0x00}}},
};

// 0x06013480
static const Vtx water_ring_seg6_vertex_06013480[] = {
    {{{   -98,    171,    -23}, 0, {     0,      0}, {0xeb, 0x25, 0x89, 0x00}}},
    {{{  -170,     99,    -23}, 0, {     0,      0}, {0xdb, 0x15, 0x89, 0x00}}},
    {{{  -227,    132,      0}, 0, {     0,      0}, {0xdb, 0x15, 0x89, 0x00}}},
    {{{  -131,    228,      0}, 0, {     0,      0}, {0xeb, 0x25, 0x89, 0x00}}},
    {{{  -227,    132,      0}, 0, {     0,      0}, {0xdb, 0x15, 0x77, 0x00}}},
    {{{  -263,      0,      0}, 0, {     0,      0}, {0xd6, 0x00, 0x77, 0x00}}},
    {{{  -197,      0,     23}, 0, {     0,      0}, {0xd6, 0x00, 0x77, 0x00}}},
    {{{  -170,     99,     23}, 0, {     0,      0}, {0xdb, 0x15, 0x77, 0x00}}},
    {{{  -170,     99,     23}, 0, {     0,      0}, {0x6d, 0xc1, 0x00, 0x00}}},
    {{{  -197,      0,     23}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0x00}}},
    {{{  -197,      0,    -23}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0x00}}},
    {{{  -170,     99,    -23}, 0, {     0,      0}, {0x6d, 0xc1, 0x00, 0x00}}},
    {{{  -197,      0,    -23}, 0, {     0,      0}, {0xd6, 0x00, 0x89, 0x00}}},
    {{{  -263,      0,      0}, 0, {     0,      0}, {0xd6, 0x00, 0x89, 0x00}}},
    {{{  -227,   -132,      0}, 0, {     0,      0}, {0xdb, 0xeb, 0x77, 0x00}}},
    {{{  -170,    -99,     23}, 0, {     0,      0}, {0xdb, 0xeb, 0x77, 0x00}}},
};

// 0x06013580
static const Vtx water_ring_seg6_vertex_06013580[] = {
    {{{  -197,      0,     23}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0x00}}},
    {{{  -170,    -99,     23}, 0, {     0,      0}, {0x6d, 0x3f, 0x00, 0x00}}},
    {{{  -170,    -99,    -23}, 0, {     0,      0}, {0x6d, 0x3f, 0x00, 0x00}}},
    {{{  -197,      0,    -23}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0x00}}},
    {{{  -197,      0,    -23}, 0, {     0,      0}, {0xd6, 0x00, 0x89, 0x00}}},
    {{{  -170,    -99,    -23}, 0, {     0,      0}, {0xdb, 0xeb, 0x89, 0x00}}},
    {{{  -227,   -132,      0}, 0, {     0,      0}, {0xdb, 0xeb, 0x89, 0x00}}},
    {{{  -263,      0,      0}, 0, {     0,      0}, {0xd6, 0x00, 0x89, 0x00}}},
    {{{  -227,   -132,      0}, 0, {     0,      0}, {0xdb, 0xeb, 0x77, 0x00}}},
    {{{  -131,   -228,      0}, 0, {     0,      0}, {0xeb, 0xdb, 0x77, 0x00}}},
    {{{   -98,   -171,     23}, 0, {     0,      0}, {0xeb, 0xdb, 0x77, 0x00}}},
    {{{  -170,    -99,     23}, 0, {     0,      0}, {0xdb, 0xeb, 0x77, 0x00}}},
    {{{   -98,   -171,     23}, 0, {     0,      0}, {0x3f, 0x6d, 0x00, 0x00}}},
    {{{   -98,   -171,    -23}, 0, {     0,      0}, {0x3f, 0x6d, 0x00, 0x00}}},
    {{{   -98,   -171,    -23}, 0, {     0,      0}, {0xeb, 0xdb, 0x89, 0x00}}},
    {{{  -131,   -228,      0}, 0, {     0,      0}, {0xeb, 0xdb, 0x89, 0x00}}},
};

// 0x06013680
static const Vtx water_ring_seg6_vertex_06013680[] = {
    {{{  -131,   -228,      0}, 0, {     0,      0}, {0xeb, 0xdb, 0x77, 0x00}}},
    {{{     0,   -264,      0}, 0, {     0,      0}, {0x00, 0xd6, 0x77, 0x00}}},
    {{{     0,   -198,     23}, 0, {     0,      0}, {0x00, 0xd6, 0x77, 0x00}}},
    {{{   -98,   -171,     23}, 0, {     0,      0}, {0xeb, 0xdb, 0x77, 0x00}}},
    {{{   -98,   -171,     23}, 0, {     0,      0}, {0x3f, 0x6d, 0x00, 0x00}}},
    {{{     0,   -198,     23}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0x00}}},
    {{{     0,   -198,    -23}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0x00}}},
    {{{   -98,   -171,    -23}, 0, {     0,      0}, {0x3f, 0x6d, 0x00, 0x00}}},
    {{{   -98,   -171,    -23}, 0, {     0,      0}, {0xeb, 0xdb, 0x89, 0x00}}},
    {{{     0,   -198,    -23}, 0, {     0,      0}, {0x00, 0xd6, 0x89, 0x00}}},
    {{{     0,   -264,      0}, 0, {     0,      0}, {0x00, 0xd6, 0x89, 0x00}}},
    {{{  -131,   -228,      0}, 0, {     0,      0}, {0xeb, 0xdb, 0x89, 0x00}}},
    {{{   132,   -228,      0}, 0, {     0,      0}, {0x15, 0xdb, 0x77, 0x00}}},
    {{{    99,   -171,     23}, 0, {     0,      0}, {0x15, 0xdb, 0x77, 0x00}}},
    {{{    99,   -171,     23}, 0, {     0,      0}, {0xc1, 0x6d, 0x00, 0x00}}},
    {{{    99,   -171,    -23}, 0, {     0,      0}, {0xc1, 0x6d, 0x00, 0x00}}},
};

// 0x06013780
static const Vtx water_ring_seg6_vertex_06013780[] = {
    {{{     0,   -198,    -23}, 0, {     0,      0}, {0x00, 0xd6, 0x89, 0x00}}},
    {{{    99,   -171,    -23}, 0, {     0,      0}, {0x15, 0xdb, 0x89, 0x00}}},
    {{{   132,   -228,      0}, 0, {     0,      0}, {0x15, 0xdb, 0x89, 0x00}}},
    {{{     0,   -264,      0}, 0, {     0,      0}, {0x00, 0xd6, 0x89, 0x00}}},
    {{{   132,   -228,      0}, 0, {     0,      0}, {0x15, 0xdb, 0x77, 0x00}}},
    {{{   229,   -132,      0}, 0, {     0,      0}, {0x25, 0xeb, 0x77, 0x00}}},
    {{{   172,    -99,     23}, 0, {     0,      0}, {0x25, 0xeb, 0x77, 0x00}}},
    {{{    99,   -171,     23}, 0, {     0,      0}, {0x15, 0xdb, 0x77, 0x00}}},
    {{{    99,   -171,     23}, 0, {     0,      0}, {0xc1, 0x6d, 0x00, 0x00}}},
    {{{   172,    -99,     23}, 0, {     0,      0}, {0x93, 0x3f, 0x00, 0x00}}},
    {{{   172,    -99,    -23}, 0, {     0,      0}, {0x93, 0x3f, 0x00, 0x00}}},
    {{{    99,   -171,    -23}, 0, {     0,      0}, {0xc1, 0x6d, 0x00, 0x00}}},
    {{{   172,    -99,    -23}, 0, {     0,      0}, {0x25, 0xeb, 0x89, 0x00}}},
    {{{   229,   -132,      0}, 0, {     0,      0}, {0x25, 0xeb, 0x89, 0x00}}},
    {{{   264,      0,      0}, 0, {     0,      0}, {0x2a, 0x00, 0x77, 0x00}}},
    {{{   198,      0,     23}, 0, {     0,      0}, {0x2a, 0x00, 0x77, 0x00}}},
};

// 0x06013880
static const Vtx water_ring_seg6_vertex_06013880[] = {
    {{{   172,    -99,     23}, 0, {     0,      0}, {0x93, 0x3f, 0x00, 0x00}}},
    {{{   198,      0,     23}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0x00}}},
    {{{   198,      0,    -23}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0x00}}},
    {{{   172,    -99,    -23}, 0, {     0,      0}, {0x93, 0x3f, 0x00, 0x00}}},
    {{{   172,    -99,    -23}, 0, {     0,      0}, {0x25, 0xeb, 0x89, 0x00}}},
    {{{   198,      0,    -23}, 0, {     0,      0}, {0x2a, 0x00, 0x89, 0x00}}},
    {{{   264,      0,      0}, 0, {     0,      0}, {0x2a, 0x00, 0x89, 0x00}}},
    {{{   229,   -132,      0}, 0, {     0,      0}, {0x25, 0xeb, 0x89, 0x00}}},
    {{{   264,      0,      0}, 0, {     0,      0}, {0x2a, 0x00, 0x77, 0x00}}},
    {{{   229,    132,      0}, 0, {     0,      0}, {0x25, 0x15, 0x77, 0x00}}},
    {{{   172,     99,     23}, 0, {     0,      0}, {0x25, 0x15, 0x77, 0x00}}},
    {{{   198,      0,     23}, 0, {     0,      0}, {0x2a, 0x00, 0x77, 0x00}}},
    {{{   172,     99,     23}, 0, {     0,      0}, {0x93, 0xc1, 0x00, 0x00}}},
    {{{   172,     99,    -23}, 0, {     0,      0}, {0x93, 0xc1, 0x00, 0x00}}},
    {{{   172,     99,    -23}, 0, {     0,      0}, {0x25, 0x15, 0x89, 0x00}}},
    {{{   229,    132,      0}, 0, {     0,      0}, {0x25, 0x15, 0x89, 0x00}}},
};

// 0x06013980
static const Vtx water_ring_seg6_vertex_06013980[] = {
    {{{   229,    132,      0}, 0, {     0,      0}, {0x25, 0x15, 0x77, 0x00}}},
    {{{   132,    228,      0}, 0, {     0,      0}, {0x15, 0x25, 0x77, 0x00}}},
    {{{    99,    171,     23}, 0, {     0,      0}, {0x15, 0x25, 0x77, 0x00}}},
    {{{   172,     99,     23}, 0, {     0,      0}, {0x25, 0x15, 0x77, 0x00}}},
    {{{   172,     99,     23}, 0, {     0,      0}, {0x93, 0xc1, 0x00, 0x00}}},
    {{{    99,    171,     23}, 0, {     0,      0}, {0xc1, 0x93, 0x00, 0x00}}},
    {{{    99,    171,    -23}, 0, {     0,      0}, {0xc1, 0x93, 0x00, 0x00}}},
    {{{   172,     99,    -23}, 0, {     0,      0}, {0x93, 0xc1, 0x00, 0x00}}},
    {{{   172,     99,    -23}, 0, {     0,      0}, {0x25, 0x15, 0x89, 0x00}}},
    {{{    99,    171,    -23}, 0, {     0,      0}, {0x15, 0x25, 0x89, 0x00}}},
    {{{   132,    228,      0}, 0, {     0,      0}, {0x15, 0x25, 0x89, 0x00}}},
    {{{   229,    132,      0}, 0, {     0,      0}, {0x25, 0x15, 0x89, 0x00}}},
    {{{     0,    264,      0}, 0, {     0,      0}, {0x00, 0x2a, 0x77, 0x00}}},
    {{{     0,    198,     23}, 0, {     0,      0}, {0x00, 0x2a, 0x77, 0x00}}},
    {{{     0,    198,     23}, 0, {     0,      0}, {0x00, 0x81, 0x00, 0x00}}},
    {{{     0,    198,    -23}, 0, {     0,      0}, {0x00, 0x81, 0x00, 0x00}}},
};

// 0x06013A80
static const Vtx water_ring_seg6_vertex_06013A80[] = {
    {{{    99,    171,    -23}, 0, {     0,      0}, {0x15, 0x25, 0x89, 0x00}}},
    {{{     0,    198,    -23}, 0, {     0,      0}, {0x00, 0x2a, 0x89, 0x00}}},
    {{{     0,    264,      0}, 0, {     0,      0}, {0x00, 0x2a, 0x89, 0x00}}},
    {{{   132,    228,      0}, 0, {     0,      0}, {0x15, 0x25, 0x89, 0x00}}},
};

// 0x06013AC0 - 0x06013DD8
const Gfx water_ring_seg6_dl_06013AC0[] = {
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_GEN),
    gsDPSetCombineMode(G_CC_DECALFADE, G_CC_DECALFADE),
    gsDPLoadTextureBlock(water_ring_seg6_texture_06012380, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTexture(0x1800, 0x07C0, 0, G_TX_RENDERTILE, G_ON),
    gsSPLight(&water_ring_seg6_lights_06012368.l, 1),
    gsSPLight(&water_ring_seg6_lights_06012368.a, 2),
    gsSPVertex(water_ring_seg6_vertex_06013380, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles( 1, 12, 13, 0x0,  1, 13,  2, 0x0),
    gsSP2Triangles( 5, 14, 15, 0x0,  5, 15,  6, 0x0),
    gsSPVertex(water_ring_seg6_vertex_06013480, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles( 1, 12, 13, 0x0,  1, 13,  2, 0x0),
    gsSP2Triangles( 5, 14, 15, 0x0,  5, 15,  6, 0x0),
    gsSPVertex(water_ring_seg6_vertex_06013580, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles( 1, 12, 13, 0x0,  1, 13,  2, 0x0),
    gsSP2Triangles( 5, 14, 15, 0x0,  5, 15,  6, 0x0),
    gsSPVertex(water_ring_seg6_vertex_06013680, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles( 1, 12, 13, 0x0,  1, 13,  2, 0x0),
    gsSP2Triangles( 5, 14, 15, 0x0,  5, 15,  6, 0x0),
    gsSPVertex(water_ring_seg6_vertex_06013780, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles( 1, 12, 13, 0x0,  1, 13,  2, 0x0),
    gsSP2Triangles( 5, 14, 15, 0x0,  5, 15,  6, 0x0),
    gsSPVertex(water_ring_seg6_vertex_06013880, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles( 1, 12, 13, 0x0,  1, 13,  2, 0x0),
    gsSP2Triangles( 5, 14, 15, 0x0,  5, 15,  6, 0x0),
    gsSPVertex(water_ring_seg6_vertex_06013980, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles( 1, 12, 13, 0x0,  1, 13,  2, 0x0),
    gsSP2Triangles( 5, 14, 15, 0x0,  5, 15,  6, 0x0),
    gsSPVertex(water_ring_seg6_vertex_06013A80, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_GEN),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPTexture(0x0F80, 0x07C0, 0, G_TX_RENDERTILE, G_OFF),
    gsSPEndDisplayList(),
};
