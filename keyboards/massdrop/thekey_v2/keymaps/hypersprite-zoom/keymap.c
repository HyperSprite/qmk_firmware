/* Copyright 2023 HyperSpite <github@hypersprite.com>
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
 * The point of this macro combo is as a zoom controller
 * key 0 - toggles RGB in case things get out os sync
 * key 1 - gui+shift+a, set zoom up for mic global hotkey
 * key 2 - gui+shift+c, set zoom up for video global hotkey and toggles RGB
 */

#include QMK_KEYBOARD_H

enum custom_keycodes {
    ONAIRLIGHTANDVIDEO = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ONAIRLIGHTANDVIDEO:
            if (record->event.pressed) {
                tap_code16(LSG(KC_C));
                rgblight_toggle();
            } else {
                // when keycode ONAIRLIGHTANDVIDEO is released
            }
            break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(RGB_TOG, LSG(KC_A), ONAIRLIGHTANDVIDEO),
};
