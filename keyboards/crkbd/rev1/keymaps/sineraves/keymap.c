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
    // 0: Colemak Mod DH
    [0] = LAYOUT_split_3x6_3(
  //,------------------------------------------------------------------------------.                         ,---------------------------------------------------------------------------------.
      XXXXXXX,        KC_Q,         KC_W,        KC_F,          KC_P,          KC_B,                                     KC_J,          KC_L,        KC_U,           KC_Y,     KC_SCLN, XXXXXXX,
  //|--------+------------+-------------+------------+--------------+--------------|                         |---------------+--------------+------------+---------------+------------+--------|
      XXXXXXX, GUI_T(KC_A),  ALT_T(KC_R), CTL_T(KC_S),   SFT_T(KC_T),          KC_G,                                     KC_M,   SFT_T(KC_N), CTL_T(KC_E),    ALT_T(KC_I), GUI_T(KC_O), XXXXXXX,
  //|--------+------------+-------------+------------+--------------+--------------|                         |---------------+--------------+------------+---------------+------------+--------|
      XXXXXXX,        KC_Z, RALT_T(KC_X),        KC_C,          KC_D,          KC_V,                                     KC_K,          KC_H,     KC_COMM, RALT_T(KC_DOT),     KC_SLSH, XXXXXXX,
  //|--------+------------+-------------+------------+--------------+--------------+-------|  |--------------+---------------+--------------+------------+---------------+------------+--------|
                                                       LT(5, KC_ESC), LT(4, KC_SPC), KC_TAB,    LT(2, KC_ENT), LT(1, KC_BSPC), LT(3, KC_DEL)
                                                   //`-------------------------------------'  `---------------------------------------------'

  ),

    // 1: Numbers
    [1] = LAYOUT_split_3x6_3(
  //,----------------------------------------------.                    ,------------------------------------------------------------.
      XXXXXXX, KC_LBRC, KC_7, KC_8,   KC_9, KC_RBRC,                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+-----+-----+-------+--------|                    |---------------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_SCLN, KC_4, KC_5,   KC_6,  KC_EQL,                             XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,
  //|--------+--------+-----+-----+-------+--------|                    |---------------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_GRV, KC_1, KC_2,   KC_3, KC_NUBS,                             XXXXXXX, XXXXXXX, XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX,
  //|--------+--------+-----+-----+-------+--------+--------|  |--------+---------------+--------+--------+--------+--------+--------|
                                    KC_DOT,    KC_0, KC_MINS,    XXXXXXX, LT(1, KC_BSPC), XXXXXXX
                                //`-------------------------'  `---------------------------------'
  ),

    // 2: Symbols
    [2] = LAYOUT_split_3x6_3(
  //,--------------------------------------------------------------------------.                                ,-----------------------------------------------------.
      XXXXXXX, LSFT(KC_LBRC), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_RBRC),                                  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------------+-----------+-----------+-----------+--------------|                                |--------+--------+--------+--------+--------+--------|
      XXXXXXX, LSFT(KC_SCLN), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6),  LSFT(KC_EQL),                                  XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,
  //|--------+--------------+-----------+-----------+-----------+--------------|                                |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  LSFT(KC_GRV), LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_NUBS),                                  XXXXXXX, XXXXXXX, XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX,
  //|--------+--------------+-----------+-----------+-----------+--------------+--------------|  |--------------+--------+--------+--------+--------+--------+--------|
                                                      LSFT(KC_9),    LSFT(KC_0), LSFT(KC_MINS),    LT(2, KC_ENT), XXXXXXX, XXXXXXX
                                                  //`-----------------------------------------'  `--------------------------------'
  ),

    // 3: Functions
    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------.                   ,------------------------------------------------------------.
      XXXXXXX, KC_F12, KC_F7, KC_F8,  KC_F9, KC_RBRC,                     XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+-----+-----+--------+--------|                   |--------+---------------+--------+--------+--------+--------|
      XXXXXXX, KC_F11, KC_F4, KC_F5,  KC_F6,  KC_EQL,                     XXXXXXX,        KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,
  //|--------+--------+-----+-----+--------+--------|                   |--------+---------------+--------+--------+--------+--------|
      XXXXXXX, KC_F10, KC_F1, KC_F2,  KC_F3, KC_NUBS,                     XXXXXXX,        XXXXXXX, XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX,
  //|--------+--------+-----+-----+--------+--------+-------|  |--------+--------+---------------+--------+--------+--------+--------|
                                     KC_APP,  KC_SPC, KC_TAB,    XXXXXXX, XXXXXXX, LT(3, KC_DEL)
                                //`-------------------------'  `---------------------------------'
  ),

    // 4: Nav
    [4] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------.                   ,-----------------------------------------------------.
      XXXXXXX,     XXXXXXX,      XXXXXXX,     XXXXXXX,     XXXXXXX,       XXXXXXX,                     KC_PSTE, KC_COPY,  KC_CUT, KC_UNDO, KC_AGIN, XXXXXXX,
  //|--------+------------+-------------+------------+------------+--------------|                   |--------+--------+--------+--------+--------+--------|
      XXXXXXX, GUI_T(KC_A),  ALT_T(KC_R), CTL_T(KC_S), SFT_T(KC_T),       XXXXXXX,                     KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_CAPS, XXXXXXX,
  //|--------+------------+-------------+------------+------------+--------------|                   |--------+--------+--------+--------+--------+--------|
      XXXXXXX,     XXXXXXX, RALT_T(KC_X),     XXXXXXX,     XXXXXXX,       XXXXXXX,                     KC_HOME, KC_PGDN, KC_PGUP,  KC_END,  KC_INS, XXXXXXX,
  //|--------+------------+-------------+------------+------------+--------------+--------|  |-------+--------+--------+--------+--------+--------+--------|
                                                           XXXXXXX, LT(4, KC_SPC), XXXXXXX,    KC_ENT, KC_BSPC,  KC_DEL
                                                   //`------------------------------------'  `-------------------------'
  ),

    // 5: Media
    [5] = LAYOUT_split_3x6_3(
  //,------------------------------------------------------------------------.                   ,-----------------------------------------------------.
      XXXXXXX,     XXXXXXX,      XXXXXXX,     XXXXXXX,       XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+------------+-------------+------------+--------------+--------|                   |--------+--------+--------+--------+--------+--------|
      XXXXXXX, GUI_T(KC_A),  ALT_T(KC_R), CTL_T(KC_S),   SFT_T(KC_T), XXXXXXX,                     XXXXXXX, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX,
  //|--------+------------+-------------+------------+--------------+--------|                   |--------+--------+--------+--------+--------+--------|
      XXXXXXX,     XXXXXXX, RALT_T(KC_X),     XXXXXXX,       XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+------------+-------------+------------+--------------+--------+--------|  |-------+--------+--------+--------+--------+--------+--------|
                                                       LT(5, KC_ESC), XXXXXXX, XXXXXXX,   KC_MSTP, KC_MPLY, KC_MUTE
                                                   //`--------------------------------'  `-------------------------'
  )
};
