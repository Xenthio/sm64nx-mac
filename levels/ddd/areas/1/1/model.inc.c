// 0x07003800 - 0x07003818
static const Lights1 ddd_seg7_lights_07003800 = gdSPDefLights1(
    0x3f, 0x3f, 0x3f,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x07003818 - 0x07003830
static const Lights1 ddd_seg7_lights_07003818 = gdSPDefLights1(
    0x1a, 0x1a, 0x3f,
    0x69, 0x69, 0xfe, 0x28, 0x28, 0x28
);

// 0x07003830 - 0x07003848
static const Lights1 ddd_seg7_lights_07003830 = gdSPDefLights1(
    0x26, 0x26, 0x3f,
    0x9b, 0x9b, 0xff, 0x28, 0x28, 0x28
);

// 0x07003848 - 0x07003860
static const Lights1 ddd_seg7_lights_07003848 = gdSPDefLights1(
    0x32, 0x32, 0x3f,
    0xc8, 0xc8, 0xff, 0x28, 0x28, 0x28
);

// 0x07003860 - 0x07003960
static const Vtx ddd_seg7_vertex_07003860[] = {
    {{{ -5119,      0,  -3071}, 0, { -1052,  -2076}, {0x3a, 0x55, 0x4a, 0xff}}},
    {{{ -4505,  -1023,  -2252}, 0, {  -436,  -1258}, {0x45, 0x47, 0x4e, 0xff}}},
    {{{ -3890,  -1023,  -2866}, 0, {   172,  -1872}, {0x1d, 0x47, 0x64, 0xff}}},
    {{{ -5119,      0,   3072}, 0, { -1052,   4054}, {0x25, 0x41, 0x9a, 0xff}}},
    {{{ -5938,  -1023,   1843}, 0, { -1868,   2828}, {0x58, 0x48, 0xc9, 0xff}}},
    {{{ -6143,      0,   2048}, 0, { -2072,   3032}, {0x6b, 0x2f, 0xd1, 0xff}}},
    {{{ -5938,  -1023,    819}, 0, { -1868,   1806}, {0x6e, 0x3e, 0x0b, 0xff}}},
    {{{ -6655,      0,   1024}, 0, { -2584,   2010}, {0x65, 0x4b, 0x07, 0xff}}},
    {{{ -5324,  -1023,   -716}, 0, { -1256,    274}, {0x6d, 0x40, 0x08, 0xff}}},
    {{{ -6143,      0,   -818}, 0, { -2072,    172}, {0x61, 0x4f, 0x0d, 0xff}}},
    {{{ -4709,  -1023,   2458}, 0, {  -640,   3440}, {0x18, 0x52, 0xa3, 0xff}}},
    {{{ -6143,      0,  -2047}, 0, { -2072,  -1054}, {0x5a, 0x51, 0x23, 0xff}}},
    {{{ -5529,  -1023,  -1637}, 0, { -1460,   -646}, {0x5a, 0x49, 0x32, 0xff}}},
    {{{   512,      0,  -1023}, 0, {  4568,      0}, {0xa0, 0x50, 0x11, 0xff}}},
    {{{  -613,  -1023,    819}, 0, {  3444,   1806}, {0x96, 0x44, 0xf5, 0xff}}},
    {{{   512,      0,   1024}, 0, {  4568,   2010}, {0xa7, 0x58, 0xf1, 0xff}}},
};

// 0x07003960 - 0x07003A60
static const Vtx ddd_seg7_vertex_07003960[] = {
    {{{ -5119,      0,  -3071}, 0, { -1052,  -2076}, {0x3a, 0x55, 0x4a, 0xff}}},
    {{{ -3890,  -1023,  -2866}, 0, {   172,  -1872}, {0x1d, 0x47, 0x64, 0xff}}},
    {{{ -4095,      0,  -3583}, 0, {     0,  -2588}, {0x0f, 0x4a, 0x65, 0xff}}},
    {{{ -2252,  -1023,  -2866}, 0, {  1808,  -1872}, {0xc8, 0x48, 0x58, 0xff}}},
    {{{ -2047,      0,  -3583}, 0, {  2012,  -2588}, {0xc1, 0x4c, 0x4f, 0xff}}},
    {{{ -1842,  -1023,  -2047}, 0, {  2216,  -1054}, {0xbc, 0x44, 0x52, 0xff}}},
    {{{ -1330,      0,  -2764}, 0, {  2728,  -1770}, {0xcc, 0x4e, 0x55, 0xff}}},
    {{{  -613,  -1023,  -1637}, 0, {  3444,   -646}, {0xb8, 0x4b, 0x47, 0xff}}},
    {{{     0,      0,  -2047}, 0, {  4056,  -1054}, {0xb7, 0x49, 0x48, 0xff}}},
    {{{  -204,  -1023,   -818}, 0, {  3852,    172}, {0x96, 0x44, 0x07, 0xff}}},
    {{{   512,      0,  -1023}, 0, {  4568,      0}, {0xa0, 0x50, 0x11, 0xff}}},
    {{{  -613,  -1023,    819}, 0, {  3444,   1806}, {0x96, 0x44, 0xf5, 0xff}}},
    {{{   512,      0,   1024}, 0, {  4568,   2010}, {0xa7, 0x58, 0xf1, 0xff}}},
    {{{  -613,  -1023,   1638}, 0, {  3444,   2624}, {0xab, 0x4b, 0xc8, 0xff}}},
    {{{     0,      0,   2048}, 0, {  4056,   3032}, {0xb9, 0x4f, 0xbc, 0xff}}},
    {{{ -1637,  -1023,   2253}, 0, {  2420,   3236}, {0xc1, 0x4e, 0xb3, 0xff}}},
};

// 0x07003A60 - 0x07003AF0
static const Vtx ddd_seg7_vertex_07003A60[] = {
    {{{     0,      0,   2048}, 0, {  4056,   3032}, {0xb9, 0x4f, 0xbc, 0xff}}},
    {{{ -1637,  -1023,   2253}, 0, {  2420,   3236}, {0xc1, 0x4e, 0xb3, 0xff}}},
    {{{ -1023,      0,   3072}, 0, {  3036,   4054}, {0xc6, 0x55, 0xb6, 0xff}}},
    {{{ -2252,  -1023,   2867}, 0, {  1808,   3850}, {0xe2, 0x49, 0x9e, 0xff}}},
    {{{ -2047,      0,   3584}, 0, {  2012,   4566}, {0x02, 0x4b, 0x9a, 0xff}}},
    {{{ -3583,  -1023,   2458}, 0, {   480,   3440}, {0x1d, 0x3e, 0x96, 0xff}}},
    {{{ -3993,      0,   3174}, 0, {    72,   4156}, {0x0f, 0x4c, 0x9c, 0xff}}},
    {{{ -5119,      0,   3072}, 0, { -1052,   4054}, {0x25, 0x41, 0x9a, 0xff}}},
    {{{ -4709,  -1023,   2458}, 0, {  -640,   3440}, {0x18, 0x52, 0xa3, 0xff}}},
};

// 0x07003AF0 - 0x07003B30
static const Vtx ddd_seg7_vertex_07003AF0[] = {
    {{{  -511,  -5119,  -2559}, 0, {     0,  -4120}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{ -5631,  -5119,   2560}, 0, {     0,   6098}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{  -511,  -5119,   2560}, 0, {  5080,    990}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{ -5631,  -5119,  -2559}, 0, { -5140,    990}, {0x00, 0x7f, 0x00, 0xff}}},
};

// 0x07003B30 - 0x07003C30
static const Vtx ddd_seg7_vertex_07003B30[] = {
    {{{ -4914,  -2047,   1229}, 0, {  2064,  -2058}, {0x51, 0x34, 0xaf, 0xff}}},
    {{{ -4914,  -5119,   1229}, 0, {    24,  -2134}, {0x58, 0xfc, 0xa5, 0xff}}},
    {{{ -5221,  -5119,    614}, 0, {     4,  -1610}, {0x7d, 0xfd, 0xec, 0xff}}},
    {{{  -921,  -2047,   -613}, 0, {  2012,    510}, {0x88, 0x1d, 0x1b, 0xff}}},
    {{{ -1228,  -5119,  -1228}, 0, {     0,      0}, {0xa1, 0xfd, 0x53, 0xff}}},
    {{{  -921,  -5119,   -613}, 0, {     0,    510}, {0x82, 0x00, 0x0b, 0xff}}},
    {{{ -1228,  -2047,  -1228}, 0, {  2012,      0}, {0xb6, 0x2a, 0x5d, 0xff}}},
    {{{ -2149,  -2047,  -1637}, 0, {  2012,    950}, {0xa7, 0x18, 0x57, 0xff}}},
    {{{ -1228,  -2047,   1229}, 0, {  2012,   2372}, {0xa7, 0x1c, 0xab, 0xff}}},
    {{{  -921,  -2047,    614}, 0, {  2012,   1710}, {0x85, 0x15, 0xee, 0xff}}},
    {{{ -1228,  -5119,   1229}, 0, {     0,   2372}, {0x96, 0x00, 0xbc, 0xff}}},
    {{{  -921,  -5119,    614}, 0, {     0,   1710}, {0x82, 0x00, 0xf5, 0xff}}},
    {{{ -1842,  -5119,   1843}, 0, {     0,   3092}, {0xba, 0xfa, 0x97, 0xff}}},
    {{{ -4197,  -2047,  -1740}, 0, {  2012,   2972}, {0x4e, 0x21, 0x5e, 0xff}}},
    {{{ -3685,  -5119,  -2149}, 0, {     0,   2552}, {0x39, 0x05, 0x71, 0xff}}},
    {{{ -3685,  -2047,  -2457}, 0, {  2012,   2612}, {0x2a, 0x21, 0x72, 0xff}}},
};

// 0x07003C30 - 0x07003D30
static const Vtx ddd_seg7_vertex_07003C30[] = {
    {{{ -5221,  -5119,    614}, 0, {     4,  -1610}, {0x7d, 0xfd, 0xec, 0xff}}},
    {{{ -5221,  -5119,   -613}, 0, {   -24,   -418}, {0x7a, 0xf2, 0x1c, 0xff}}},
    {{{ -4914,  -2047,   -409}, 0, {  2028,   -470}, {0x7a, 0x15, 0x19, 0xff}}},
    {{{ -5221,  -2047,    614}, 0, {  2044,  -1534}, {0x73, 0x34, 0xfb, 0xff}}},
    {{{ -4914,  -2047,   1229}, 0, {  2064,  -2058}, {0x51, 0x34, 0xaf, 0xff}}},
    {{{ -4914,  -5119,  -1228}, 0, {     0,    250}, {0x74, 0xfb, 0x33, 0xff}}},
    {{{ -4914,  -2047,  -1228}, 0, {  2008,    326}, {0x70, 0x20, 0x31, 0xff}}},
    {{{ -4300,  -5119,  -1842}, 0, {     0,    990}, {0x4a, 0xfd, 0x67, 0xff}}},
    {{{ -4197,  -2047,  -1740}, 0, {  2016,    990}, {0x4e, 0x21, 0x5e, 0xff}}},
    {{{ -4197,  -2047,  -1740}, 0, {  2012,   2972}, {0x4e, 0x21, 0x5e, 0xff}}},
    {{{ -4300,  -5119,  -1842}, 0, {     0,   3092}, {0x4a, 0xfd, 0x67, 0xff}}},
    {{{ -3685,  -5119,  -2149}, 0, {     0,   2552}, {0x39, 0x05, 0x71, 0xff}}},
    {{{ -3685,  -2047,  -2457}, 0, {  2012,   2612}, {0x2a, 0x21, 0x72, 0xff}}},
    {{{ -2457,  -5119,  -2149}, 0, {     0,   1348}, {0xe3, 0x04, 0x7b, 0xff}}},
    {{{ -2457,  -2047,  -2149}, 0, {  2012,   1348}, {0xc5, 0x1d, 0x6c, 0xff}}},
    {{{ -1842,  -5119,  -1842}, 0, {     0,    690}, {0xa9, 0xf6, 0x5b, 0xff}}},
};

// 0x07003D30 - 0x07003E30
static const Vtx ddd_seg7_vertex_07003D30[] = {
    {{{ -2457,  -2047,  -2149}, 0, {  2012,   1348}, {0xc5, 0x1d, 0x6c, 0xff}}},
    {{{ -1842,  -5119,  -1842}, 0, {     0,    690}, {0xa9, 0xf6, 0x5b, 0xff}}},
    {{{ -2149,  -2047,  -1637}, 0, {  2012,    950}, {0xa7, 0x18, 0x57, 0xff}}},
    {{{ -1228,  -5119,  -1228}, 0, {     0,      0}, {0xa1, 0xfd, 0x53, 0xff}}},
    {{{ -1228,  -2047,   1229}, 0, {  2012,   2372}, {0xa7, 0x1c, 0xab, 0xff}}},
    {{{ -1842,  -5119,   1843}, 0, {     0,   3092}, {0xba, 0xfa, 0x97, 0xff}}},
    {{{ -1945,  -2047,   1638}, 0, {  2012,   2912}, {0xba, 0x26, 0x9e, 0xff}}},
    {{{ -1945,  -2047,   1638}, 0, {  2012,   2952}, {0xba, 0x26, 0x9e, 0xff}}},
    {{{ -2457,  -5119,   2150}, 0, {     0,   2552}, {0xcd, 0xfd, 0x8c, 0xff}}},
    {{{ -2457,  -2047,   2150}, 0, {  2012,   2552}, {0xdb, 0x1f, 0x8b, 0xff}}},
    {{{ -3685,  -5119,   2150}, 0, {     0,   1348}, {0x13, 0x00, 0x83, 0xff}}},
    {{{ -3685,  -2047,   2150}, 0, {  2012,   1348}, {0x34, 0x13, 0x8f, 0xff}}},
    {{{ -4300,  -5119,   1843}, 0, {     0,    690}, {0x52, 0xf9, 0xa0, 0xff}}},
    {{{ -4197,  -2047,   1536}, 0, {  2012,    730}, {0x45, 0x1f, 0x9b, 0xff}}},
    {{{ -4914,  -5119,   1229}, 0, {     0,      0}, {0x58, 0xfc, 0xa5, 0xff}}},
    {{{ -4914,  -2047,   1229}, 0, {  2012,      0}, {0x51, 0x34, 0xaf, 0xff}}},
};

// 0x07003E30 - 0x07003F30
static const Vtx ddd_seg7_vertex_07003E30[] = {
    {{{ -2866,  -4607,    717}, 0, {   888,   1500}, {0x05, 0x7d, 0x14, 0xff}}},
    {{{ -2764,  -5119,   1843}, 0, {  2116,   2522}, {0x12, 0x72, 0x34, 0xff}}},
    {{{ -2661,  -4607,    614}, 0, {   992,   1192}, {0x20, 0x75, 0x22, 0xff}}},
    {{{ -3276,  -4607,    717}, 0, {   480,   1908}, {0x00, 0x7b, 0x1c, 0xff}}},
    {{{ -3276,  -5119,   1741}, 0, {  1500,   2930}, {0xfd, 0x6f, 0x3c, 0xff}}},
    {{{ -2252,  -5119,   1229}, 0, {  2012,   1396}, {0x36, 0x67, 0x31, 0xff}}},
    {{{ -1842,  -5119,    819}, 0, {  2012,    582}, {0x2f, 0x66, 0x38, 0xff}}},
    {{{ -2457,  -4607,    410}, 0, {   992,    786}, {0x1b, 0x75, 0x25, 0xff}}},
    {{{ -3685,  -4607,    819}, 0, {   172,   2418}, {0xf7, 0x79, 0x23, 0xff}}},
    {{{ -4197,  -5119,   1536}, 0, {   376,   3646}, {0xc9, 0x69, 0x2c, 0xff}}},
    {{{ -3890,  -4607,    614}, 0, {  -232,   2418}, {0xd4, 0x76, 0x06, 0xff}}},
    {{{ -4300,  -5119,    819}, 0, {  -436,   3032}, {0xa6, 0x58, 0x07, 0xff}}},
    {{{ -3788,  -4607,    205}, 0, {  -540,   1908}, {0xd2, 0x75, 0x08, 0xff}}},
    {{{ -4505,  -5119,    410}, 0, { -1052,   2828}, {0xbe, 0x68, 0x1b, 0xff}}},
    {{{ -4812,  -5119,   -511}, 0, { -2276,   2214}, {0xc7, 0x70, 0xf1, 0xff}}},
    {{{ -3890,  -4607,   -101}, 0, {  -948,   1704}, {0xe9, 0x7c, 0xfc, 0xff}}},
};

// 0x07003F30 - 0x07004030
static const Vtx ddd_seg7_vertex_07003F30[] = {
    {{{ -2457,  -4607,   -409}, 0, {   172,      0}, {0x1d, 0x78, 0xe6, 0xff}}},
    {{{ -1945,  -5119,  -1535}, 0, {  -436,  -1668}, {0x20, 0x72, 0xd4, 0xff}}},
    {{{ -2661,  -4607,   -613}, 0, {  -232,      0}, {0x0f, 0x7c, 0xeb, 0xff}}},
    {{{ -3685,  -4607,   -306}, 0, {  -948,   1294}, {0xeb, 0x77, 0xdc, 0xff}}},
    {{{ -4812,  -5119,   -511}, 0, { -2276,   2214}, {0xc7, 0x70, 0xf1, 0xff}}},
    {{{ -3890,  -4607,   -101}, 0, {  -948,   1704}, {0xe9, 0x7c, 0xfc, 0xff}}},
    {{{ -4300,  -5119,   -818}, 0, { -2072,   1396}, {0xde, 0x6a, 0xc5, 0xff}}},
    {{{ -3378,  -4607,   -409}, 0, {  -744,    888}, {0xe2, 0x78, 0xe5, 0xff}}},
    {{{ -3890,  -5119,  -1228}, 0, { -2072,    582}, {0xd3, 0x6f, 0xd8, 0xff}}},
    {{{ -3276,  -4607,   -716}, 0, {  -948,    480}, {0xea, 0x7a, 0xea, 0xff}}},
    {{{ -3481,  -5119,  -1740}, 0, { -2176,   -338}, {0xe3, 0x70, 0xcd, 0xff}}},
    {{{ -2866,  -4607,   -716}, 0, {  -540,     70}, {0x06, 0x77, 0xd6, 0xff}}},
    {{{ -2661,  -5119,  -1433}, 0, { -1052,   -850}, {0x07, 0x68, 0xb8, 0xff}}},
    {{{ -1842,  -5119,   -818}, 0, {   376,  -1054}, {0x3c, 0x68, 0xd8, 0xff}}},
    {{{ -2149,  -4607,   -204}, 0, {   684,   -134}, {0x1c, 0x7a, 0xf0, 0xff}}},
    {{{ -1330,  -5119,   -511}, 0, {  1196,  -1258}, {0x38, 0x6c, 0xdf, 0xff}}},
};

// 0x07004030 - 0x07004130
static const Vtx ddd_seg7_vertex_07004030[] = {
    {{{ -2149,  -4607,    205}, 0, {  1092,    274}, {0x1e, 0x7a, 0x0a, 0xff}}},
    {{{ -1330,  -5119,   -511}, 0, {  1196,  -1258}, {0x38, 0x6c, 0xdf, 0xff}}},
    {{{ -2149,  -4607,   -204}, 0, {   684,   -134}, {0x1c, 0x7a, 0xf0, 0xff}}},
    {{{ -1330,  -5119,    512}, 0, {  2216,   -236}, {0x33, 0x6b, 0x2c, 0xff}}},
    {{{ -2457,  -4607,    410}, 0, {   992,    786}, {0x1b, 0x75, 0x25, 0xff}}},
    {{{ -1842,  -5119,    819}, 0, {  2012,    582}, {0x2f, 0x66, 0x38, 0xff}}},
    {{{  -921,  -2047,    614}, 0, {  2012,   1710}, {0x85, 0x15, 0xee, 0xff}}},
    {{{  -921,  -3890,    512}, 0, {   784,   1610}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -921,  -4300,    512}, 0, {   512,   1610}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -921,  -5119,    614}, 0, {     0,   1710}, {0x82, 0x00, 0xf5, 0xff}}},
    {{{  -921,  -4607,    205}, 0, {   308,   1308}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -921,  -2047,   -613}, 0, {  2012,    510}, {0x88, 0x1d, 0x1b, 0xff}}},
    {{{  -921,  -3890,   -511}, 0, {   784,    610}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -921,  -3583,   -204}, 0, {   992,    910}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -921,  -4607,   -204}, 0, {   308,    910}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -921,  -5119,   -613}, 0, {     0,    510}, {0x82, 0x00, 0x0b, 0xff}}},
};

