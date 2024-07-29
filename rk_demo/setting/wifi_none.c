#ifdef __has_include
#if __has_include("lvgl.h")
#ifndef LV_LVGL_H_INCLUDE_SIMPLE
#define LV_LVGL_H_INCLUDE_SIMPLE
#endif
#endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_WIFI_NONE
#define LV_ATTRIBUTE_IMG_WIFI_NONE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_WIFI_NONE
uint8_t wifi_none_map[] =
{
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
    /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
    0x92, 0x33, 0x92, 0xc2, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xc2, 0x92, 0x33,
    0x92, 0xe6, 0x92, 0xaa, 0x92, 0x47, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x47, 0x92, 0xab, 0x92, 0xe4,
    0x92, 0xff, 0x92, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x2b, 0x92, 0xff,
    0x92, 0xff, 0x92, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x20, 0x92, 0xff,
    0x92, 0xff, 0x92, 0x21, 0x92, 0x40, 0x92, 0x18, 0x00, 0x00, 0x00, 0x00, 0x92, 0x1d, 0x92, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x92, 0x08, 0x92, 0x52, 0x92, 0x77, 0x92, 0x49, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x92, 0x2a, 0x92, 0x2e, 0x00, 0x00, 0x00, 0x00, 0xb6, 0x07, 0x92, 0x36, 0x00, 0x00, 0x92, 0x0c, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x1b, 0x92, 0x20, 0x92, 0xff,
    0x92, 0xff, 0x92, 0x24, 0x92, 0xff, 0x92, 0xb5, 0x00, 0x00, 0x00, 0x00, 0x92, 0x76, 0x92, 0x7f, 0x00, 0x00, 0x92, 0x17, 0x92, 0xdb, 0x92, 0xc7, 0x92, 0x8f, 0x92, 0xd9, 0x92, 0xbe, 0x92, 0x04, 0x00, 0x00, 0x92, 0xab, 0x92, 0xf7, 0x92, 0x17, 0x00, 0x00, 0x92, 0x1c, 0x92, 0xd9, 0x00, 0x00, 0x92, 0x30, 0x92, 0xe6, 0x92, 0x80, 0x92, 0x80, 0x92, 0x80, 0x92, 0x36, 0x92, 0x20, 0x92, 0xff,
    0x92, 0xff, 0x92, 0x23, 0x92, 0xef, 0x92, 0xcc, 0x92, 0x3b, 0x00, 0x00, 0x92, 0x76, 0x92, 0x7f, 0x00, 0x00, 0x92, 0x96, 0x92, 0x9f, 0x00, 0x00, 0x00, 0x00, 0xb6, 0x05, 0x92, 0xc7, 0x92, 0x66, 0x00, 0x00, 0x92, 0xaa, 0x92, 0xb9, 0x92, 0x98, 0x00, 0x00, 0x92, 0x1c, 0x92, 0xd9, 0x00, 0x00, 0x92, 0x30, 0x92, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x20, 0x92, 0xff,
    0x92, 0xff, 0x92, 0x23, 0x92, 0xef, 0x92, 0x3b, 0x92, 0xcc, 0x00, 0x00, 0x92, 0x76, 0x92, 0x7f, 0x00, 0x00, 0x92, 0xda, 0x92, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x62, 0x92, 0xaa, 0x00, 0x00, 0x92, 0xaa, 0x92, 0x4e, 0x92, 0xe1, 0x92, 0x21, 0x92, 0x1c, 0x92, 0xd9, 0x00, 0x00, 0x92, 0x30, 0x92, 0xd9, 0x92, 0x40, 0x92, 0x40, 0x92, 0x40, 0x92, 0x11, 0x92, 0x20, 0x92, 0xff,
    0x92, 0xff, 0x92, 0x23, 0x92, 0xef, 0x00, 0x00, 0x92, 0xb7, 0x92, 0x50, 0x92, 0x76, 0x92, 0x7f, 0x00, 0x00, 0x92, 0xe9, 0x92, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x4a, 0x92, 0xbc, 0x00, 0x00, 0x92, 0xaa, 0x92, 0x49, 0x92, 0x5d, 0x92, 0xaa, 0x92, 0x1c, 0x92, 0xd9, 0x00, 0x00, 0x92, 0x30, 0x92, 0xe6, 0x92, 0x80, 0x92, 0x80, 0x92, 0x80, 0x92, 0x22, 0x92, 0x20, 0x92, 0xff,
    0x92, 0xff, 0x92, 0x24, 0x92, 0xf0, 0x00, 0x00, 0x92, 0x2d, 0x92, 0xd9, 0x92, 0x77, 0x92, 0x7e, 0x00, 0x00, 0x92, 0xc3, 0x92, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x75, 0x92, 0x94, 0x00, 0x00, 0x92, 0xab, 0x92, 0x4a, 0x92, 0x02, 0x92, 0xd9, 0x92, 0x4e, 0x92, 0xd8, 0x00, 0x00, 0x92, 0x30, 0x92, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x20, 0x92, 0xff,
    0x92, 0xff, 0x92, 0x23, 0x92, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x92, 0xa4, 0x92, 0xd4, 0x92, 0x7c, 0x00, 0x00, 0x92, 0x53, 0x92, 0xc5, 0x92, 0x10, 0x00, 0x00, 0x92, 0x20, 0x92, 0xe0, 0x92, 0x26, 0x00, 0x00, 0x92, 0xa8, 0x92, 0x48, 0x00, 0x00, 0x92, 0x4a, 0x92, 0xd5, 0x92, 0xd8, 0x00, 0x00, 0x92, 0x30, 0x92, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x20, 0x92, 0xff,
    0x92, 0xff, 0x92, 0x24, 0x92, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x92, 0x21, 0x92, 0xfc, 0x92, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x92, 0x5d, 0x92, 0xde, 0x92, 0xcf, 0x92, 0xd6, 0x92, 0x42, 0x00, 0x00, 0x00, 0x00, 0x92, 0xab, 0x92, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x92, 0xc4, 0x92, 0xd9, 0x00, 0x00, 0x92, 0x30, 0x92, 0xf3, 0x92, 0xc0, 0x92, 0xc0, 0x92, 0xc0, 0x92, 0x61, 0x92, 0x20, 0x92, 0xff,
    0x92, 0xff, 0x92, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x02, 0x92, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x20, 0x92, 0xff,
    0x92, 0xff, 0x92, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x2b, 0x92, 0xff,
    0x92, 0xff, 0x92, 0x9f, 0x92, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x10, 0x92, 0xa1, 0x92, 0xda,
    0x92, 0x62, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xbb, 0x92, 0x24,
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
    /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
    0xf0, 0x83, 0x33, 0x10, 0x84, 0xc2, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xc2, 0xf0, 0x83, 0x33,
    0x10, 0x84, 0xe6, 0x10, 0x84, 0xaa, 0x10, 0x84, 0x47, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x47, 0x10, 0x84, 0xab, 0x10, 0x84, 0xe4,
    0x10, 0x84, 0xff, 0xf0, 0x83, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x83, 0x2b, 0x10, 0x84, 0xff,
    0x10, 0x84, 0xff, 0x10, 0x84, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x20, 0x10, 0x84, 0xff,
    0x10, 0x84, 0xff, 0x30, 0x84, 0x21, 0x10, 0x84, 0x40, 0x10, 0x84, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x8c, 0x1d, 0x31, 0x8c, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x08, 0x10, 0x84, 0x52, 0x10, 0x84, 0x77, 0x10, 0x84, 0x49, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x2a, 0x10, 0x84, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb2, 0x94, 0x07, 0x10, 0x84, 0x36, 0x00, 0x00, 0x00, 0x10, 0x84, 0x0c, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x31, 0x8c, 0x1b, 0x10, 0x84, 0x20, 0x10, 0x84, 0xff,
    0x10, 0x84, 0xff, 0x10, 0x84, 0x24, 0x10, 0x84, 0xff, 0x10, 0x84, 0xb5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x76, 0x10, 0x84, 0x7f, 0x00, 0x00, 0x00, 0x31, 0x8c, 0x17, 0x10, 0x84, 0xdb, 0x10, 0x84, 0xc7, 0x10, 0x84, 0x8f, 0x10, 0x84, 0xd9, 0x10, 0x84, 0xbe, 0x10, 0x84, 0x04, 0x00, 0x00, 0x00, 0x10, 0x84, 0xab, 0x10, 0x84, 0xf7, 0x31, 0x8c, 0x17, 0x00, 0x00, 0x00, 0x10, 0x84, 0x1c, 0x10, 0x84, 0xd9, 0x00, 0x00, 0x00, 0x10, 0x84, 0x30, 0x10, 0x84, 0xe6, 0x10, 0x84, 0x80, 0x10, 0x84, 0x80, 0x10, 0x84, 0x80, 0x10, 0x84, 0x36, 0x10, 0x84, 0x20, 0x10, 0x84, 0xff,
    0x10, 0x84, 0xff, 0x30, 0x84, 0x23, 0x10, 0x84, 0xef, 0x10, 0x84, 0xcc, 0x30, 0x84, 0x3b, 0x00, 0x00, 0x00, 0x10, 0x84, 0x76, 0x10, 0x84, 0x7f, 0x00, 0x00, 0x00, 0x10, 0x84, 0x96, 0x10, 0x84, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd3, 0x9c, 0x05, 0x10, 0x84, 0xc7, 0x10, 0x84, 0x66, 0x00, 0x00, 0x00, 0x10, 0x84, 0xaa, 0x10, 0x84, 0xb9, 0x10, 0x84, 0x98, 0x00, 0x00, 0x00, 0x10, 0x84, 0x1c, 0x10, 0x84, 0xd9, 0x00, 0x00, 0x00, 0x10, 0x84, 0x30, 0x10, 0x84, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x20, 0x10, 0x84, 0xff,
    0x10, 0x84, 0xff, 0x30, 0x84, 0x23, 0x10, 0x84, 0xef, 0x30, 0x84, 0x3b, 0x10, 0x84, 0xcc, 0x00, 0x00, 0x00, 0x10, 0x84, 0x76, 0x10, 0x84, 0x7f, 0x00, 0x00, 0x00, 0x10, 0x84, 0xda, 0x10, 0x84, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x62, 0x10, 0x84, 0xaa, 0x00, 0x00, 0x00, 0x10, 0x84, 0xaa, 0x10, 0x84, 0x4e, 0x10, 0x84, 0xe1, 0x30, 0x84, 0x21, 0x10, 0x84, 0x1c, 0x10, 0x84, 0xd9, 0x00, 0x00, 0x00, 0x10, 0x84, 0x30, 0x10, 0x84, 0xd9, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x10, 0x84, 0x40, 0x51, 0x8c, 0x11, 0x10, 0x84, 0x20, 0x10, 0x84, 0xff,
    0x10, 0x84, 0xff, 0x30, 0x84, 0x23, 0x10, 0x84, 0xef, 0x00, 0x00, 0x00, 0x10, 0x84, 0xb7, 0x10, 0x84, 0x50, 0x10, 0x84, 0x76, 0x10, 0x84, 0x7f, 0x00, 0x00, 0x00, 0x10, 0x84, 0xe9, 0x31, 0x8c, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x4a, 0x10, 0x84, 0xbc, 0x00, 0x00, 0x00, 0x10, 0x84, 0xaa, 0x10, 0x84, 0x49, 0x10, 0x84, 0x5d, 0x10, 0x84, 0xaa, 0x10, 0x84, 0x1c, 0x10, 0x84, 0xd9, 0x00, 0x00, 0x00, 0x10, 0x84, 0x30, 0x10, 0x84, 0xe6, 0x10, 0x84, 0x80, 0x10, 0x84, 0x80, 0x10, 0x84, 0x80, 0x10, 0x84, 0x22, 0x10, 0x84, 0x20, 0x10, 0x84, 0xff,
    0x10, 0x84, 0xff, 0x10, 0x84, 0x24, 0x10, 0x84, 0xf0, 0x00, 0x00, 0x00, 0x30, 0x84, 0x2d, 0x10, 0x84, 0xd9, 0x10, 0x84, 0x77, 0x10, 0x84, 0x7e, 0x00, 0x00, 0x00, 0x10, 0x84, 0xc3, 0x10, 0x84, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x75, 0x10, 0x84, 0x94, 0x00, 0x00, 0x00, 0x10, 0x84, 0xab, 0x10, 0x84, 0x4a, 0x10, 0x84, 0x02, 0x10, 0x84, 0xd9, 0x10, 0x84, 0x4e, 0x10, 0x84, 0xd8, 0x00, 0x00, 0x00, 0x10, 0x84, 0x30, 0x10, 0x84, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x20, 0x10, 0x84, 0xff,
    0x10, 0x84, 0xff, 0x30, 0x84, 0x23, 0x10, 0x84, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0xa4, 0x10, 0x84, 0xd4, 0x10, 0x84, 0x7c, 0x00, 0x00, 0x00, 0x10, 0x84, 0x53, 0x10, 0x84, 0xc5, 0x10, 0x84, 0x10, 0x00, 0x00, 0x00, 0x10, 0x84, 0x20, 0x10, 0x84, 0xe0, 0x10, 0x84, 0x26, 0x00, 0x00, 0x00, 0x10, 0x84, 0xa8, 0x10, 0x84, 0x48, 0x00, 0x00, 0x00, 0x10, 0x84, 0x4a, 0x10, 0x84, 0xd5, 0x10, 0x84, 0xd8, 0x00, 0x00, 0x00, 0x10, 0x84, 0x30, 0x10, 0x84, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x20, 0x10, 0x84, 0xff,
    0x10, 0x84, 0xff, 0x10, 0x84, 0x24, 0x10, 0x84, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x84, 0x21, 0x10, 0x84, 0xfc, 0x10, 0x84, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x5d, 0x10, 0x84, 0xde, 0x10, 0x84, 0xcf, 0x10, 0x84, 0xd6, 0x10, 0x84, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0xab, 0x10, 0x84, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0xc4, 0x10, 0x84, 0xd9, 0x00, 0x00, 0x00, 0x10, 0x84, 0x30, 0x10, 0x84, 0xf3, 0x10, 0x84, 0xc0, 0x10, 0x84, 0xc0, 0x10, 0x84, 0xc0, 0x10, 0x84, 0x61, 0x10, 0x84, 0x20, 0x10, 0x84, 0xff,
    0x10, 0x84, 0xff, 0x10, 0x84, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x02, 0x10, 0x84, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x20, 0x10, 0x84, 0xff,
    0x10, 0x84, 0xff, 0xf0, 0x83, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x83, 0x2b, 0x10, 0x84, 0xff,
    0x10, 0x84, 0xff, 0x10, 0x84, 0x9f, 0xcf, 0x7b, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x10, 0x10, 0x84, 0xa1, 0x10, 0x84, 0xda,
    0x10, 0x84, 0x62, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xbb, 0x10, 0x84, 0x24,
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
    /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
    0x83, 0xf0, 0x33, 0x84, 0x10, 0xc2, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xc2, 0x83, 0xf0, 0x33,
    0x84, 0x10, 0xe6, 0x84, 0x10, 0xaa, 0x84, 0x10, 0x47, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x47, 0x84, 0x10, 0xab, 0x84, 0x10, 0xe4,
    0x84, 0x10, 0xff, 0x83, 0xf0, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xf0, 0x2b, 0x84, 0x10, 0xff,
    0x84, 0x10, 0xff, 0x84, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x20, 0x84, 0x10, 0xff,
    0x84, 0x10, 0xff, 0x84, 0x30, 0x21, 0x84, 0x10, 0x40, 0x84, 0x10, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8c, 0x31, 0x1d, 0x8c, 0x31, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x08, 0x84, 0x10, 0x52, 0x84, 0x10, 0x77, 0x84, 0x10, 0x49, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x2a, 0x84, 0x10, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0xb2, 0x07, 0x84, 0x10, 0x36, 0x00, 0x00, 0x00, 0x84, 0x10, 0x0c, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x8c, 0x31, 0x1b, 0x84, 0x10, 0x20, 0x84, 0x10, 0xff,
    0x84, 0x10, 0xff, 0x84, 0x10, 0x24, 0x84, 0x10, 0xff, 0x84, 0x10, 0xb5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x76, 0x84, 0x10, 0x7f, 0x00, 0x00, 0x00, 0x8c, 0x31, 0x17, 0x84, 0x10, 0xdb, 0x84, 0x10, 0xc7, 0x84, 0x10, 0x8f, 0x84, 0x10, 0xd9, 0x84, 0x10, 0xbe, 0x84, 0x10, 0x04, 0x00, 0x00, 0x00, 0x84, 0x10, 0xab, 0x84, 0x10, 0xf7, 0x8c, 0x31, 0x17, 0x00, 0x00, 0x00, 0x84, 0x10, 0x1c, 0x84, 0x10, 0xd9, 0x00, 0x00, 0x00, 0x84, 0x10, 0x30, 0x84, 0x10, 0xe6, 0x84, 0x10, 0x80, 0x84, 0x10, 0x80, 0x84, 0x10, 0x80, 0x84, 0x10, 0x36, 0x84, 0x10, 0x20, 0x84, 0x10, 0xff,
    0x84, 0x10, 0xff, 0x84, 0x30, 0x23, 0x84, 0x10, 0xef, 0x84, 0x10, 0xcc, 0x84, 0x30, 0x3b, 0x00, 0x00, 0x00, 0x84, 0x10, 0x76, 0x84, 0x10, 0x7f, 0x00, 0x00, 0x00, 0x84, 0x10, 0x96, 0x84, 0x10, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0xd3, 0x05, 0x84, 0x10, 0xc7, 0x84, 0x10, 0x66, 0x00, 0x00, 0x00, 0x84, 0x10, 0xaa, 0x84, 0x10, 0xb9, 0x84, 0x10, 0x98, 0x00, 0x00, 0x00, 0x84, 0x10, 0x1c, 0x84, 0x10, 0xd9, 0x00, 0x00, 0x00, 0x84, 0x10, 0x30, 0x84, 0x10, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x20, 0x84, 0x10, 0xff,
    0x84, 0x10, 0xff, 0x84, 0x30, 0x23, 0x84, 0x10, 0xef, 0x84, 0x30, 0x3b, 0x84, 0x10, 0xcc, 0x00, 0x00, 0x00, 0x84, 0x10, 0x76, 0x84, 0x10, 0x7f, 0x00, 0x00, 0x00, 0x84, 0x10, 0xda, 0x84, 0x10, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x62, 0x84, 0x10, 0xaa, 0x00, 0x00, 0x00, 0x84, 0x10, 0xaa, 0x84, 0x10, 0x4e, 0x84, 0x10, 0xe1, 0x84, 0x30, 0x21, 0x84, 0x10, 0x1c, 0x84, 0x10, 0xd9, 0x00, 0x00, 0x00, 0x84, 0x10, 0x30, 0x84, 0x10, 0xd9, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x84, 0x10, 0x40, 0x8c, 0x51, 0x11, 0x84, 0x10, 0x20, 0x84, 0x10, 0xff,
    0x84, 0x10, 0xff, 0x84, 0x30, 0x23, 0x84, 0x10, 0xef, 0x00, 0x00, 0x00, 0x84, 0x10, 0xb7, 0x84, 0x10, 0x50, 0x84, 0x10, 0x76, 0x84, 0x10, 0x7f, 0x00, 0x00, 0x00, 0x84, 0x10, 0xe9, 0x8c, 0x31, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x4a, 0x84, 0x10, 0xbc, 0x00, 0x00, 0x00, 0x84, 0x10, 0xaa, 0x84, 0x10, 0x49, 0x84, 0x10, 0x5d, 0x84, 0x10, 0xaa, 0x84, 0x10, 0x1c, 0x84, 0x10, 0xd9, 0x00, 0x00, 0x00, 0x84, 0x10, 0x30, 0x84, 0x10, 0xe6, 0x84, 0x10, 0x80, 0x84, 0x10, 0x80, 0x84, 0x10, 0x80, 0x84, 0x10, 0x22, 0x84, 0x10, 0x20, 0x84, 0x10, 0xff,
    0x84, 0x10, 0xff, 0x84, 0x10, 0x24, 0x84, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x84, 0x30, 0x2d, 0x84, 0x10, 0xd9, 0x84, 0x10, 0x77, 0x84, 0x10, 0x7e, 0x00, 0x00, 0x00, 0x84, 0x10, 0xc3, 0x84, 0x10, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x75, 0x84, 0x10, 0x94, 0x00, 0x00, 0x00, 0x84, 0x10, 0xab, 0x84, 0x10, 0x4a, 0x84, 0x10, 0x02, 0x84, 0x10, 0xd9, 0x84, 0x10, 0x4e, 0x84, 0x10, 0xd8, 0x00, 0x00, 0x00, 0x84, 0x10, 0x30, 0x84, 0x10, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x20, 0x84, 0x10, 0xff,
    0x84, 0x10, 0xff, 0x84, 0x30, 0x23, 0x84, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0xa4, 0x84, 0x10, 0xd4, 0x84, 0x10, 0x7c, 0x00, 0x00, 0x00, 0x84, 0x10, 0x53, 0x84, 0x10, 0xc5, 0x84, 0x10, 0x10, 0x00, 0x00, 0x00, 0x84, 0x10, 0x20, 0x84, 0x10, 0xe0, 0x84, 0x10, 0x26, 0x00, 0x00, 0x00, 0x84, 0x10, 0xa8, 0x84, 0x10, 0x48, 0x00, 0x00, 0x00, 0x84, 0x10, 0x4a, 0x84, 0x10, 0xd5, 0x84, 0x10, 0xd8, 0x00, 0x00, 0x00, 0x84, 0x10, 0x30, 0x84, 0x10, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x20, 0x84, 0x10, 0xff,
    0x84, 0x10, 0xff, 0x84, 0x10, 0x24, 0x84, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x30, 0x21, 0x84, 0x10, 0xfc, 0x84, 0x10, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x5d, 0x84, 0x10, 0xde, 0x84, 0x10, 0xcf, 0x84, 0x10, 0xd6, 0x84, 0x10, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0xab, 0x84, 0x10, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0xc4, 0x84, 0x10, 0xd9, 0x00, 0x00, 0x00, 0x84, 0x10, 0x30, 0x84, 0x10, 0xf3, 0x84, 0x10, 0xc0, 0x84, 0x10, 0xc0, 0x84, 0x10, 0xc0, 0x84, 0x10, 0x61, 0x84, 0x10, 0x20, 0x84, 0x10, 0xff,
    0x84, 0x10, 0xff, 0x84, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x02, 0x84, 0x10, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x20, 0x84, 0x10, 0xff,
    0x84, 0x10, 0xff, 0x83, 0xf0, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xf0, 0x2b, 0x84, 0x10, 0xff,
    0x84, 0x10, 0xff, 0x84, 0x10, 0x9f, 0x7b, 0xcf, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x10, 0x84, 0x10, 0xa1, 0x84, 0x10, 0xda,
    0x84, 0x10, 0x62, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xbb, 0x84, 0x10, 0x24,
#endif
#if LV_COLOR_DEPTH == 32
    0x7d, 0x7d, 0x7d, 0x33, 0x7f, 0x7f, 0x7f, 0xc2, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x7f, 0x7f, 0x7f, 0xc2, 0x7d, 0x7d, 0x7d, 0x33,
    0x7f, 0x7f, 0x7f, 0xe6, 0x80, 0x80, 0x80, 0xaa, 0x7e, 0x7e, 0x7e, 0x47, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7e, 0x7e, 0x7e, 0x47, 0x7f, 0x7f, 0x7f, 0xab, 0x7f, 0x7f, 0x7f, 0xe4,
    0x80, 0x80, 0x80, 0xff, 0x7d, 0x7d, 0x7d, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7d, 0x7d, 0x7d, 0x2b, 0x80, 0x80, 0x80, 0xff,
    0x80, 0x80, 0x80, 0xff, 0x7f, 0x7f, 0x7f, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x20, 0x80, 0x80, 0x80, 0xff,
    0x80, 0x80, 0x80, 0xff, 0x83, 0x83, 0x83, 0x21, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x84, 0x84, 0x1d, 0x84, 0x84, 0x84, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x08, 0x7f, 0x7f, 0x7f, 0x52, 0x81, 0x81, 0x81, 0x77, 0x81, 0x81, 0x81, 0x49, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x2a, 0x7f, 0x7f, 0x7f, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x92, 0x92, 0x07, 0x7f, 0x7f, 0x7f, 0x36, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x0c, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x84, 0x84, 0x84, 0x1b, 0x7f, 0x7f, 0x7f, 0x20, 0x80, 0x80, 0x80, 0xff,
    0x80, 0x80, 0x80, 0xff, 0x7f, 0x7f, 0x7f, 0x24, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xb5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x76, 0x81, 0x81, 0x81, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x85, 0x85, 0x85, 0x17, 0x80, 0x80, 0x80, 0xdb, 0x80, 0x80, 0x80, 0xc7, 0x80, 0x80, 0x80, 0x8f, 0x80, 0x80, 0x80, 0xd9, 0x80, 0x80, 0x80, 0xbe, 0x7f, 0x7f, 0x7f, 0x04, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xab, 0x80, 0x80, 0x80, 0xf7, 0x85, 0x85, 0x85, 0x17, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x1c, 0x80, 0x80, 0x80, 0xd9, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x30, 0x7f, 0x7f, 0x7f, 0xe6, 0x7f, 0x7f, 0x7f, 0x80, 0x7f, 0x7f, 0x7f, 0x80, 0x7f, 0x7f, 0x7f, 0x80, 0x7f, 0x7f, 0x7f, 0x36, 0x7f, 0x7f, 0x7f, 0x20, 0x80, 0x80, 0x80, 0xff,
    0x80, 0x80, 0x80, 0xff, 0x83, 0x83, 0x83, 0x23, 0x80, 0x80, 0x80, 0xef, 0x7f, 0x7f, 0x7f, 0xcc, 0x82, 0x82, 0x82, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x76, 0x81, 0x81, 0x81, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x96, 0x80, 0x80, 0x80, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x99, 0x99, 0x99, 0x05, 0x80, 0x80, 0x80, 0xc7, 0x7f, 0x7f, 0x7f, 0x66, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xaa, 0x80, 0x80, 0x80, 0xb9, 0x7f, 0x7f, 0x7f, 0x98, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x1c, 0x80, 0x80, 0x80, 0xd9, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x30, 0x7f, 0x7f, 0x7f, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x20, 0x80, 0x80, 0x80, 0xff,
    0x80, 0x80, 0x80, 0xff, 0x83, 0x83, 0x83, 0x23, 0x80, 0x80, 0x80, 0xef, 0x82, 0x82, 0x82, 0x3b, 0x7f, 0x7f, 0x7f, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x76, 0x81, 0x81, 0x81, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0xda, 0x7f, 0x7f, 0x7f, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x62, 0x80, 0x80, 0x80, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xaa, 0x7f, 0x7f, 0x7f, 0x4e, 0x80, 0x80, 0x80, 0xe1, 0x83, 0x83, 0x83, 0x21, 0x7f, 0x7f, 0x7f, 0x1c, 0x80, 0x80, 0x80, 0xd9, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x30, 0x80, 0x80, 0x80, 0xd9, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x40, 0x87, 0x87, 0x87, 0x11, 0x7f, 0x7f, 0x7f, 0x20, 0x80, 0x80, 0x80, 0xff,
    0x80, 0x80, 0x80, 0xff, 0x83, 0x83, 0x83, 0x23, 0x80, 0x80, 0x80, 0xef, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xb7, 0x80, 0x80, 0x80, 0x50, 0x7f, 0x7f, 0x7f, 0x76, 0x81, 0x81, 0x81, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xe9, 0x84, 0x84, 0x84, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x4a, 0x80, 0x80, 0x80, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xaa, 0x81, 0x81, 0x81, 0x49, 0x81, 0x81, 0x81, 0x5d, 0x80, 0x80, 0x80, 0xaa, 0x7f, 0x7f, 0x7f, 0x1c, 0x80, 0x80, 0x80, 0xd9, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x30, 0x7f, 0x7f, 0x7f, 0xe6, 0x7f, 0x7f, 0x7f, 0x80, 0x7f, 0x7f, 0x7f, 0x80, 0x7f, 0x7f, 0x7f, 0x80, 0x7f, 0x7f, 0x7f, 0x22, 0x7f, 0x7f, 0x7f, 0x20, 0x80, 0x80, 0x80, 0xff,
    0x80, 0x80, 0x80, 0xff, 0x7f, 0x7f, 0x7f, 0x24, 0x7f, 0x7f, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x82, 0x82, 0x2d, 0x80, 0x80, 0x80, 0xd9, 0x81, 0x81, 0x81, 0x77, 0x7f, 0x7f, 0x7f, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xc3, 0x7f, 0x7f, 0x7f, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x81, 0x81, 0x75, 0x7f, 0x7f, 0x7f, 0x94, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xab, 0x7f, 0x7f, 0x7f, 0x4a, 0x7f, 0x7f, 0x7f, 0x02, 0x80, 0x80, 0x80, 0xd9, 0x7f, 0x7f, 0x7f, 0x4e, 0x7f, 0x7f, 0x7f, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x30, 0x7f, 0x7f, 0x7f, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x20, 0x80, 0x80, 0x80, 0xff,
    0x80, 0x80, 0x80, 0xff, 0x83, 0x83, 0x83, 0x23, 0x7f, 0x7f, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0xa4, 0x7f, 0x7f, 0x7f, 0xd4, 0x80, 0x80, 0x80, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x81, 0x81, 0x81, 0x53, 0x80, 0x80, 0x80, 0xc5, 0x7f, 0x7f, 0x7f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x20, 0x7f, 0x7f, 0x7f, 0xe0, 0x7f, 0x7f, 0x7f, 0x26, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0xa8, 0x7f, 0x7f, 0x7f, 0x48, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x4a, 0x80, 0x80, 0x80, 0xd5, 0x7f, 0x7f, 0x7f, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x30, 0x7f, 0x7f, 0x7f, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x20, 0x80, 0x80, 0x80, 0xff,
    0x80, 0x80, 0x80, 0xff, 0x7f, 0x7f, 0x7f, 0x24, 0x7f, 0x7f, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0x83, 0x83, 0x21, 0x7f, 0x7f, 0x7f, 0xfc, 0x81, 0x81, 0x81, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x81, 0x81, 0x5d, 0x7f, 0x7f, 0x7f, 0xde, 0x80, 0x80, 0x80, 0xcf, 0x7f, 0x7f, 0x7f, 0xd6, 0x80, 0x80, 0x80, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xab, 0x7f, 0x7f, 0x7f, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0xc4, 0x80, 0x80, 0x80, 0xd9, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x30, 0x80, 0x80, 0x80, 0xf3, 0x7f, 0x7f, 0x7f, 0xc0, 0x7f, 0x7f, 0x7f, 0xc0, 0x7f, 0x7f, 0x7f, 0xc0, 0x81, 0x81, 0x81, 0x61, 0x7f, 0x7f, 0x7f, 0x20, 0x80, 0x80, 0x80, 0xff,
    0x80, 0x80, 0x80, 0xff, 0x7f, 0x7f, 0x7f, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x02, 0x80, 0x80, 0x80, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x20, 0x80, 0x80, 0x80, 0xff,
    0x80, 0x80, 0x80, 0xff, 0x7d, 0x7d, 0x7d, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7d, 0x7d, 0x7d, 0x2b, 0x80, 0x80, 0x80, 0xff,
    0x80, 0x80, 0x80, 0xff, 0x7f, 0x7f, 0x7f, 0x9f, 0x77, 0x77, 0x77, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x10, 0x7f, 0x7f, 0x7f, 0xa1, 0x7f, 0x7f, 0x7f, 0xda,
    0x7f, 0x7f, 0x7f, 0x62, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0xff, 0x7f, 0x7f, 0x7f, 0xbb, 0x7f, 0x7f, 0x7f, 0x24,
#endif
};

const lv_img_dsc_t wifi_none =
{
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 32,
    .header.h = 16,
    .data_size = 512 * LV_IMG_PX_SIZE_ALPHA_BYTE,
    .data = wifi_none_map,
};
