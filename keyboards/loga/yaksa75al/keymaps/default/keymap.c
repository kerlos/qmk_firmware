// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_layers {
    WIN_BASE,
    WIN_FN,
    MAC_BASE,
    MAC_FN,
};

enum custom_keycodes {
    DEV1 = SAFE_RANGE,               // BT Device 1
    DEV2,               // BT Device 2 
    DEV3,               // BT Device 3
    DEV4,               // BT Device 4
    DEV5,               // BT Device 5
    DEV_24G,            // 2.4G
    DEV_USB,            // USB
};

// Keymap definition
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [WIN_BASE] = LAYOUT(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_MUTE, 
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_HOME, 
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP, 
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PGDN, 
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP,  
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [WIN_FN] = LAYOUT(
        QK_CLEAR_EEPROM, KC_MSEL, KC_VOLD, KC_VOLU, KC_MUTE, KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT, KC_MAIL, KC_WWW_HOME, KC_CALC, KC_WWW_SEARCH, KC_INS,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, KC_END,
        _______, CUSTOM(0), CUSTOM(1), CUSTOM(2), CUSTOM(5), _______, _______, _______, _______, MO(4), _______, _______, RGB_HUI, RGB_MOD, KC_PSCR,
        _______,  TO(2), _______, _______, _______, _______, _______, _______, MO(4), _______, _______,  CUSTOM(26), KC_PAUS,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  MO(4), RGB_VAI,
        _______, 0x700b, _______,   CUSTOM(7),    _______, _______, _______, RGB_SPD, RGB_VAD, RGB_SPI
    )
    
    [MAC_BASE] = LAYOUT(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_MUTE, 
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_HOME, 
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP, 
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,  KC_ENT, KC_PGDN, 
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,  KC_RSFT, KC_UP,  
        KC_LCTL, KC_LALT, KC_LGUI,   KC_SPC,    KC_RGUI, MO(3), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    
    [MAC_FN] = LAYOUT(
       QK_CLEAR_EEPROM, KC_BRID, KC_BRIU, _______, _______, RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_INS,
       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, KC_END
       _______, CUSTOM(0), CUSTOM(1), CUSTOM(2), CUSTOM(5), _______, _______, _______, _______, MO(4), _______, _______, RGB_HUI, RGB_MOD, KC_PSCR
       _______, TO(0),  _______, _______, _______, _______, _______, _______, MO(4), _______, _______,  CUSTOM(26), KC_PAUS,
       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  MO(4), RGB_VAI,
       _______, _______, _______,   CUSTOM(7),    _______, _______, _______, RGB_SPD, RGB_VAD, RGB_SPI
    ),
    
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif