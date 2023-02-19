/* Copyright 2022 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


/*
 * grave added in place of num-lock for ERG mode on Wahoo Systm software
 * removed key pad numbers in place of normal numbers because Systm ignores them
 */

#include QMK_KEYBOARD_H

enum layers { _BASE, _FN1};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_numpad_6x4(
        MO(_FN1), KC_MUTE, KC_VOLD,  KC_VOLU,
        KC_GRAVE, KC_PSLS, KC_PAST,  KC_DOWN,
        KC_7,     KC_8,    KC_9,
        KC_4,     KC_5,    KC_6,     KC_UP,
        KC_1,     KC_2,    KC_3,
        KC_0,              KC_ESC,  KC_SPACE),

    [_FN1] = LAYOUT_numpad_6x4(
        _______,    KC_MUTE, KC_VOLD,   KC_VOLU,
        RGB_MOD,    RGB_VAI, RGB_HUI,   KC_DEL,
        RGB_RMOD,   RGB_VAD, RGB_HUD,
        RGB_SAI,    RGB_SPI, KC_MPRV,   _______,
        RGB_SAD,    RGB_SPD, KC_MPLY,
        RGB_TOG,             KC_MNXT,   _______)
};
