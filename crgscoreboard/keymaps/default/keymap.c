// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_3x7(
        KC_01,   KC_02,   KC_03,   KC_04,   KC_05,   KC_06,   KC_07,
        KC_11,   KC_12,   KC_13,   KC_14,   KC_15,   KC_16,   KC_17,
        KC_21,   KC_22,   KC_23,   KC_24,   KC_25,   KC_26,   KC_27
    )
};
