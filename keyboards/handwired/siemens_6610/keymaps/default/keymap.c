#include QMK_KEYBOARD_H

// Copyright 2022 Richard Wossal (@rwos)
// SPDX-License-Identifier: GPL-2.0-or-later

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_AUDIO_MUTE,    KC_ESC, KC_LEFT_GUI, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_APP, KC_EXEC, KC_PSCR, KC_SCRL, KC_PAUSE, KC_VOLD, KC_VOLU, KC_NUM_LOCK,  QK_BOOT,
        KC_X,             KC_GRAVE,   KC_1,        KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,  KC_MINUS,   KC_EQUAL, KC_BSPC,  KC_INS, KC_HOME, KC_PGUP,
        KC_X,             KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_ENTER,                         KC_DEL, KC_END, KC_PGDN,       KC_BSPC, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_ENTER,
        KC_X,             KC_LCTRL, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOTE, KC_BSLS,                    KC_UNDO,   KC_UP, KC_AGAIN,       KC_KP_MINUS, KC_KP_4, KC_KP_5, KC_KP_6, KC_RETURN,
        KC_X,             KC_LSHIFT, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSHIFT,                    KC_LEFT, KC_HOME, KC_RIGHT,       KC_COMMA, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_DOT,
        KC_LALT,                                                                                                                                  KC_COPY, KC_DOWN, KC_PASTE,        KC_KP_0, KC_KP_0, KC_KP_0, KC_SEPARATOR,
KC_X,KC_X
    )
};

/// XXX TODO: qmk lint


void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}