// 0x07004130 - 0x070041C0
static const Vtx ddd_seg7_vertex_07004130[] = {
    {{{  -921,  -5119,   -613}, 0, {     0,    510}, {0x82, 0x00, 0x0b, 0xff}}},
    {{{  -921,  -4300,   -511}, 0, {   512,    610}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -921,  -3890,   -511}, 0, {   784,    610}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -921,  -2047,   -613}, 0, {  2012,    510}, {0x88, 0x1d, 0x1b, 0xff}}},
    {{{  -921,  -4607,   -204}, 0, {   308,    910}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -921,  -3583,   -204}, 0, {   992,    910}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -921,  -2047,    614}, 0, {  2012,   1710}, {0x85, 0x15, 0xee, 0xff}}},
    {{{  -921,  -3583,    205}, 0, {   992,   1308}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -921,  -3890,    512}, 0, {   784,   1610}, {0x81, 0x00, 0x00, 0xff}}},
};

// 0x070041C0 - 0x070042C0
static const Vtx ddd_seg7_vertex_070041C0[] = {
    {{{ -2969,  -4607,    205}, 0, {   224,   1108}, {0xe4, 0x7b, 0xf5, 0xff}}},
    {{{ -3173,  -4914,    102}, 0, {     0,   1192}, {0x00, 0x7e, 0x00, 0xff}}},
    {{{ -3071,  -4607,    307}, 0, {   224,   1278}, {0xf0, 0x77, 0xd8, 0xff}}},
    {{{ -2969,  -4607,      0}, 0, {    52,    938}, {0xdf, 0x79, 0x0d, 0xff}}},
    {{{ -3276,  -4607,   -101}, 0, {  -284,   1108}, {0x0d, 0x79, 0x21, 0xff}}},
    {{{ -3378,  -4607,      0}, 0, {  -284,   1278}, {0x28, 0x77, 0x10, 0xff}}},
    {{{ -3071,  -4607,   -101}, 0, {  -112,    938}, {0xf6, 0x7c, 0x18, 0xff}}},
    {{{ -3378,  -4607,    205}, 0, {  -112,   1448}, {0x28, 0x77, 0xf0, 0xff}}},
    {{{ -3276,  -4607,    307}, 0, {    52,   1448}, {0x0d, 0x79, 0xdf, 0xff}}},
    {{{ -3378,  -4607,    205}, 0, {  -132,   1500}, {0x28, 0x77, 0xf0, 0xff}}},
    {{{ -3378,  -4607,      0}, 0, {  -336,   1294}, {0x28, 0x77, 0x10, 0xff}}},
    {{{ -3788,  -4607,    205}, 0, {  -540,   1908}, {0xd2, 0x75, 0x08, 0xff}}},
    {{{ -3276,  -4607,    307}, 0, {    72,   1500}, {0x0d, 0x79, 0xdf, 0xff}}},
    {{{ -3890,  -4607,    614}, 0, {  -232,   2418}, {0xd4, 0x76, 0x06, 0xff}}},
    {{{ -3890,  -4607,   -101}, 0, {  -948,   1704}, {0xe9, 0x7c, 0xfc, 0xff}}},
    {{{ -3685,  -4607,    819}, 0, {   172,   2418}, {0xf7, 0x79, 0x23, 0xff}}},
};

