#pragma once

/* Select hand configuration */

//#define MASTER_LEFT
#define MASTER_RIGHT

// timing for auto repeat keys
#define QUICK_TAP_TERM 200
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

#ifdef RGB_MATRIX_ENABLE
// #   define SPLIT_LAYER_STATE_ENABLE
// #   define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
// #   define RGB_MATRIX_TIMEOUT 30000
// #   define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash. 
#    define RGB_MATRIX_HUE_STEP 8
#    define RGB_MATRIX_SAT_STEP 8
#    define RGB_MATRIX_VAL_STEP 8
#    define RGB_MATRIX_SPD_STEP 10

// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
#    define ENABLE_RGB_MATRIX_SOLID_COLOR
#endif

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
