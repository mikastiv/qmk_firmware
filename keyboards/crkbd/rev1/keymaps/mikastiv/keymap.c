#include QMK_KEYBOARD_H

// enum custom_keycodes {
//   DEFAULT = SAFE_RANGE,
//   LOWER,
//   RAISE,
//   FUNC,
//   GLOWER
// };

enum combos {
  GAME,
  JK_ESC
};

enum custom_layers {
  QWERTY_DEFAULT,
  NORMAN_DEFAULT,
  LOWER,
  RAISE,
  FUNC,
  GAMING,
  GAMING_LOWER
};

const uint16_t PROGMEM gaming_combo[] = {KC_Y, KC_DEL, COMBO_END};
const uint16_t PROGMEM jk_esc_combo[] = {KC_J, KC_K, COMBO_END};

combo_t key_combos[] = {
  [GAME] = COMBO(gaming_combo, TO(GAMING)),
  [JK_ESC] = COMBO(jk_esc_combo, KC_ESC),
};

#define OSL_FUN  OSL(FUNC)

#define A_GUI    LGUI_T(KC_A)
#define SCLN_GUI LGUI_T(KC_SCLN)
#define H_GUI    LGUI_T(KC_H)
#define S_ALT    LALT_T(KC_S)
#define O_ALT    LALT_T(KC_O)
#define L_ALT    LALT_T(KC_L)
#define D_CTL    LCTL_T(KC_D)
#define E_CTL    LCTL_T(KC_E)
#define I_CTL    LCTL_T(KC_I)
#define K_CTL    LCTL_T(KC_K)
#define F_SFT    LSFT_T(KC_F)
#define T_SFT    LSFT_T(KC_T)
#define N_SFT    LSFT_T(KC_N)
#define J_SFT    LSFT_T(KC_J)

#define LOW_TAB LT(LOWER, KC_TAB)
#define RSE MO(RAISE)
#define TO_DEF_Q TO(QWERTY_DEFAULT)
#define TO_DEF_N TO(NORMAN_DEFAULT)

// For GAMING layer
#define MO_LOW MO(GAMING_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [QWERTY_DEFAULT] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_DQUO,   A_GUI,   S_ALT,   D_CTL,   F_SFT,    KC_G,                         KC_H,   J_SFT,   K_CTL,   L_ALT,SCLN_GUI, KC_UNDS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_QUOT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, OSL_FUN,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_ESC, LOW_TAB,  KC_SPC,    KC_BSPC,     RSE,  KC_ENT
                                      //`--------------------------'  `--------------------------'
  ),

  [NORMAN_DEFAULT] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_D,    KC_F,    KC_K,                         KC_J,    KC_U,    KC_R,    KC_L, KC_SCLN,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_DQUO,   A_GUI,   S_ALT,   E_CTL,   T_SFT,    KC_G,                         KC_Y,   N_SFT,   I_CTL,   O_ALT,   H_GUI, KC_UNDS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_QUOT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_P,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, OSL_FUN,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_ESC, LOW_TAB,  KC_SPC,    KC_BSPC,     RSE,  KC_ENT
                                      //`--------------------------'  `--------------------------'
  ),

  [LOWER] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_DLR, KC_EXLM, KC_PLUS, KC_MINS,  KC_EQL,   KC_AT,                      KC_PIPE, KC_LPRN, KC_RPRN, KC_ASTR, KC_AMPR, KC_HASH,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_CIRC, KC_PERC,   KC_LT,   KC_GT, KC_LCBR, KC_LBRC,                      KC_RBRC, KC_RCBR, KC_COMM,  KC_DOT, KC_BSLS, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, XXXXXXX, _______
                                      //`--------------------------'  `--------------------------'
    ),

  [RAISE] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_PSCR, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, XXXXXXX, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [FUNC] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,TO_DEF_Q,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,  KC_F11,  KC_F12, XXXXXXX, XXXXXXX, XXXXXXX,                      RGB_HUI, RGB_SAI, RGB_VAI, RGB_MOD, RGB_TOG,TO_DEF_N,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      RGB_HUD, RGB_SAD, RGB_VAD,RGB_RMOD, QK_BOOT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [GAMING] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,TO_DEF_Q,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LALT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,TO_DEF_N,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL,  MO_LOW,  KC_SPC,    KC_BSPC, KC_LGUI,  KC_ENT
                                      //`--------------------------'  `--------------------------'
  ),

  [GAMING_LOWER] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_PLUS, KC_MINS,  KC_EQL, KC_LCBR, KC_LBRC,                      KC_RBRC, KC_RCBR, KC_COMM,  KC_DOT, KC_BSLS, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, XXXXXXX, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
    )
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case A_GUI:
        case SCLN_GUI:
        case H_GUI:
        case S_ALT:
        case O_ALT:
        case L_ALT:
        case D_CTL:
        case E_CTL:
        case I_CTL:
        case K_CTL:
        case F_SFT:
        case T_SFT:
        case N_SFT:
        case J_SFT:
        case LOW_TAB:
            return TAPPING_TERM_THUMB;
      default:
            return TAPPING_TERM;
    }
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOW_TAB:
            return QUICK_TAP_TERM_THUMB;
        default:
            return QUICK_TAP_TERM;
    }
}