// 0x070042C0 - 0x070043C0
static const Vtx ddd_seg7_vertex_070042C0[] = {
    {{{ -3071,  -4607,    307}, 0, {   276,   1294}, {0xf0, 0x77, 0xd8, 0xff}}},
    {{{ -3276,  -4607,    307}, 0, {    72,   1500}, {0x0d, 0x79, 0xdf, 0xff}}},
    {{{ -3276,  -4607,    717}, 0, {   480,   1908}, {0x00, 0x7b, 0x1c, 0xff}}},
    {{{ -3685,  -4607,    819}, 0, {   172,   2418}, {0xf7, 0x79, 0x23, 0xff}}},
    {{{ -5938,  -1023,   1843}, 0, { -1868,   2828}, {0x58, 0x48, 0xc9, 0xff}}},
    {{{ -4914,  -2047,   1229}, 0, {  -844,   2214}, {0x51, 0x34, 0xaf, 0xff}}},
    {{{ -5221,  -2047,    614}, 0, { -1152,   1602}, {0x73, 0x34, 0xfb, 0xff}}},
    {{{ -5938,  -1023,    819}, 0, { -1868,   1806}, {0x6e, 0x3e, 0x0b, 0xff}}},
    {{{ -4709,  -1023,   2458}, 0, {  -640,   3440}, {0x18, 0x52, 0xa3, 0xff}}},
    {{{ -4505,  -1023,  -2252}, 0, {  -436,  -1258}, {0x45, 0x47, 0x4e, 0xff}}},
    {{{ -3685,  -2047,  -2457}, 0, {   376,  -1462}, {0x2a, 0x21, 0x72, 0xff}}},
    {{{ -3890,  -1023,  -2866}, 0, {   172,  -1872}, {0x1d, 0x47, 0x64, 0xff}}},
    {{{ -4914,  -2047,   -409}, 0, {  -844,    582}, {0x7a, 0x15, 0x19, 0xff}}},
    {{{ -5324,  -1023,   -716}, 0, { -1256,    274}, {0x6d, 0x40, 0x08, 0xff}}},
    {{{ -4197,  -2047,   1536}, 0, {  -132,   2522}, {0x45, 0x1f, 0x9b, 0xff}}},
    {{{ -4914,  -2047,  -1228}, 0, {  -844,   -236}, {0x70, 0x20, 0x31, 0xff}}},
};

