#pragma once

// select hand configuration

//#define MASTER_LEFT
#define MASTER_RIGHT

// timing for auto repeat keys
#define QUICK_TAP_TERM_PER_KEY
#define QUICK_TAP_TERM_MODS 0

// this determines what is a tap and what is a hold
#define TAPPING_TERM_PER_KEY
#define TAPPING_TERM 175
#define TAPPING_TERM_THUMB 125

// this mode selects the hold action in more cases
// #define HOLD_ON_OTHER_KEY_PRESS
// #define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
// immediately select the hold action when another key is tapped
#define PERMISSIVE_HOLD
#define PERMISSIVE_HOLD_PER_KEY

// combo timeout
#define COMBO_TERM 40

// tapping this number of times holds the key until tapped once again.
#define ONESHOT_TAP_TOGGLE 3
// time (in ms) before the one shot key is released
#define ONESHOT_TIMEOUT 2000

#ifdef RGB_MATRIX_ENABLE
# define RGB_MATRIX_SLEEP // turn off effects when suspended
# define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash. 

// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
# define ENABLE_RGB_MATRIX_SOLID_COLOR
#endif
