#include "spank.h"

#ifdef RGB_MATRIX_ENABLE
/* clang-format off */
led_config_t g_led_config = {
    /* Key Matrix to LED Index */
    {
        {9,10,11,12,13,14},
        {15,16,17,18,19,20},
        {21,22,23,24,25,26},
        {27,28,29,30,31,32},
        {33,34,35,36,37,38},
        {39,40,41,42,43,44},
        {45,46,47,48,49,50},
        {51,52,53,54,55,56}
    },
    /* LED Index to Physical Position */
    {
        {0, 0},  {44, 0},  {88, 0},  {132, 0},  {176, 0},  {220, 0},
        {0, 9},  {44, 9},  {88, 9},  {132, 9},  {176, 9},  {220, 9},
        {0, 18}, {44, 18}, {88, 18}, {132, 18}, {176, 18}, {220, 18},
        {0, 27}, {44, 27}, {88, 27}, {132, 27}, {176, 27}, {220, 27},
        {0, 36}, {44, 36}, {88, 36}, {132, 36}, {176, 36}, {220, 36},
        {0, 45}, {44, 45}, {88, 45}, {132, 45}, {176, 45}, {220, 45},
        {0, 54}, {44, 54}, {88, 54}, {132, 54}, {176, 54}, {220, 54},
        {0, 63}, {44, 63}, {88, 63}, {132, 63}, {176, 63}, {220, 63}
    },
    /* LED Index to Flag */
    {
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT
    }
};
/* clang-format on */
#endif /* RGB_MATRIX_ENABLE */

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
    /** rgblight_set_effect_range(0, 9); */
}