// 0x070043C0 - 0x070044C0
static const Vtx ddd_seg7_vertex_070043C0[] = {
    {{{ -5324,  -1023,   -716}, 0, { -1256,    274}, {0x6d, 0x40, 0x08, 0xff}}},
    {{{ -4914,  -2047,  -1228}, 0, {  -844,   -236}, {0x70, 0x20, 0x31, 0xff}}},
    {{{ -5529,  -1023,  -1637}, 0, { -1460,   -646}, {0x5a, 0x49, 0x32, 0xff}}},
    {{{ -4197,  -2047,  -1740}, 0, {  -132,   -748}, {0x4e, 0x21, 0x5e, 0xff}}},
    {{{ -4505,  -1023,  -2252}, 0, {  -436,  -1258}, {0x45, 0x47, 0x4e, 0xff}}},
    {{{ -3685,  -2047,  -2457}, 0, {   376,  -1462}, {0x2a, 0x21, 0x72, 0xff}}},
    {{{ -3890,  -1023,  -2866}, 0, {   172,  -1872}, {0x1d, 0x47, 0x64, 0xff}}},
    {{{ -2457,  -2047,  -2149}, 0, {  1604,  -1156}, {0xc5, 0x1d, 0x6c, 0xff}}},
    {{{ -2252,  -1023,  -2866}, 0, {  1808,  -1872}, {0xc8, 0x48, 0x58, 0xff}}},
    {{{ -2149,  -2047,  -1637}, 0, {  1908,   -646}, {0xa7, 0x18, 0x57, 0xff}}},
    {{{ -1842,  -1023,  -2047}, 0, {  2216,  -1054}, {0xbc, 0x44, 0x52, 0xff}}},
    {{{ -1228,  -2047,  -1228}, 0, {  2828,   -236}, {0xb6, 0x2a, 0x5d, 0xff}}},
    {{{  -613,  -1023,  -1637}, 0, {  3444,   -646}, {0xb8, 0x4b, 0x47, 0xff}}},
    {{{  -921,  -2047,   -613}, 0, {  3136,    376}, {0x88, 0x1d, 0x1b, 0xff}}},
    {{{  -204,  -1023,   -818}, 0, {  3852,    172}, {0x96, 0x44, 0x07, 0xff}}},
    {{{  -921,  -2047,    614}, 0, {  3136,   1602}, {0x85, 0x15, 0xee, 0xff}}},
};

