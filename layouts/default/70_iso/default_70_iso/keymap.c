// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_uk.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
     * │Pwr│ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│
     * ├───┼───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
     * │M1 │ Tab │ / │ , │ . │ P │ Y │ F │ G │ C │ R │ L │ [ │ ] │     │
     * ├───┼─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐ Ent│
     * │M2 │ Caps │ A │ O │ E │ U │ I │ D │ H │ T │ N │ S │ ' │ # │    │
     * ├───┼────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
     * │M3 │Shft│ \ │ ; │ Q │ J │ K │ X │ B │ M │ W │ V │ Z │ Shift    │
     * ├───┼───┬┴──┬┴──┬┴───┴───┴─┬─┴───┴─┬─┴───┴──┬┴──┬┴──┬┴──┬───┬───┤
     * │M4 │Fn │Sys│Alt│          │       │        │Alt│ ← │ ↓ │ ↑ │ → │
     * └───┴───┴───┴───┴──────────┴───────┴────────┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_70_iso(
    //  0      1        2        3         4        5       6      7       8      9       10     11     12       13       14       15
        KC_NO, UK_GRV,  UK_1,    UK_2,     UK_3,    UK_4,   UK_5,  UK_6,   UK_7,  UK_8,   UK_9,  UK_0,  UK_MINS, UK_EQL,  KC_NO,   KC_BSPC,
        KC_NO, KC_TAB,  KC_NO,   UK_SLSH,  UK_COMM, UK_DOT, UK_P,  UK_Y,   UK_F,  UK_G,   UK_C,  UK_R,  UK_L,    UK_LBRC, UK_RBRC, KC_NO,
        KC_NO, KC_LCTL, KC_NO,   UK_A,     UK_O,    UK_E,   UK_U,  UK_I,   UK_D,  UK_H,   UK_T,  UK_N,  UK_S,    UK_QUOT, UK_HASH, KC_ENT,
        KC_NO, KC_LSFT, UK_BSLS, UK_SCLN,  UK_Q,    UK_J,   UK_K,  UK_X,   UK_B,  UK_M,   UK_W,  UK_V,  UK_Z,    KC_NO,   KC_RSFT, KC_NO,
        KC_NO, KC_NO,   KC_LALT, KC_LWIN,  KC_NO,   KC_SPC, KC_NO, KC_SPC, KC_NO, KC_SPC, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    )
    };
