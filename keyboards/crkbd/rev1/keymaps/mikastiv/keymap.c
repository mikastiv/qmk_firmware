/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                        ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LALT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_UNDS,
  //|--------+--------+--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL,   MO(2),  KC_SPC,        KC_RSFT,   MO(1), RCTL_T(KC_ENT)
                                      //`--------------------------'      `--------------------------'
  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                        ,-----------------------------------------------------.
       KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                            KC_6,     KC_7,    KC_8,    KC_9,    KC_0,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LALT, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, XXXXXXX,                          KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_LGUI, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR,   TO(3),                          KC_HOME, KC_PGUP, KC_PGDN,  KC_END, KC_PSCR, KC_UNDS,
  //|--------+--------+--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL, XXXXXXX,  KC_SPC,        KC_RSFT, _______, RCTL_T(KC_ENT)
                                      //`--------------------------'      `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                        ,-----------------------------------------------------.
       KC_ESC, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                          KC_CIRC, KC_AMPR, KC_ASTR, KC_TILD, XXXXXXX,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LALT, XXXXXXX, XXXXXXX, LGUI(KC_D), XXXXXXX, LGUI(KC_L),                    KC_MINS,  KC_EQL, KC_DQUO, KC_QUOT,  KC_GRV, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   TO(4),                          XXXXXXX, KC_PLUS, KC_PIPE, XXXXXXX, KC_BSLS, KC_UNDS,
  //|--------+--------+--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL, _______,  KC_SPC,        KC_RSFT, XXXXXXX, RCTL_T(KC_ENT)
                                      //`--------------------------'      `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                        ,-----------------------------------------------------.
       KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                          RGB_HUI, RGB_SAI, RGB_VAI, RGB_MOD, XXXXXXX,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LALT,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                          RGB_HUD, RGB_SAD, RGB_VAD,RGB_RMOD, RGB_TOG, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LSFT,  KC_F11,  KC_F12, XXXXXXX, XXXXXXX,   TO(0),                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS,
  //|--------+--------+--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL, _______,  KC_SPC,        KC_RSFT, _______, RCTL_T(KC_ENT)
                                      //`--------------------------'      `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                        ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LALT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_UNDS,
  //|--------+--------+--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------+--------+--------|
                                            MO(5), KC_LCTL,  KC_SPC,        KC_RSFT,   MO(1),  KC_ENT
                                      //`--------------------------'      `--------------------------'
  ),

    [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                        ,-----------------------------------------------------.
       KC_TAB, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LGUI(KC_G),                         KC_6,     KC_7,    KC_8,    KC_9,    KC_0,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LALT,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_LGUI, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
       KC_ESC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   TO(0),                          KC_HOME, KC_PGUP, KC_PGDN,  KC_END, KC_PSCR, KC_UNDS,
  //|--------+--------+--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------+--------+--------|
                                          _______, KC_LCTL,  KC_SPC,        KC_RSFT, _______,  KC_ENT
                                      //`--------------------------'      `--------------------------'
  ),
};
