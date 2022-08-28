/* 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define U_BASE 0
#define U_EXTRA 0
#define U_TAP 0
#define U_FUN 1
#define U_NUM 2
#define U_SYM 3
#define U_MOUSE 4
#define U_NAV 5
#define U_MEDIA 6
#define U_BUTTON 7

#define U_RDO KC_AGIN
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)
#define U_UND KC_UNDO

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( //based on: MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP

        KC_NO,    KC_1,              KC_2,              KC_3,              KC_4,              KC_5,              KC_6,              KC_7,              KC_8,              KC_9,              KC_0,                  KC_MUTE,
        KC_NO,    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,               KC_VOLU,
        KC_NO,    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),          KC_VOLD,
        KC_NO,    LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),  KC_NO,

        KC_NO,    KC_NO,  KC_NO,    LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  KC_NO,              KC_NO,   LT(U_MOUSE,KC_TAB), LT(U_NAV,KC_SPC), LT(U_MEDIA,KC_ESC), KC_NO, KC_NO,          KC_NO,
                                            KC_HOME, KC_PGUP,  KC_END,                                                    KC_LEFT,  KC_UP,    KC_RIGHT,
                                                       KC_PGDN,                                                                         KC_DOWN
        ),

    [1] = LAYOUT( //based on: MIRYOKU_ALTERNATIVES_FUN_FLIP

        KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,
        KC_TRNS,  RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              KC_PSCR,           KC_F7,             KC_F8,             KC_F9,             KC_F12,     KC_TRNS,
        KC_TRNS,  KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_SLCK,           KC_F4,             KC_F5,             KC_F6,             KC_F11,     KC_TRNS,
        KC_TRNS,  U_NA,              KC_ALGR,           DF(U_MEDIA),       DF(U_FUN),         U_NA,              KC_PAUS,           KC_F1,             KC_F2,             KC_F3,             KC_F10,     KC_TRNS,

        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TAB, KC_SPC, KC_APP, KC_TRNS, KC_TRNS,          KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS,                                   KC_TRNS
        ),

    [2] = LAYOUT( //based on: MIRYOKU_ALTERNATIVES_NUM_FLIP

        KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,
        KC_TRNS,  RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              KC_LBRC,           KC_7,              KC_8,              KC_9,              KC_RBRC,    KC_TRNS,
        KC_TRNS,  KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_EQL,            KC_4,              KC_5,              KC_6,              KC_SCLN,    KC_TRNS,
        KC_TRNS,  U_NA,              KC_ALGR,           DF(U_NAV),         DF(U_NUM),         U_NA,              KC_BSLS,           KC_1,              KC_2,              KC_3,              KC_GRV,     KC_TRNS,

        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_MINS, KC_TRNS, KC_TRNS, KC_0, KC_DOT,          KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS,                                   KC_TRNS
        ),

    [3] = LAYOUT( //based on: MIRYOKU_ALTERNATIVES_SYM_FLIP

        KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,
        KC_TRNS,  RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              KC_LCBR,           KC_AMPR,           KC_ASTR,           KC_LPRN,           KC_RCBR,    KC_TRNS,
        KC_TRNS,  KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_PLUS,           KC_DLR,            KC_PERC,           KC_CIRC,           KC_COLN,    KC_TRNS,
        KC_TRNS,  U_NA,              KC_ALGR,           DF(U_MOUSE),       DF(U_SYM),         U_NA,              KC_PIPE,           KC_EXLM,           KC_AT,             KC_HASH,           KC_TILD,    KC_TRNS,

        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_UNDS, KC_LPRN, KC_RPRN, KC_TRNS, KC_TRNS,          KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS,                                   KC_TRNS
        ),

    [4] = LAYOUT( //based on: MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP

        KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_WH_U,           KC_WH_L,           KC_MS_U,           KC_WH_R,           U_NU,              U_NA,              DF(U_BASE),        DF(U_EXTRA),       DF(U_TAP),         RESET,      KC_TRNS,
        KC_TRNS,  KC_WH_D,           KC_MS_L,           KC_MS_D,           KC_MS_R,           U_NU,              U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,    KC_TRNS,
        KC_TRNS,  U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              DF(U_MOUSE),       DF(U_SYM),         KC_ALGR,           U_NA,       KC_TRNS,

        KC_TRNS,          KC_TRNS, KC_TRNS, KC_BTN3, KC_BTN1, KC_BTN2, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS,                                   KC_TRNS
        ),

    [5] = LAYOUT( //based on: MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP

        KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_PGUP,           KC_HOME,           KC_UP,             KC_END,            KC_INS,            U_NA,              DF(U_BASE),        DF(U_EXTRA),       DF(U_TAP),         RESET,      KC_TRNS,
        KC_TRNS,  KC_PGDN,           KC_LEFT,           KC_DOWN,           KC_RGHT,           KC_CAPS,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,    KC_TRNS,
        KC_TRNS,  U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              DF(U_NAV),         DF(U_NUM),         KC_ALGR,           U_NA,       KC_TRNS,

        KC_TRNS,          KC_TRNS, KC_TRNS, KC_DEL, KC_BSPC, KC_ENT, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS,                                   KC_TRNS
        ), 

    [6] = LAYOUT( //based on: MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP

        KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,
        KC_TRNS,  RGB_HUI,           RGB_SAI,           KC_VOLU,           RGB_VAI,           RGB_TOG,           U_NA,              DF(U_BASE),        DF(U_EXTRA),       DF(U_TAP),         RESET,      KC_TRNS,
        KC_TRNS,  RGB_MOD,           KC_MPRV,           KC_VOLD,           KC_MNXT,           U_NU,              U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,    KC_TRNS,
        KC_TRNS,  U_NU,              U_NU,              U_NU,              U_NU,              OUT_AUTO,          U_NA,              DF(U_MEDIA),       DF(U_FUN),         KC_ALGR,           U_NA,       KC_TRNS,

        KC_TRNS,          KC_TRNS, KC_TRNS, KC_MUTE, KC_MPLY, KC_MSTP, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS,                                   KC_TRNS
        ),

    [7] = LAYOUT( //based on: MIRYOKU_ALTERNATIVES_BUTTON

        KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,
        KC_TRNS,  U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,      KC_TRNS,
        KC_TRNS,  KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NU,              U_NU,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,    KC_TRNS,
        KC_TRNS,  U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,      KC_TRNS,

        KC_TRNS,          KC_TRNS, KC_TRNS, KC_BTN3, KC_BTN1, KC_BTN2, KC_TRNS,   KC_TRNS, KC_BTN2, KC_BTN1, KC_BTN3, KC_TRNS, KC_TRNS,          KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS,                                   KC_TRNS
        ),
};