// 0x070044C0 - 0x070045C0
static const Vtx ddd_seg7_vertex_070044C0[] = {
    {{{  -204,  -1023,   -818}, 0, {  3852,    172}, {0x96, 0x44, 0x07, 0xff}}},
    {{{  -921,  -2047,    614}, 0, {  3136,   1602}, {0x85, 0x15, 0xee, 0xff}}},
    {{{  -613,  -1023,    819}, 0, {  3444,   1806}, {0x96, 0x44, 0xf5, 0xff}}},
    {{{ -1228,  -2047,   1229}, 0, {  2828,   2214}, {0xa7, 0x1c, 0xab, 0xff}}},
    {{{  -613,  -1023,   1638}, 0, {  3444,   2624}, {0xab, 0x4b, 0xc8, 0xff}}},
    {{{ -3071,  -4607,    307}, 0, {   276,   1294}, {0xf0, 0x77, 0xd8, 0xff}}},
    {{{ -3276,  -4607,    717}, 0, {   480,   1908}, {0x00, 0x7b, 0x1c, 0xff}}},
    {{{ -2866,  -4607,    717}, 0, {   888,   1500}, {0x05, 0x7d, 0x14, 0xff}}},
    {{{ -1945,  -2047,   1638}, 0, {  2116,   2624}, {0xba, 0x26, 0x9e, 0xff}}},
    {{{ -1637,  -1023,   2253}, 0, {  2420,   3236}, {0xc1, 0x4e, 0xb3, 0xff}}},
    {{{ -2457,  -2047,   2150}, 0, {  1604,   3134}, {0xdb, 0x1f, 0x8b, 0xff}}},
    {{{ -2252,  -1023,   2867}, 0, {  1808,   3850}, {0xe2, 0x49, 0x9e, 0xff}}},
    {{{ -3685,  -2047,   2150}, 0, {   376,   3134}, {0x34, 0x13, 0x8f, 0xff}}},
    {{{ -3583,  -1023,   2458}, 0, {   480,   3440}, {0x1d, 0x3e, 0x96, 0xff}}},
    {{{ -4197,  -2047,   1536}, 0, {  -132,   2522}, {0x45, 0x1f, 0x9b, 0xff}}},
    {{{ -4709,  -1023,   2458}, 0, {  -640,   3440}, {0x18, 0x52, 0xa3, 0xff}}},
};

