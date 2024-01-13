#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

//#define MASTER_LEFT
#define MASTER_RIGHT

// timing for auto repeat keys
#define QUICK_TAP_TERM 100
#define QUICK_TAP_TERM_PER_KEY

#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY
// used for Tapping Term on thumb keys
#define TAPPING_TERM_THUMB 125

#define HOLD_ON_OTHER_KEY_PRESS
#define PERMISSIVE_HOLD

#define COMBO_COUNT 3
// Set the COMBO_TERM so low that I won't type the keys one after each other during normal typing.
// They would have be held together intentionally to trigger this.
#define COMBO_TERM 40

#define ONESHOT_TAP_TOGGLE 3  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 2000  /* Time (in ms) before the one shot key is released */

// #define RGBLIGHT_SLEEP
// #define RGBLIGHT_TIMEOUT 60000

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif
