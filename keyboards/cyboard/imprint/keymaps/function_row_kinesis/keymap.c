/* Copyright 2023 Cyboard LLC (@Cyboard-DigitalTailor)
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_function_row_kinesis(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                                   KC_F6,   KC_F7,   KC_F8,  KC_F9,     KC_F10,   KC_F11,
        KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                                    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,     KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                                    KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,     KC_BSLS,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                                    KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                                    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,  KC_RSFT,
                 KC_UP,   KC_DOWN, KC_LGUI, KC_LALT,    KC_LGUI,  KC_ENT, KC_DEL,      KC_BSPC,  KC_SPC,   MO(1),      KC_LBRC,  KC_RBRC, KC_LEFT, KC_RIGHT,
//               1,6      1,5      1,4      1,3         1,1       1,0     0,0          7,0       8,0       8,1         8,3       8,4      8,5      8,6
                                                        KC_GRAVE, KC_ESC, _______,     _______, KC_CAPS,   KC_APP
//                                                      1,2       0,2    0,1           7,1      7,2        8,2
    )
};