// 0x070045C0 - 0x070046B0
static const Vtx ddd_seg7_vertex_070045C0[] = {
    {{{ -3071,  -4607,   -101}, 0, {  -132,    888}, {0xf6, 0x7c, 0x18, 0xff}}},
    {{{ -3276,  -4607,   -716}, 0, {  -948,    480}, {0xea, 0x7a, 0xea, 0xff}}},
    {{{ -3378,  -4607,   -409}, 0, {  -744,    888}, {0xe2, 0x78, 0xe5, 0xff}}},
    {{{ -2969,  -4607,    205}, 0, {   276,   1090}, {0xe4, 0x7b, 0xf5, 0xff}}},
    {{{ -3071,  -4607,    307}, 0, {   276,   1294}, {0xf0, 0x77, 0xd8, 0xff}}},
    {{{ -2866,  -4607,    717}, 0, {   888,   1500}, {0x05, 0x7d, 0x14, 0xff}}},
    {{{ -2661,  -4607,    614}, 0, {   992,   1192}, {0x20, 0x75, 0x22, 0xff}}},
    {{{ -2457,  -4607,    410}, 0, {   992,    786}, {0x1b, 0x75, 0x25, 0xff}}},
    {{{ -2969,  -4607,      0}, 0, {    72,    888}, {0xdf, 0x79, 0x0d, 0xff}}},
    {{{ -2149,  -4607,    205}, 0, {  1092,    274}, {0x1e, 0x7a, 0x0a, 0xff}}},
    {{{ -2149,  -4607,   -204}, 0, {   684,   -134}, {0x1c, 0x7a, 0xf0, 0xff}}},
    {{{ -2457,  -4607,   -409}, 0, {   172,      0}, {0x1d, 0x78, 0xe6, 0xff}}},
    {{{ -2661,  -4607,   -613}, 0, {  -232,      0}, {0x0f, 0x7c, 0xeb, 0xff}}},
    {{{ -2866,  -4607,   -716}, 0, {  -540,     70}, {0x06, 0x77, 0xd6, 0xff}}},
    {{{ -3276,  -4607,   -101}, 0, {  -336,   1090}, {0x0d, 0x79, 0x21, 0xff}}},
};

