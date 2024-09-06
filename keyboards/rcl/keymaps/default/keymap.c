// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_uk.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *
     *    LAYER 0
     *
     *      0    1    2   3   4   5   6   7   8   9  10  11   12     13   14    15
     *    ┌───┬─────┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┬─────┬─────┬─────┐
     *  0 │DEL│  `  │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │  -  │  =  │     │BACK │
     *    ├───┼─────┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼─────┼─────┼─────┼─────┤
     *  1 │M1 │ TAB │   │ / │ , │ . │ p │ y │ f │ g │ c │ r │  l  │  [  │  ]  │     │
     *    ├───┼─────┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼─────┼─────┼─────┼─────┤
     *  2 │M2 │CTRL │   │ a │ o │ e │ u │ i │ d │ h │ t │ n │  s  │  '  │  #  │ENTER│
     *    ├───┼─────┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼─────┼─────┼─────┼─────┤
     *  3 │M3 │SHIFT│ \ │ ; │ q │ j │ k │ x │ b │ m │ w │ v │  z  │     │SHIFT│     │
     *    ├───┼─────┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼─────┼─────┼─────┼─────┤
     *  4 │M4 │ FN  │SYS│ALT│   │S1 │   │S2 │   │S3 │   │ ? │LEFT │DOWN │ UP  │RIGHT│
     *    └───┴─────┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴─────┴─────┴─────┴─────┘
     *
     *    LAYER 1
     *
     *      0    1    2   3   4   5   6   7   8   9  10  11   12     13   14    15
     *    ┌───┬─────┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┬─────┬─────┬─────┐
     *  0 │   │     │F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│ F11 │ F12 │     │     │
     *    ├───┼─────┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼─────┼─────┼─────┼─────┤
     *  1 │   │     │   │   │   │   │   │   │   │   │   │   │     │     │     │     │
     *    ├───┼─────┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼─────┼─────┼─────┼─────┤
     *  2 │DFU│CAPS │   │   │   │   │   │   │   │   │   │   │     │     │     │     │
     *    ├───┼─────┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼─────┼─────┼─────┼─────┤
     *  3 │   │     │   │   │   │   │   │   │   │   │   │   │     │     │     │     │
     *    ├───┼─────┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼─────┼─────┼─────┼─────┤
     *  4 │   │     │   │   │   │   │   │   │   │   │   │   │     │     │     │     │
     *    └───┴─────┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴─────┴─────┴─────┴─────┘

     */
    [0] = LAYOUT_70_iso(
    //  0       1        2        3         4        5       6      7       8      9       10     11     12       13       14       15
        KC_DEL, UK_GRV,  UK_1,    UK_2,     UK_3,    UK_4,   UK_5,  UK_6,   UK_7,  UK_8,   UK_9,  UK_0,  UK_MINS, UK_EQL,           KC_BSPC,
        KC_NO,  KC_TAB,           UK_SLSH,  UK_COMM, UK_DOT, UK_P,  UK_Y,   UK_F,  UK_G,   UK_C,  UK_R,  UK_L,    UK_LBRC, UK_RBRC,
        KC_NO,  KC_LCTL,          UK_A,     UK_O,    UK_E,   UK_U,  UK_I,   UK_D,  UK_H,   UK_T,  UK_N,  UK_S,    UK_QUOT, UK_HASH, KC_ENT,
        KC_NO,  KC_LSFT, UK_BSLS, UK_SCLN,  UK_Q,    UK_J,   UK_K,  UK_X,   UK_B,  UK_M,   UK_W,  UK_V,  UK_Z,             KC_RSFT,
        KC_NO,  KC_NO,   KC_LWIN, KC_LALT,           KC_SPC,        KC_SPC,        KC_SPC,        MO(1), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),
    [1] = LAYOUT_70_iso(
    //  0        1        2        3         4        5       6      7       8      9       10     11      12      13       14      15
        KC_NO,   KC_NO,   KC_F1,   KC_F1,    KC_F3,   KC_F4,  KC_F5, KC_F6,  KC_F7, KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,          KC_NO,
        KC_NO,   KC_NO,            KC_NO,    KC_NO,   KC_NO,  KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,  KC_NO,   KC_NO,
        QK_BOOT, KC_CAPS,          KC_NO,    KC_NO,   KC_NO,  KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,  KC_NO,   KC_NO,  KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,  KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,           KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,             KC_NO,         KC_NO,         KC_NO,         KC_NO,  KC_NO,  KC_NO,   KC_NO,  KC_NO
    )
    };