#define CUSTOM_CYAN        150, 255, rgb_matrix_get_val()
#define CUSTOM_ORANGE       15, 255, rgb_matrix_get_val()

static void init_rgb_matrix(void) {
#ifdef RGB_MATRIX_ENABLE
    rgb_matrix_enable_noeeprom();
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(CUSTOM_CYAN);
#endif
}

void suspend_wakeup_init_user(void) {
    layer_state_set(QWERTY_DEFAULT);
    init_rgb_matrix();
}

#ifdef RGB_MATRIX_ENABLE
void keyboard_post_init_user(void) {
    init_rgb_matrix();
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch(get_highest_layer(state)) {
        case GAMING:
        case GAMING_LOWER:
            rgb_matrix_sethsv_noeeprom(CUSTOM_ORANGE);
            break;
        default:
            rgb_matrix_sethsv_noeeprom(CUSTOM_CYAN);
            break;
    }
    return state;
}
#endif

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_180;
    }

    return rotation;
}

static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,192,192,224, 96, 48, 16,  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,248,252,254,207,199,135,135,135,  7,  7,  7, 15, 31,254,252,248,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0,  7,  7,  7,  7,  7,  7,135,199,231,247,127, 63, 31, 15,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,255,255,255, 15, 15,  7,  3,  9, 12, 14, 15, 15, 15, 15,143,207,239,255,255,255,127, 63, 31, 15,  7,  3,  9, 12, 14, 15,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 28, 60,124,240,224,224,224,224,224,224,224,240,248,127, 63, 31,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0,224,240,248,252,254,239,231,227,225,224,224,224,224,224,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,255,255,255,240,112, 48,144,192,224,240,248,252,254,255,255,255,247,243,241,240,240,240,240,112, 48,144,192,224,240,240,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  8, 12,  6,  7,  3,  3,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}

static void render_layer_state(void) {
    // Host Keyboard Layer Status
    oled_write_ln_P(PSTR(""), false);
    oled_write_P(PSTR("Layer: "), false);

    const char *msg;
    switch (get_highest_layer(layer_state)) {
        case QWERTY_DEFAULT:
            msg = PSTR("Qwerty");
            break;
        case NORMAN_DEFAULT:
            msg = PSTR("Norman");
            break;
        case LOWER:
            msg = PSTR("Lower");
            break;
        case RAISE:
            msg = PSTR("Raise");
            break;
        case FUNC:
            msg = PSTR("Function");
            break;
        case GAMING:
            msg = PSTR("Gaming");
            break;
        case GAMING_LOWER:
            msg = PSTR("Gaming Lower");
            break;
        default:
            msg = PSTR("Undef");
            break;
    }

    oled_write_ln_P(msg, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_layer_state();
    } else {
        render_logo();
        oled_scroll_left();
    }

    return false;
}
#endif
