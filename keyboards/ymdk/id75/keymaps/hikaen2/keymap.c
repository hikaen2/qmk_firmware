#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_5x15(
        KC_ESC,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,    JP_6,    JP_7,    JP_8,    JP_9,    JP_0,    JP_MINS, JP_CIRC, JP_YEN,  KC_NO,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    JP_AT,   JP_LBRC, KC_BSPC, KC_NO,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    JP_SCLN, JP_COLN, JP_RBRC, KC_ENT,  KC_NO,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    JP_COMM, JP_DOT,  JP_SLSH, JP_BSLS, KC_UP,   KC_RSFT, KC_NO,
        MO(1),   KC_NO,   KC_LGUI, KC_LALT, JP_MHEN, KC_SPC,  KC_SPC,  JP_HENK, KC_RALT, KC_APP,  KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO
    ),

    [1] = LAYOUT_ortho_5x15(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  _______,
        _______, _______, _______, KC_END,  _______, _______, _______, _______, KC_PSCR, _______, KC_UP,   _______, _______, KC_DEL,  _______,
        _______, KC_HOME, _______, _______, KC_RGHT, _______, KC_BSPC, _______, KC_HOME, KC_PGUP, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_ENT,  KC_END,  KC_PGDN, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

};
