/* Copyright 2021 m.ki
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
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Default Layer
     * ,----, ,------------------------------     ---------------------------------.
     * |  1 | | Esc|  Q |  W |  E |  R |  T |     | Y |  U |  I |  O |  P | [ | BS |
     * |----| | ---------------------------       ---------------------------------|
     * |  2 | | Tab|  A |  S |  D |  F |  G |     | H |  J |  K |  L | - |  Ent    |
     * |----| |------------------------------     ---------------------------------|
     * |  3 | |Shft|  Z |  X |  C |  V |  B |     |  N |  M |  , |  . | Up | Shft  |
     * |----| |------------------------------     ---------------------------------|
     * |  4 | |Ctrl|LGui|Alt |  spc         |     |spc   |  Fn   |left|down|right  |
     * `----' `------------------------------     ---------------------------------'
     */
    [_QWERTY] = LAYOUT(
    KC_1, KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, RSFT(KC_LBRC),  KC_BSPC,
    KC_2, KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_MINUS,    KC_ENT,
    KC_3, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,   KC_DOT,  KC_UP, KC_RSFT,
    KC_4, KC_LCTL, LALT, KC_LGUI, LT(_LOWER,KC_SPACE),                            LT(_RAISE,KC_SPACE),  KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT
  ),
    /* LOWER Layer
     * ,----, ,------------------------------     ---------------------------------.
     * |  1 | | Esc|  1 |  2 |  3 |  4 |  5 |     | 6 |  7 |  8 |  9 |  0 | ] | BS |
     * |----| | ---------------------------       ---------------------------------|
     * |  2 | | Tab|  ! |  @ |  # |  $ |  % |     | ^ |  & |  * |  ( | ) |  Ent    |
     * |----| |------------------------------     ---------------------------------|
     * |  3 | |Shft|  + |  - |  * |  / |  = |     |  ~ |   |  [ |  ] | Up | Shft  |
     * |----| |------------------------------     ---------------------------------|
     * |  4 | |Ctrl|LGui|Alt |  spc         |     |spc   |  Fn   |left|down|right  |
     * `----' `------------------------------     ---------------------------------'
*/  
  [_LOWER] = LAYOUT(
    KC_1, KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, RSFT(KC_RBRC),   KC_BSPC,
    KC_2, KC_TAB,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_ENT,
    KC_3, KC_LSFT, KC_PPLS,    KC_PMNS,    KC_PAST,    KC_PSLS,    KC_PEQL,    KC_GRV,    KC_JYEN,    RSFT(KC_LBRC),   RSFT(KC_RBRC),  RSFT(KC_MINS), KC_RSFT,
    KC_4, KC_LCTL, LALT, KC_LGUI, LT(_LOWER,KC_SPACE),                            LT(_RAISE,KC_SPACE),  KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT
  ) ,
  /* RAISE Layer
     * ,----, ,------------------------------     ---------------------------------.
     * |  1 | | Esc| F1 | F2 | F3 | F4 | F5 |     | F6|  F7 | F8 | F9 | F10| _ | BS |
     * |----| | ---------------------------       ---------------------------------|
     * |  2 | | Tab|  A |  S |  D |  F |  G |     | H |  J |  K |  L | - |  Ent    |
     * |----| |------------------------------     ---------------------------------|
     * |  3 | |Shft|  Z |  X |  C |  V |  B |     |  N |  M |  , |  . | Up | Shft  |
     * |----| |------------------------------     ---------------------------------|
     * |  4 | |Ctrl|LGui|Alt |  spc         |     |spc   |  Fn   |left|down|right  |
     * `----' `------------------------------     ---------------------------------'
*/  
  
  [_RAISE] = LAYOUT(
    KC_1, KC_ESC,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10, RSFT(KC_MINS), KC_DEL,
    KC_2, KC_TAB,  KC_AT,    KC_BSLS,    KC_SCLN,   RSFT(KC_SCLN), KC_QUOT,    KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_EQL, KC_ENT,
    KC_3, KC_LSFT, RGB_TOG,    RGB_MOD,    RGB_HUI,    RGB_HUD,    RGB_SAI,    RGB_SAD,    RGB_VAI,    KC_LBRC,   KC_RBRC,  KC_BSLASH, KC_RSFT,
    KC_4, KC_LCTL, LALT, KC_LGUI, LT(_LOWER,KC_SPACE),                            LT(_RAISE,KC_SPACE),  KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT
  ) 
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* Left encoder */
        switch (get_highest_layer(layer_state)) {
            case _QWERTY:
                if (clockwise) {
                    tap_code(KC_TAB);
                } else {
                    tap_code16(S(KC_TAB));
                }
                break;
            case _RAISE:
                if (clockwise) {
                //    tap_code(KC_VOLU);
                    if(keymap_config.swap_lalt_lgui==false){
                        tap_code(KC_LANG2);
                    }else {
                        tap_code16(A(KC_GRV));
                    }
                } else {
                    if(keymap_config.swap_lalt_lgui==false){
                    tap_code(KC_LANG1);
                    } else {
                        tap_code16(A(KC_GRV));
                    }
                }
                break;
            case _ADJUST:
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
            }
        }

    } else if (index == 1) { /* Right encoder */
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
}

