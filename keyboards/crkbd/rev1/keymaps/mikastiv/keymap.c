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
                                   LCTL_T(KC_ESC),   MO(2),  KC_SPC,        KC_RSFT,   MO(1),  KC_ENT
                                      //`--------------------------'      `--------------------------'
  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                        ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                            KC_6,     KC_7,    KC_8,    KC_9,    KC_0,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LALT, XXXXXXX,  KC_GRV, KC_QUOT, KC_DQUO, XXXXXXX,                          KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_LGUI, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          KC_HOME, KC_PGUP, KC_PGDN,  KC_END, KC_PSCR,   TO(4),
  //|--------+--------+--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------+--------+--------|
                                  LCTL_T(KC_ESC),    MO(3),  KC_SPC,        KC_RSFT, _______,  KC_ENT
                                      //`--------------------------'      `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                        ,-----------------------------------------------------.
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                          KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_CIRC,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LALT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          KC_MINS,  KC_EQL, KC_LCBR, KC_RCBR, KC_BSLS, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          KC_TILD, KC_PLUS, KC_LBRC, KC_RBRC, KC_PIPE, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------+--------+--------|
                                   LCTL_T(KC_ESC), _______,  KC_SPC,        KC_RSFT,   MO(3),  KC_ENT
                                      //`--------------------------'      `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                        ,-----------------------------------------------------.
       KC_TAB,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                          RGB_HUI, RGB_SAI, RGB_VAI, RGB_MOD, XXXXXXX,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LALT,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                          RGB_HUD, RGB_SAD, RGB_VAD,RGB_RMOD, RGB_TOG, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LSFT,  KC_F11,  KC_F12, XXXXXXX, XXXXXXX, XXXXXXX,                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------+--------+--------|
                                   LCTL_T(KC_ESC), _______,  KC_SPC,        KC_RSFT, _______,  KC_ENT
                                      //`--------------------------'      `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                        ,-----------------------------------------------------.
       KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,LGUI(KC_G),                           KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   TO(0),
  //|--------+--------+--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL, KC_LALT,  KC_SPC,        KC_RSFT,   MO(1),  KC_ENT
                                      //`--------------------------'      `--------------------------'
  )
};