// 0x070046B0 - 0x07004700
static const Vtx ddd_seg7_vertex_070046B0[] = {
    {{{ -3276,  -4607,   -101}, 0, {  -336,   1090}, {0x0d, 0x79, 0x21, 0xff}}},
    {{{ -3685,  -4607,   -306}, 0, {  -948,   1294}, {0xeb, 0x77, 0xdc, 0xff}}},
    {{{ -3890,  -4607,   -101}, 0, {  -948,   1704}, {0xe9, 0x7c, 0xfc, 0xff}}},
    {{{ -3378,  -4607,   -409}, 0, {  -744,    888}, {0xe2, 0x78, 0xe5, 0xff}}},
    {{{ -3378,  -4607,      0}, 0, {  -336,   1294}, {0x28, 0x77, 0x10, 0xff}}},
};

// 0x07004700 - 0x07004D48
static const Gfx ddd_seg7_dl_07004700[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, water_09003800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&ddd_seg7_lights_07003800.l, 1),
    gsSPLight(&ddd_seg7_lights_07003800.a, 2),
    gsSPVertex(ddd_seg7_vertex_07003860, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 5,  4,  6, 0x0,  5,  6,  7, 0x0),
    gsSP2Triangles( 7,  6,  8, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles( 3, 10,  4, 0x0,  9,  8, 11, 0x0),
    gsSP2Triangles( 8, 12, 11, 0x0, 11, 12,  1, 0x0),
    gsSP2Triangles(11,  1,  0, 0x0, 13, 14, 15, 0x0),
    gsSPVertex(ddd_seg7_vertex_07003960, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 2,  3,  4, 0x0,  4,  3,  5, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  5,  7, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  7,  9, 10, 0x0),
    gsSP2Triangles( 8,  7, 10, 0x0, 10,  9, 11, 0x0),
    gsSP2Triangles(12, 11, 13, 0x0, 12, 13, 14, 0x0),
    gsSP1Triangle(14, 13, 15, 0x0),
    gsSPVertex(ddd_seg7_vertex_07003A60, 9, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 2,  3,  4, 0x0,  4,  3,  5, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  5,  7, 0x0),
    gsSP1Triangle( 5,  8,  7, 0x0),
    gsSPLight(&ddd_seg7_lights_07003818.l, 1),
    gsSPLight(&ddd_seg7_lights_07003818.a, 2),
    gsSPVertex(ddd_seg7_vertex_07003AF0, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPLight(&ddd_seg7_lights_07003830.l, 1),
    gsSPLight(&ddd_seg7_lights_07003830.a, 2),
    gsSPVertex(ddd_seg7_vertex_07003B30, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  6,  4, 0x0,  7,  4,  6, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  9, 11, 10, 0x0),
    gsSP2Triangles( 8, 10, 12, 0x0, 13, 14, 15, 0x0),
    gsSPVertex(ddd_seg7_vertex_07003C30, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSP2Triangles( 4,  0,  3, 0x0,  2,  1,  5, 0x0),
    gsSP2Triangles( 2,  5,  6, 0x0,  6,  5,  7, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles(12, 11, 13, 0x0, 12, 13, 14, 0x0),
    gsSP1Triangle(14, 13, 15, 0x0),
    gsSPVertex(ddd_seg7_vertex_07003D30, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  7,  5,  8, 0x0),
    gsSP2Triangles( 7,  8,  9, 0x0,  9,  8, 10, 0x0),
    gsSP2Triangles( 9, 10, 11, 0x0, 11, 10, 12, 0x0),
    gsSP2Triangles(11, 12, 13, 0x0, 13, 12, 14, 0x0),
    gsSP1Triangle(13, 14, 15, 0x0),
    gsSPVertex(ddd_seg7_vertex_07003E30, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  0, 0x0),
    gsSP2Triangles( 3,  4,  1, 0x0,  1,  5,  2, 0x0),
    gsSP2Triangles( 2,  5,  6, 0x0,  2,  6,  7, 0x0),
    gsSP2Triangles( 8,  4,  3, 0x0,  8,  9,  4, 0x0),
    gsSP2Triangles(10,  9,  8, 0x0, 10, 11,  9, 0x0),
    gsSP2Triangles(12, 11, 10, 0x0, 12, 13, 11, 0x0),
    gsSP2Triangles(14, 13, 12, 0x0, 15, 14, 12, 0x0),
    gsSPVertex(ddd_seg7_vertex_07003F30, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  6,  4, 0x0,  7,  6,  3, 0x0),
    gsSP2Triangles( 7,  8,  6, 0x0,  9, 10,  7, 0x0),
    gsSP2Triangles(10,  8,  7, 0x0, 11, 10,  9, 0x0),
    gsSP2Triangles(11, 12, 10, 0x0,  1, 12, 11, 0x0),
    gsSP2Triangles( 2,  1, 11, 0x0,  0, 13,  1, 0x0),
    gsSP2Triangles(14, 15,  0, 0x0, 15, 13,  0, 0x0),
    gsSPVertex(ddd_seg7_vertex_07004030, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  3,  0, 0x0,  4,  5,  3, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  6,  8,  9, 0x0),
    gsSP2Triangles( 8, 10,  9, 0x0, 11, 12, 13, 0x0),
    gsSP2Triangles( 9, 10, 14, 0x0,  9, 14, 15, 0x0),
    gsSPVertex(ddd_seg7_vertex_07004130, 9, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 0,  4,  1, 0x0,  5,  6,  3, 0x0),
    gsSP2Triangles( 5,  7,  6, 0x0,  6,  7,  8, 0x0),
    gsSPLight(&ddd_seg7_lights_07003848.l, 1),
    gsSPLight(&ddd_seg7_lights_07003848.a, 2),
    gsSPVertex(ddd_seg7_vertex_070041C0, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  0, 0x0),
    gsSP2Triangles( 1,  4,  5, 0x0,  4,  1,  6, 0x0),
    gsSP2Triangles( 6,  1,  3, 0x0,  7,  1,  5, 0x0),
    gsSP2Triangles( 2,  1,  8, 0x0,  8,  1,  7, 0x0),
    gsSP2Triangles( 9, 10, 11, 0x0, 12,  9, 13, 0x0),
    gsSP2Triangles( 9, 11, 13, 0x0, 10, 14, 11, 0x0),
    gsSP1Triangle(12, 13, 15, 0x0),
    gsSPVertex(ddd_seg7_vertex_070042C0, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  2, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  5,  4, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles( 7,  6, 12, 0x0,  7, 12, 13, 0x0),
    gsSP2Triangles( 8, 14,  5, 0x0, 13, 12, 15, 0x0),
    gsSPVertex(ddd_seg7_vertex_070043C0, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 2,  3,  4, 0x0,  4,  3,  5, 0x0),
    gsSP2Triangles( 6,  5,  7, 0x0,  6,  7,  8, 0x0),
    gsSP2Triangles( 8,  7,  9, 0x0,  8,  9, 10, 0x0),
    gsSP2Triangles(10,  9, 11, 0x0, 10, 11, 12, 0x0),
    gsSP2Triangles(12, 11, 13, 0x0, 12, 13, 14, 0x0),
    gsSP1Triangle(14, 13, 15, 0x0),
    gsSPVertex(ddd_seg7_vertex_070044C0, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  4, 0x0),
    gsSP2Triangles( 2,  1,  4, 0x0,  5,  6,  7, 0x0),
    gsSP2Triangles( 4,  3,  8, 0x0,  4,  8,  9, 0x0),
    gsSP2Triangles( 8, 10, 11, 0x0,  9,  8, 11, 0x0),
    gsSP2Triangles(11, 12, 13, 0x0, 11, 10, 12, 0x0),
    gsSP2Triangles(13, 12, 14, 0x0, 13, 14, 15, 0x0),
    gsSPVertex(ddd_seg7_vertex_070045C0, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  5,  6, 0x0,  3,  6,  7, 0x0),
    gsSP2Triangles( 8,  3,  9, 0x0,  3,  7,  9, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles( 0,  8, 11, 0x0,  0, 11, 12, 0x0),
    gsSP2Triangles( 0, 13,  1, 0x0,  0, 12, 13, 0x0),
    gsSP1Triangle(14,  0,  2, 0x0),
    gsSPVertex(ddd_seg7_vertex_070046B0, 5, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP1Triangle( 4,  0,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x07004D48 - 0x07004DA8
const Gfx ddd_seg7_dl_07004D48[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 6, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (64 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(ddd_seg7_dl_07004700),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};
