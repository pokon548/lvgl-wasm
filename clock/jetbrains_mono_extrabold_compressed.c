#include "../lvgl.h" ////#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 80 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef JETBRAINS_MONO_EXTRABOLD_COMPRESSED
#define JETBRAINS_MONO_EXTRABOLD_COMPRESSED 1
#endif

#if JETBRAINS_MONO_EXTRABOLD_COMPRESSED

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+30 "0" */
    0x0, 0x1, 0xff, 0xc0, 0x0, 0x0, 0xf, 0xff,
    0xfe, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xc0, 0x0,
    0x3f, 0xff, 0xff, 0xf8, 0x0, 0x3f, 0xff, 0xff,
    0xfe, 0x0, 0x3f, 0xff, 0xff, 0xff, 0x80, 0x3f,
    0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff,
    0xf8, 0x1f, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0xff,
    0xff, 0xff, 0xff, 0x1f, 0xff, 0xe0, 0x3f, 0xff,
    0xcf, 0xff, 0xc0, 0x7, 0xff, 0xe7, 0xff, 0xc0,
    0x1, 0xff, 0xf7, 0xff, 0xc0, 0x0, 0x7f, 0xff,
    0xff, 0xe0, 0x0, 0x3f, 0xff, 0xff, 0xe0, 0x0,
    0xf, 0xff, 0xff, 0xf0, 0x0, 0x7, 0xff, 0xff,
    0xf8, 0x0, 0x3, 0xff, 0xff, 0xfc, 0x0, 0x1,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x7f, 0xff, 0xff, 0x80, 0x0, 0x3f,
    0xff, 0xff, 0xc0, 0x70, 0x1f, 0xff, 0xff, 0xe0,
    0x7c, 0xf, 0xff, 0xff, 0xf0, 0x7f, 0x7, 0xff,
    0xff, 0xf8, 0x3f, 0x83, 0xff, 0xff, 0xfc, 0x1f,
    0xc1, 0xff, 0xff, 0xfe, 0xf, 0xe0, 0xff, 0xff,
    0xff, 0x7, 0xf0, 0x7f, 0xff, 0xff, 0x83, 0xf8,
    0x3f, 0xff, 0xff, 0xc1, 0xfc, 0x1f, 0xff, 0xff,
    0xe0, 0xfe, 0xf, 0xff, 0xff, 0xf0, 0x7f, 0x7,
    0xff, 0xff, 0xf8, 0x3f, 0x83, 0xff, 0xff, 0xfc,
    0x1f, 0xc1, 0xff, 0xff, 0xfe, 0xf, 0xe0, 0xff,
    0xff, 0xff, 0x3, 0xe0, 0x7f, 0xff, 0xff, 0x80,
    0xe0, 0x3f, 0xff, 0xff, 0xc0, 0x0, 0x1f, 0xff,
    0xff, 0xe0, 0x0, 0xf, 0xff, 0xff, 0xf0, 0x0,
    0x7, 0xff, 0xff, 0xf8, 0x0, 0x3, 0xff, 0xff,
    0xfc, 0x0, 0x1, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0xff, 0xff, 0xff, 0x80, 0x0, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x7f, 0xf9, 0xff, 0xf0, 0x0, 0x7f,
    0xfc, 0xff, 0xfc, 0x0, 0x7f, 0xfe, 0x7f, 0xff,
    0x80, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0x7, 0xff, 0xff, 0xff, 0xff, 0x3, 0xff, 0xff,
    0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x3f, 0xff, 0xff, 0xff, 0x80, 0xf, 0xff, 0xff,
    0xff, 0x80, 0x3, 0xff, 0xff, 0xff, 0x0, 0x0,
    0x7f, 0xff, 0xff, 0x0, 0x0, 0xf, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x7f, 0xf0, 0x0, 0x0,

    /* U+31 "1" */
    0x0, 0x7, 0xff, 0xe0, 0x0, 0x0, 0xf, 0xff,
    0xe0, 0x0, 0x0, 0x3f, 0xff, 0xe0, 0x0, 0x0,
    0x7f, 0xff, 0xe0, 0x0, 0x1, 0xff, 0xff, 0xe0,
    0x0, 0x3, 0xff, 0xff, 0xe0, 0x0, 0x7, 0xff,
    0xff, 0xe0, 0x0, 0x1f, 0xff, 0xff, 0xe0, 0x0,
    0x3f, 0xff, 0xff, 0xe0, 0x0, 0x7f, 0xff, 0xff,
    0xe0, 0x0, 0x7f, 0xff, 0xff, 0xe0, 0x0, 0x7f,
    0xfd, 0xff, 0xe0, 0x0, 0x7f, 0xf9, 0xff, 0xe0,
    0x0, 0x7f, 0xf1, 0xff, 0xe0, 0x0, 0x7f, 0xe1,
    0xff, 0xe0, 0x0, 0x7f, 0x81, 0xff, 0xe0, 0x0,
    0x7f, 0x1, 0xff, 0xe0, 0x0, 0x7c, 0x1, 0xff,
    0xe0, 0x0, 0x78, 0x1, 0xff, 0xe0, 0x0, 0x60,
    0x1, 0xff, 0xe0, 0x0, 0x40, 0x1, 0xff, 0xe0,
    0x0, 0x0, 0x1, 0xff, 0xe0, 0x0, 0x0, 0x1,
    0xff, 0xe0, 0x0, 0x0, 0x1, 0xff, 0xe0, 0x0,
    0x0, 0x1, 0xff, 0xe0, 0x0, 0x0, 0x1, 0xff,
    0xe0, 0x0, 0x0, 0x1, 0xff, 0xe0, 0x0, 0x0,
    0x1, 0xff, 0xe0, 0x0, 0x0, 0x1, 0xff, 0xe0,
    0x0, 0x0, 0x1, 0xff, 0xe0, 0x0, 0x0, 0x1,
    0xff, 0xe0, 0x0, 0x0, 0x1, 0xff, 0xe0, 0x0,
    0x0, 0x1, 0xff, 0xe0, 0x0, 0x0, 0x1, 0xff,
    0xe0, 0x0, 0x0, 0x1, 0xff, 0xe0, 0x0, 0x0,
    0x1, 0xff, 0xe0, 0x0, 0x0, 0x1, 0xff, 0xe0,
    0x0, 0x0, 0x1, 0xff, 0xe0, 0x0, 0x0, 0x1,
    0xff, 0xe0, 0x0, 0x0, 0x1, 0xff, 0xe0, 0x0,
    0x0, 0x1, 0xff, 0xe0, 0x0, 0x0, 0x1, 0xff,
    0xe0, 0x0, 0x0, 0x1, 0xff, 0xe0, 0x0, 0x0,
    0x1, 0xff, 0xe0, 0x0, 0x0, 0x1, 0xff, 0xe0,
    0x0, 0x0, 0x1, 0xff, 0xe0, 0x0, 0x0, 0x1,
    0xff, 0xe0, 0x0, 0x0, 0x1, 0xff, 0xe0, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff,

    /* U+32 "2" */
    0x0, 0x1, 0xff, 0xc0, 0x0, 0x0, 0xf, 0xff,
    0xfc, 0x0, 0x0, 0x1f, 0xff, 0xff, 0x80, 0x0,
    0x3f, 0xff, 0xff, 0xf0, 0x0, 0x3f, 0xff, 0xff,
    0xfc, 0x0, 0x3f, 0xff, 0xff, 0xff, 0x0, 0x3f,
    0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xff,
    0xf0, 0x3f, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0xff,
    0xff, 0xff, 0xfe, 0x1f, 0xff, 0xe0, 0x7f, 0xff,
    0x8f, 0xff, 0xc0, 0xf, 0xff, 0xc7, 0xff, 0xc0,
    0x3, 0xff, 0xe7, 0xff, 0xc0, 0x0, 0xff, 0xfb,
    0xff, 0xc0, 0x0, 0x7f, 0xfd, 0xff, 0xe0, 0x0,
    0x1f, 0xfe, 0xff, 0xf0, 0x0, 0xf, 0xff, 0x0,
    0x0, 0x0, 0x7, 0xff, 0x80, 0x0, 0x0, 0x3,
    0xff, 0xc0, 0x0, 0x0, 0x1, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0xff, 0xf0, 0x0, 0x0, 0x0, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x7f, 0xf8, 0x0, 0x0,
    0x0, 0x7f, 0xfc, 0x0, 0x0, 0x0, 0x3f, 0xfe,
    0x0, 0x0, 0x0, 0x3f, 0xfe, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0x80, 0x0, 0x0, 0x7f, 0xff, 0x80, 0x0,
    0x0, 0x7f, 0xff, 0x80, 0x0, 0x0, 0x7f, 0xff,
    0x80, 0x0, 0x0, 0x7f, 0xff, 0x80, 0x0, 0x0,
    0xff, 0xff, 0x80, 0x0, 0x0, 0xff, 0xff, 0x80,
    0x0, 0x0, 0xff, 0xff, 0x80, 0x0, 0x0, 0xff,
    0xff, 0x80, 0x0, 0x1, 0xff, 0xff, 0x0, 0x0,
    0x1, 0xff, 0xff, 0x0, 0x0, 0x1, 0xff, 0xff,
    0x0, 0x0, 0x1, 0xff, 0xfe, 0x0, 0x0, 0x3,
    0xff, 0xfe, 0x0, 0x0, 0x3, 0xff, 0xfe, 0x0,
    0x0, 0x3, 0xff, 0xfc, 0x0, 0x0, 0x3, 0xff,
    0xfc, 0x0, 0x0, 0x1, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff,
    0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff,
    0xdf, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff,
    0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xfb,
    0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff,
    0xff, 0xc0,

    /* U+33 "3" */
    0x1f, 0xff, 0xff, 0xff, 0xfe, 0xf, 0xff, 0xff,
    0xff, 0xff, 0x7, 0xff, 0xff, 0xff, 0xff, 0x83,
    0xff, 0xff, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xff,
    0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x7f,
    0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xff,
    0xfc, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0xf, 0xff,
    0xff, 0x8f, 0xff, 0x0, 0x0, 0x0, 0xf, 0xff,
    0x80, 0x0, 0x0, 0x1f, 0xff, 0x80, 0x0, 0x0,
    0x1f, 0xff, 0x80, 0x0, 0x0, 0x3f, 0xff, 0x80,
    0x0, 0x0, 0x3f, 0xff, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0x0, 0x0, 0x0, 0x3f, 0xfe,
    0x0, 0x0, 0x0, 0x3f, 0xfe, 0x0, 0x0, 0x0,
    0x3f, 0xfe, 0x0, 0x0, 0x0, 0x3f, 0xfc, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0x80, 0x0, 0x0, 0xf,
    0xff, 0xf8, 0x0, 0x0, 0x7, 0xff, 0xff, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xe0, 0x0, 0x1, 0xff,
    0xff, 0xf8, 0x0, 0x0, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0x80, 0x0, 0x3f, 0xff,
    0xff, 0xe0, 0x0, 0x1f, 0xff, 0xff, 0xf0, 0x0,
    0xf, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0x1f, 0xff, 0x80, 0x0,
    0x0, 0x7, 0xff, 0xc0, 0x0, 0x0, 0x1, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x3f, 0xfc, 0x0, 0x0, 0x0, 0x1f, 0xfe,
    0x0, 0x0, 0x0, 0xf, 0xff, 0x0, 0x0, 0x0,
    0x7, 0xff, 0x80, 0x0, 0x0, 0x3, 0xff, 0xc0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0xff, 0xff, 0xff, 0x80, 0x0, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x7f, 0xf9, 0xff, 0xf0, 0x0, 0x7f,
    0xfc, 0xff, 0xfc, 0x0, 0x7f, 0xfe, 0x7f, 0xff,
    0x80, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0xf, 0xff, 0xff, 0xff, 0xff, 0x3, 0xff, 0xff,
    0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x3f, 0xff, 0xff, 0xff, 0x80, 0xf, 0xff, 0xff,
    0xff, 0x80, 0x3, 0xff, 0xff, 0xff, 0x0, 0x0,
    0x7f, 0xff, 0xff, 0x0, 0x0, 0xf, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x7f, 0xf0, 0x0, 0x0,

    /* U+34 "4" */
    0x0, 0x0, 0x3, 0xff, 0xf0, 0x0, 0x0, 0x1f,
    0xff, 0x80, 0x0, 0x0, 0x7f, 0xfc, 0x0, 0x0,
    0x3, 0xff, 0xe0, 0x0, 0x0, 0x1f, 0xff, 0x80,
    0x0, 0x0, 0xff, 0xfc, 0x0, 0x0, 0x3, 0xff,
    0xe0, 0x0, 0x0, 0x1f, 0xff, 0x0, 0x0, 0x0,
    0xff, 0xfc, 0x0, 0x0, 0x7, 0xff, 0xe0, 0x0,
    0x0, 0x1f, 0xff, 0x0, 0x0, 0x0, 0xff, 0xfc,
    0x0, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x0, 0x3f,
    0xff, 0x0, 0x0, 0x0, 0xff, 0xf8, 0x0, 0x0,
    0x7, 0xff, 0xe0, 0x0, 0x0, 0x3f, 0xff, 0x0,
    0x0, 0x0, 0xff, 0xf8, 0x0, 0x0, 0x7, 0xff,
    0xc0, 0x0, 0x0, 0x3f, 0xff, 0x0, 0x0, 0x1,
    0xff, 0xf8, 0x0, 0x0, 0x7, 0xff, 0xc0, 0x0,
    0x0, 0x3f, 0xfe, 0x0, 0x0, 0x1, 0xff, 0xf8,
    0x0, 0x0, 0xf, 0xff, 0xc0, 0x0, 0x0, 0x3f,
    0xfe, 0x0, 0xff, 0xf1, 0xff, 0xf0, 0x3, 0xff,
    0xcf, 0xff, 0xc0, 0xf, 0xff, 0x7f, 0xfe, 0x0,
    0x3f, 0xfd, 0xff, 0xf0, 0x0, 0xff, 0xff, 0xff,
    0xc0, 0x3, 0xff, 0xff, 0xfe, 0x0, 0xf, 0xff,
    0xff, 0xf0, 0x0, 0x3f, 0xff, 0xff, 0x80, 0x0,
    0xff, 0xff, 0xfe, 0x0, 0x3, 0xff, 0xff, 0xf8,
    0x0, 0xf, 0xff, 0xff, 0xe0, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0x0, 0x0, 0xf, 0xff, 0x0, 0x0, 0x0, 0x3f,
    0xfc, 0x0, 0x0, 0x0, 0xff, 0xf0, 0x0, 0x0,
    0x3, 0xff, 0xc0, 0x0, 0x0, 0xf, 0xff, 0x0,
    0x0, 0x0, 0x3f, 0xfc, 0x0, 0x0, 0x0, 0xff,
    0xf0, 0x0, 0x0, 0x3, 0xff, 0xc0, 0x0, 0x0,
    0xf, 0xff, 0x0, 0x0, 0x0, 0x3f, 0xfc, 0x0,
    0x0, 0x0, 0xff, 0xf0,

    /* U+35 "5" */
    0x3f, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xf, 0xff, 0xff, 0xff, 0xff, 0x87,
    0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff,
    0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff,
    0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0xff,
    0xfc, 0x3f, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xff,
    0xff, 0xff, 0xff, 0xf, 0xff, 0x0, 0x0, 0x0,
    0x7, 0xff, 0x80, 0x0, 0x0, 0x3, 0xff, 0xc0,
    0x0, 0x0, 0x1, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x7f, 0xf8, 0x0,
    0x0, 0x0, 0x3f, 0xfc, 0x0, 0x0, 0x0, 0x1f,
    0xfe, 0x0, 0x0, 0x0, 0xf, 0xff, 0x0, 0x0,
    0x0, 0x7, 0xff, 0x80, 0x0, 0x0, 0x3, 0xff,
    0xc0, 0x7f, 0x80, 0x1, 0xff, 0xe1, 0xff, 0xf8,
    0x0, 0xff, 0xf1, 0xff, 0xff, 0x0, 0x7f, 0xf9,
    0xff, 0xff, 0xc0, 0x3f, 0xfd, 0xff, 0xff, 0xf0,
    0x1f, 0xff, 0xff, 0xff, 0xfc, 0xf, 0xff, 0xff,
    0xff, 0xff, 0x7, 0xff, 0xff, 0xff, 0xff, 0xc3,
    0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xfc, 0x7,
    0xff, 0xf8, 0xff, 0xf8, 0x0, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x3f, 0xfe, 0x0, 0x0, 0x0, 0xf,
    0xff, 0x80, 0x0, 0x0, 0x7, 0xff, 0xc0, 0x0,
    0x0, 0x1, 0xff, 0xe0, 0x0, 0x0, 0x0, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x7f, 0xf8, 0x0, 0x0,
    0x0, 0x3f, 0xfc, 0x0, 0x0, 0x0, 0x1f, 0xfe,
    0x0, 0x0, 0x0, 0xf, 0xff, 0x0, 0x0, 0x0,
    0x7, 0xff, 0x80, 0x0, 0x0, 0x3, 0xff, 0xc0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0x0, 0x1,
    0xff, 0xff, 0xff, 0x80, 0x0, 0xff, 0xfb, 0xff,
    0xe0, 0x0, 0xff, 0xf9, 0xff, 0xf8, 0x0, 0xff,
    0xfc, 0xff, 0xff, 0x81, 0xff, 0xfe, 0x3f, 0xff,
    0xff, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0x7, 0xff, 0xff, 0xff, 0xff, 0x1, 0xff, 0xff,
    0xff, 0xff, 0x0, 0x7f, 0xff, 0xff, 0xff, 0x0,
    0x1f, 0xff, 0xff, 0xff, 0x0, 0x7, 0xff, 0xff,
    0xff, 0x0, 0x0, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x1f, 0xff, 0xfc, 0x0, 0x0, 0x0, 0xff, 0xe0,
    0x0, 0x0,

    /* U+36 "6" */
    0x0, 0x0, 0xf, 0xff, 0x80, 0x0, 0x0, 0x7,
    0xff, 0xe0, 0x0, 0x0, 0x3, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x7f,
    0xfe, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x0, 0x0,
    0x0, 0xf, 0xff, 0x80, 0x0, 0x0, 0x7, 0xff,
    0xc0, 0x0, 0x0, 0x3, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x7f, 0xfc,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0x0, 0x0, 0x0,
    0xf, 0xff, 0x80, 0x0, 0x0, 0x7, 0xff, 0xc0,
    0x0, 0x0, 0x3, 0xff, 0xf0, 0x0, 0x0, 0x1,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x7f, 0xfc, 0x0,
    0x0, 0x0, 0x3f, 0xfe, 0x0, 0x0, 0x0, 0xf,
    0xff, 0x80, 0x0, 0x0, 0x7, 0xff, 0xc0, 0x0,
    0x0, 0x3, 0xff, 0xe0, 0x0, 0x0, 0x0, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x7f, 0xfc, 0x3f, 0xc0,
    0x0, 0x1f, 0xfe, 0x3f, 0xfe, 0x0, 0xf, 0xff,
    0xbf, 0xff, 0xe0, 0x3, 0xff, 0xdf, 0xff, 0xfc,
    0x1, 0xff, 0xef, 0xff, 0xff, 0x80, 0x7f, 0xff,
    0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xfe,
    0xf, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff,
    0xff, 0xff, 0xf1, 0xff, 0xff, 0x3, 0xff, 0xfc,
    0x7f, 0xff, 0x0, 0x3f, 0xff, 0x9f, 0xff, 0x0,
    0x3, 0xff, 0xef, 0xff, 0xc0, 0x0, 0xff, 0xfb,
    0xff, 0xe0, 0x0, 0x1f, 0xff, 0xff, 0xf8, 0x0,
    0x7, 0xff, 0xff, 0xfc, 0x0, 0x0, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xc0, 0x0,
    0xf, 0xff, 0xff, 0xf0, 0x0, 0x3, 0xff, 0xff,
    0xfc, 0x0, 0x0, 0xff, 0xff, 0xff, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xe0, 0x0, 0x1f, 0xff, 0x7f,
    0xf8, 0x0, 0x7, 0xff, 0xdf, 0xfe, 0x0, 0x3,
    0xff, 0xe7, 0xff, 0xc0, 0x0, 0xff, 0xf9, 0xff,
    0xfc, 0x0, 0xff, 0xfe, 0x3f, 0xff, 0xc0, 0xff,
    0xff, 0xf, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xff,
    0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff,
    0xf0, 0x7, 0xff, 0xff, 0xff, 0xf8, 0x0, 0xff,
    0xff, 0xff, 0xfe, 0x0, 0x1f, 0xff, 0xff, 0xfe,
    0x0, 0x3, 0xff, 0xff, 0xff, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0x0, 0x0, 0x3, 0xff, 0xff, 0x0,
    0x0, 0x0, 0xf, 0xfc, 0x0, 0x0,

    /* U+37 "7" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0xf, 0xff, 0xff, 0xe0, 0x0, 0x1f,
    0xfe, 0xff, 0xe0, 0x0, 0x1f, 0xfe, 0xff, 0xe0,
    0x0, 0x3f, 0xfc, 0xff, 0xe0, 0x0, 0x3f, 0xfc,
    0xff, 0xe0, 0x0, 0x7f, 0xf8, 0xff, 0xe0, 0x0,
    0x7f, 0xf8, 0xff, 0xe0, 0x0, 0xff, 0xf8, 0xff,
    0xe0, 0x0, 0xff, 0xf0, 0x0, 0x0, 0x1, 0xff,
    0xf0, 0x0, 0x0, 0x1, 0xff, 0xe0, 0x0, 0x0,
    0x3, 0xff, 0xe0, 0x0, 0x0, 0x3, 0xff, 0xc0,
    0x0, 0x0, 0x7, 0xff, 0xc0, 0x0, 0x0, 0x7,
    0xff, 0x80, 0x0, 0x0, 0x7, 0xff, 0x80, 0x0,
    0x0, 0xf, 0xff, 0x80, 0x0, 0x0, 0xf, 0xff,
    0x0, 0x0, 0x0, 0x1f, 0xff, 0x0, 0x0, 0x0,
    0x1f, 0xfe, 0x0, 0x0, 0x0, 0x3f, 0xfe, 0x0,
    0x0, 0x0, 0x3f, 0xfc, 0x0, 0x0, 0x0, 0x7f,
    0xfc, 0x0, 0x0, 0x0, 0x7f, 0xf8, 0x0, 0x0,
    0x0, 0xff, 0xf8, 0x0, 0x0, 0x0, 0xff, 0xf8,
    0x0, 0x0, 0x1, 0xff, 0xf0, 0x0, 0x0, 0x1,
    0xff, 0xf0, 0x0, 0x0, 0x1, 0xff, 0xe0, 0x0,
    0x0, 0x3, 0xff, 0xe0, 0x0, 0x0, 0x3, 0xff,
    0xc0, 0x0, 0x0, 0x7, 0xff, 0xc0, 0x0, 0x0,
    0x7, 0xff, 0x80, 0x0, 0x0, 0xf, 0xff, 0x80,
    0x0, 0x0, 0xf, 0xff, 0x80, 0x0, 0x0, 0x1f,
    0xff, 0x0, 0x0, 0x0, 0x1f, 0xff, 0x0, 0x0,
    0x0, 0x3f, 0xfe, 0x0, 0x0, 0x0, 0x3f, 0xfe,
    0x0, 0x0, 0x0, 0x7f, 0xfc, 0x0, 0x0, 0x0,
    0x7f, 0xfc, 0x0, 0x0, 0x0, 0x7f, 0xf8, 0x0,
    0x0, 0x0, 0xff, 0xf8, 0x0, 0x0, 0x0, 0xff,
    0xf8, 0x0, 0x0, 0x1, 0xff, 0xf0, 0x0, 0x0,
    0x1, 0xff, 0xf0, 0x0, 0x0, 0x3, 0xff, 0xe0,
    0x0, 0x0,

    /* U+38 "8" */
    0x0, 0x1, 0xff, 0xe0, 0x0, 0x0, 0x7, 0xff,
    0xff, 0x80, 0x0, 0x7, 0xff, 0xff, 0xf8, 0x0,
    0x7, 0xff, 0xff, 0xff, 0x80, 0x3, 0xff, 0xff,
    0xff, 0xf0, 0x1, 0xff, 0xff, 0xff, 0xfe, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff,
    0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0xf,
    0xff, 0xe0, 0x3f, 0xff, 0xc3, 0xff, 0xe0, 0x3,
    0xff, 0xf0, 0xff, 0xf0, 0x0, 0x7f, 0xfc, 0x7f,
    0xf8, 0x0, 0xf, 0xff, 0x9f, 0xfe, 0x0, 0x3,
    0xff, 0xe7, 0xff, 0x0, 0x0, 0x7f, 0xf9, 0xff,
    0xc0, 0x0, 0x1f, 0xfe, 0x7f, 0xf0, 0x0, 0x7,
    0xff, 0x9f, 0xfc, 0x0, 0x1, 0xff, 0xe7, 0xff,
    0x0, 0x0, 0x7f, 0xf9, 0xff, 0xc0, 0x0, 0x1f,
    0xfe, 0x3f, 0xf8, 0x0, 0xf, 0xff, 0xf, 0xfe,
    0x0, 0x3, 0xff, 0xc3, 0xff, 0xc0, 0x1, 0xff,
    0xe0, 0x7f, 0xf8, 0x0, 0xff, 0xf8, 0xf, 0xff,
    0x80, 0xff, 0xfc, 0x1, 0xff, 0xff, 0xff, 0xfe,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0x0, 0x7, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x7f, 0xff, 0xff, 0x0,
    0x0, 0x3, 0xff, 0xfe, 0x0, 0x0, 0x7, 0xff,
    0xff, 0xf0, 0x0, 0x7, 0xff, 0xff, 0xff, 0x80,
    0x7, 0xff, 0xff, 0xff, 0xf0, 0x3, 0xff, 0xff,
    0xff, 0xff, 0x1, 0xff, 0xf8, 0xf, 0xff, 0xe0,
    0xff, 0xf8, 0x0, 0x7f, 0xf8, 0x3f, 0xfc, 0x0,
    0xf, 0xff, 0x1f, 0xfe, 0x0, 0x1, 0xff, 0xe7,
    0xff, 0x80, 0x0, 0x7f, 0xfb, 0xff, 0xc0, 0x0,
    0xf, 0xfe, 0xff, 0xf0, 0x0, 0x3, 0xff, 0xff,
    0xfc, 0x0, 0x0, 0xff, 0xff, 0xff, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xc0, 0x0, 0xf, 0xff, 0xff,
    0xf0, 0x0, 0x3, 0xff, 0xff, 0xfe, 0x0, 0x1,
    0xff, 0xff, 0xff, 0x80, 0x0, 0x7f, 0xff, 0xff,
    0xf0, 0x0, 0x3f, 0xff, 0x7f, 0xfe, 0x0, 0x1f,
    0xff, 0x9f, 0xff, 0xe0, 0x3f, 0xff, 0xe3, 0xff,
    0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff,
    0xfc, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x3, 0xff,
    0xff, 0xff, 0xff, 0x0, 0x7f, 0xff, 0xff, 0xff,
    0x80, 0xf, 0xff, 0xff, 0xff, 0xc0, 0x1, 0xff,
    0xff, 0xff, 0xe0, 0x0, 0x1f, 0xff, 0xff, 0xe0,
    0x0, 0x1, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x7,
    0xff, 0x80, 0x0,

    /* U+39 "9" */
    0x0, 0x0, 0xff, 0xc0, 0x0, 0x0, 0x3, 0xff,
    0xff, 0x0, 0x0, 0x3, 0xff, 0xff, 0xf0, 0x0,
    0x3, 0xff, 0xff, 0xff, 0x0, 0x1, 0xff, 0xff,
    0xff, 0xe0, 0x1, 0xff, 0xff, 0xff, 0xfc, 0x0,
    0x7f, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff,
    0xff, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0xf,
    0xff, 0xff, 0xff, 0xff, 0x83, 0xff, 0xfc, 0xf,
    0xff, 0xf1, 0xff, 0xf8, 0x0, 0xff, 0xfc, 0x7f,
    0xfc, 0x0, 0xf, 0xff, 0x9f, 0xff, 0x0, 0x3,
    0xff, 0xef, 0xff, 0x80, 0x0, 0x7f, 0xfb, 0xff,
    0xe0, 0x0, 0x1f, 0xff, 0xff, 0xf0, 0x0, 0x3,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x3f, 0xff, 0xff, 0xc0, 0x0, 0xf,
    0xff, 0xff, 0xf0, 0x0, 0x3, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0xff, 0xff, 0xff, 0x80, 0x0, 0x7f,
    0xff, 0xff, 0xe0, 0x0, 0x1f, 0xff, 0x7f, 0xf8,
    0x0, 0xf, 0xff, 0xdf, 0xff, 0x0, 0x3, 0xff,
    0xe7, 0xff, 0xf0, 0x3, 0xff, 0xf8, 0xff, 0xff,
    0x3, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0x87, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xff, 0xff,
    0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xf8,
    0x7, 0xff, 0xff, 0xdf, 0xfe, 0x0, 0xff, 0xff,
    0xef, 0xff, 0x80, 0x1f, 0xff, 0xf7, 0xff, 0xc0,
    0x1, 0xff, 0xf1, 0xff, 0xf0, 0x0, 0xf, 0xf0,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x7f, 0xfc, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0x0, 0x0, 0x0, 0xf,
    0xff, 0x80, 0x0, 0x0, 0x7, 0xff, 0xe0, 0x0,
    0x0, 0x1, 0xff, 0xf0, 0x0, 0x0, 0x0, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0x0, 0x0, 0x0, 0xf, 0xff,
    0x80, 0x0, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x0,
    0x1, 0xff, 0xf0, 0x0, 0x0, 0x0, 0xff, 0xf8,
    0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0x0, 0x0, 0x0, 0xf, 0xff, 0x80,
    0x0, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x0, 0x3,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0x0, 0x0, 0x0, 0xf, 0xff, 0x80, 0x0,
    0x0, 0x7, 0xff, 0xe0, 0x0, 0x0,

    /* U+3A ":" */
    0x7, 0xe0, 0x1f, 0xf8, 0x3f, 0xfc, 0x7f, 0xfe,
    0x7f, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xfe,
    0x7f, 0xfe, 0x3f, 0xfc, 0x1f, 0xf8, 0x7, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xe0, 0x1f, 0xf8,
    0x3f, 0xfc, 0x7f, 0xfe, 0x7f, 0xfe, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x7f, 0xfe, 0x7f, 0xfe, 0x3f, 0xfc,
    0x1f, 0xf8, 0x7, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 768, .box_w = 41, .box_h = 59, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 303, .adv_w = 768, .box_w = 40, .box_h = 58, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 593, .adv_w = 768, .box_w = 41, .box_h = 58, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 891, .adv_w = 768, .box_w = 41, .box_h = 59, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 1194, .adv_w = 768, .box_w = 38, .box_h = 58, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1470, .adv_w = 768, .box_w = 41, .box_h = 58, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 1768, .adv_w = 768, .box_w = 42, .box_h = 59, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 2078, .adv_w = 768, .box_w = 40, .box_h = 58, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2368, .adv_w = 768, .box_w = 42, .box_h = 60, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 2683, .adv_w = 768, .box_w = 42, .box_h = 59, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2993, .adv_w = 768, .box_w = 16, .box_h = 46, .ofs_x = 16, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 11, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t jetbrains_mono_extrabold_compressed = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 60,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if JETBRAINS_MONO_EXTRABOLD_COMPRESSED*/

