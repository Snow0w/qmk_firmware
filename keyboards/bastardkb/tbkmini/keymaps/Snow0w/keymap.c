/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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
// #include "../../../../../modules/getreuer/palettefx/palettefx.h"
// void keyboard_post_init_user(void) {
//   // Set the effect.
//   rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_PALETTEFX_FLOW);
//   // Set the palette and maximize saturation and brightness.
//   uint8_t palette_index = PALETTEFX_AFTERBURN;  // Set Carnival palette.
//   rgb_matrix_sethsv_noeeprom(RGB_MATRIX_HUE_STEP * palette_index, 255, 255);
//   // Set speed to default.
//   rgb_matrix_set_speed_noeeprom(128);
//   // Make sure RGB Matrix is on.
//   rgb_matrix_enable_noeeprom();
// }
void keyboard_post_init_user(void) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(HSV_OFF);
}

enum custom_keycodes {
    WIN_LEFT_BRACE = SAFE_RANGE,
    WIN_RIGHT_BRACE,
    WIN_LEFT_BRACKET,
    WIN_RIGHT_BRACKET,
    WIN_LEFT_TRIAG,
    WIN_RIGHT_TRIAG,
    WIN_SLASH,
    WIN_BACK_SLASH,
    WIN_SOBAKA,
    WIN_RESHETKA,
    WIN_DOLLAR,
    WIN_CAP,
    WIN_AND,
    WIN_TILDE,
    WIN_APOSTRO,
    WIN_PIPE,
    WIN_QUOTE,
    WIN_DOUBLE_QUOTE,
    WIN_SEMICOLON,
    WIN_COLON,
    WIN_DOT,
    WIN_COMMA,
    WIN_QUESTION,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case WIN_LEFT_BRACE:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_1); tap_code16(KC_KP_2); tap_code16(KC_KP_3); unregister_code(KC_LALT);
            }
            return false;
        case WIN_RIGHT_BRACE:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_1); tap_code16(KC_KP_2); tap_code16(KC_KP_5); unregister_code(KC_LALT);
            }
            return false;
        case WIN_LEFT_BRACKET:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_9); tap_code16(KC_KP_1); unregister_code(KC_LALT);
            }
            return false;
        case WIN_RIGHT_BRACKET:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_9); tap_code16(KC_KP_3); unregister_code(KC_LALT);
            }
            return false;
        case WIN_LEFT_TRIAG:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_6); tap_code16(KC_KP_0); unregister_code(KC_LALT);
            }
            return false;
        case WIN_RIGHT_TRIAG:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_6); tap_code16(KC_KP_2); unregister_code(KC_LALT);
            }
            return false;
        case WIN_SLASH:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_4); tap_code16(KC_KP_7); unregister_code(KC_LALT);
            }
            return false;
        case WIN_BACK_SLASH:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_9); tap_code16(KC_KP_2); unregister_code(KC_LALT);
            }
            return false;
        case WIN_SOBAKA:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_6); tap_code16(KC_KP_4); unregister_code(KC_LALT);
            }
            return false;
        case WIN_RESHETKA:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_3); tap_code16(KC_KP_5); unregister_code(KC_LALT);
            }
            return false;
        case WIN_DOLLAR:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_3); tap_code16(KC_KP_6); unregister_code(KC_LALT);
            }
            return false;
        case WIN_CAP:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_9); tap_code16(KC_KP_4); unregister_code(KC_LALT);
            }
            return false;
        case WIN_AND:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_3); tap_code16(KC_KP_8); unregister_code(KC_LALT);
            }
            return false;
        case WIN_TILDE:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_1); tap_code16(KC_KP_2); tap_code16(KC_KP_6); unregister_code(KC_LALT);
            }
            return false;
        case WIN_APOSTRO:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_9); tap_code16(KC_KP_6); unregister_code(KC_LALT);
            }
            return false;
        case WIN_PIPE:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_1); tap_code16(KC_KP_2); tap_code16(KC_KP_4); unregister_code(KC_LALT);
            }
            return false;
        case WIN_QUOTE:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_3); tap_code16(KC_KP_9); unregister_code(KC_LALT);
            }
            return false;
        case WIN_DOUBLE_QUOTE:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_3); tap_code16(KC_KP_4); unregister_code(KC_LALT);
            }
            return false;
        case WIN_SEMICOLON:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_5); tap_code16(KC_KP_9); unregister_code(KC_LALT);
            }
            return false;
        case WIN_COLON:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_5); tap_code16(KC_KP_8); unregister_code(KC_LALT);
            }
            return false;
        case WIN_DOT:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_4); tap_code16(KC_KP_6); unregister_code(KC_LALT);
            }
            return false;
        case WIN_COMMA:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_4); tap_code16(KC_KP_4); unregister_code(KC_LALT);
            }
            return false;
        case WIN_QUESTION:
            if (record->event.pressed) {
                register_code(KC_LALT); tap_code16(KC_KP_6); tap_code16(KC_KP_3); unregister_code(KC_LALT);
            }
            return false;
        default:
            return true;
    }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        LGUI(KC_SPC), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        LGUI(KC_SPC), MT(MOD_RGUI, KC_A), MT(MOD_LALT, KC_S), MT(MOD_LCTL, KC_D), MT(MOD_LSFT, KC_F), KC_G, KC_H, MT(MOD_LSFT, KC_J), MT(MOD_LCTL, KC_K), MT(MOD_LALT, KC_L), MT(MOD_RGUI, KC_SCLN), KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                              MT(MOD_RGUI, KC_TAB), LT(1, KC_ESC), LT(2, KC_SPC), KC_ENT, KC_BSPC, MT(MOD_LALT, KC_DEL)

        //`--------------------------'  `--------------------------'

        ),

    [1] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BACKSLASH,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_KP_1, KC_KP_2, KC_BACKSLASH,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_KP_4, LSFT(KC_KP_4), KC_MINUS, KC_PLUS, KC_PLUS, KC_KP_3, KC_EQUAL, KC_UNDERSCORE, LSFT(KC_KP_1), LSFT(KC_KP_2), XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        MT(MOD_RGUI, KC_TAB),  _______, MO(3), LSFT(KC_KP_9), KC_KP_9, LSFT(KC_KP_3)
        //`--------------------------'  `--------------------------'
        ),

    [2] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, LGUI(KC_SPC), LGUI(KC_SPC), XXXXXXX, XXXXXXX, XXXXXXX, KC_RIGHT_BRACKET,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, MT(MOD_RGUI, KC_F6), MT(MOD_LALT, KC_F7), MT(MOD_LCTL, KC_F8), MT(MOD_LSFT, KC_F9), KC_F10, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_LEFT_BRACKET, KC_RIGHT_BRACKET,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_F11, KC_F12, KC_LEFT_SHIFT, KC_DEL, KC_INS, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_GRV, KC_QUOTE, KC_QUOTE, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        MT(MOD_RGUI, KC_TAB), MO(3), _______, KC_ENT, KC_BSPC, MT(MOD_LALT, KC_DEL)
        //`--------------------------'  `--------------------------'
        ),

    [3] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT, RM_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        RM_TOGG, RM_HUEU, RM_SATU, RM_VALU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NUM_LOCK,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        RM_NEXT, RM_HUED, RM_SATD, RM_VALD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
        //`--------------------------'  `--------------------------'
        ),
    [4] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        LGUI(KC_SPC), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        LGUI(KC_SPC), MT(MOD_RGUI, KC_A), MT(MOD_LALT, KC_S), MT(MOD_LCTL, KC_D), MT(MOD_LSFT, KC_F), KC_G, KC_H, MT(MOD_LSFT, KC_J), MT(MOD_LCTL, KC_K), MT(MOD_LALT, KC_L), MT(MOD_RGUI, KC_SCLN), KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                              MT(MOD_LCTL, KC_TAB), LT(5, KC_ESC), LT(6, KC_SPC), KC_ENT, KC_BSPC, MT(MOD_LALT, KC_DEL)

        //`--------------------------'  `--------------------------'

        ),

    [5] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BACKSLASH,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_EXLM, WIN_SOBAKA, WIN_RESHETKA, WIN_DOLLAR, KC_PERC, WIN_CAP, WIN_AND, KC_ASTR, WIN_QUOTE, WIN_SEMICOLON, KC_BACKSLASH,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, WIN_TILDE, WIN_APOSTRO, KC_MINUS, KC_PLUS, KC_PLUS, WIN_PIPE, KC_EQUAL, KC_UNDERSCORE, WIN_DOUBLE_QUOTE, WIN_COLON, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        MT(MOD_LCTL, KC_TAB),  _______, MO(7), WIN_COMMA, WIN_DOT, WIN_QUESTION
        //`--------------------------'  `--------------------------'
        ),

    [6] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, LGUI(KC_SPC), LGUI(KC_SPC), XXXXXXX, XXXXXXX, XXXXXXX, KC_RIGHT_BRACKET,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, MT(MOD_RGUI, KC_F6), MT(MOD_LALT, KC_F7), MT(MOD_LCTL, KC_F8), MT(MOD_LSFT, KC_F9), KC_F10, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_LEFT_BRACKET, KC_RIGHT_BRACKET,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_F11, KC_F12, KC_LEFT_SHIFT, KC_DEL, KC_INS, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_GRV, KC_QUOTE, KC_QUOTE, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        MT(MOD_LCTL, KC_TAB), MO(7), _______, KC_ENT, KC_BSPC, MT(MOD_LALT, KC_DEL)
        //`--------------------------'  `--------------------------'
        ),

    [7] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT, RM_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        RM_TOGG, RM_HUEU, RM_SATU, RM_VALU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NUM_LOCK,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        RM_NEXT, RM_HUED, RM_SATD, RM_VALD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
        //`--------------------------'  `--------------------------'
        )
};


enum combos {
    MAC_SLASH,
    MAC_BACKSLASH,
    MAC_LEFT_TRIAG,
    MAC_RIGHT_TRIAG,
    MAC_LEFT_BRACKET,
    MAC_RIGHT_BRACKET,
    MAC_LEFT_PARENT,
    MAC_RIGHT_PARENT,
    MAC_LEFT_BRACE,
    MAC_RIGHT_BRACE,
    CHANGE_LAYOUT_COMBO,
};

const uint16_t PROGMEM mac_slash[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM mac_backslash[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM mac_left_triag[] = {MT(MOD_LALT, KC_S), MT(MOD_LCTL, KC_D), COMBO_END};
const uint16_t PROGMEM mac_right_triag[] = {MT(MOD_LCTL, KC_K), MT(MOD_LALT, KC_L), COMBO_END};
const uint16_t PROGMEM mac_left_bracket[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM mac_right_bracket[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM mac_left_parent[] = {MT(MOD_LCTL, KC_D), MT(MOD_LSFT, KC_F), COMBO_END};
const uint16_t PROGMEM mac_right_parent[] = {MT(MOD_LSFT, KC_J), MT(MOD_LCTL, KC_K), COMBO_END};
const uint16_t PROGMEM mac_left_brace[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM mac_right_brace[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM change_layout_combo[] = {KC_R, KC_T, KC_Y, KC_U, COMBO_END};

combo_t key_combos[] = {
    [MAC_SLASH] = COMBO(mac_slash, KC_NO),
    [MAC_BACKSLASH] = COMBO(mac_backslash, KC_NO),
    [MAC_LEFT_TRIAG] = COMBO(mac_left_triag, KC_NO),
    [MAC_RIGHT_TRIAG] = COMBO(mac_right_triag, KC_NO),
    [MAC_LEFT_BRACKET] = COMBO(mac_left_bracket, KC_NO),
    [MAC_RIGHT_BRACKET] = COMBO(mac_right_bracket, KC_NO),
    [MAC_LEFT_PARENT] = COMBO(mac_left_parent, KC_NO),
    [MAC_RIGHT_PARENT] = COMBO(mac_right_parent, KC_NO),
    [MAC_LEFT_BRACE] = COMBO(mac_left_brace, KC_NO),
    [MAC_RIGHT_BRACE] = COMBO(mac_right_brace, KC_NO),
    [CHANGE_LAYOUT_COMBO] = COMBO(change_layout_combo, TG(4)),
};

void send_alt_code(uint8_t digits[], uint8_t len) {
    register_code(KC_LALT);
    wait_ms(5);
    for (uint8_t i = 0; i < len; i++) {
        register_code(digits[i]);
        unregister_code(digits[i]);
        wait_ms(5);
    }
    unregister_code(KC_LALT);
}

void process_combo_event(uint16_t combo_index, bool pressed) {
    if (pressed) {
        switch(combo_index) {
            case MAC_SLASH:
                if (layer_state_is(0)) {
                    tap_code16(KC_KP_8);
                } else if (layer_state_is(4)) {
                    uint8_t code[] = {KC_KP_4, KC_KP_7};
                    send_alt_code(code, 2);
                }
                break;
            case MAC_BACKSLASH:
                if (layer_state_is(0)) {
                    tap_code16(LSFT(KC_KP_8));
                } else if (layer_state_is(4)) {
                    uint8_t code[] = {KC_KP_9, KC_KP_2};
                    send_alt_code(code, 2);
                }
                break;
            case MAC_LEFT_TRIAG:
                if (layer_state_is(0)) {
                    tap_code16(KC_KP_7);
                } else if (layer_state_is(4)) {
                    uint8_t code[] = {KC_KP_6, KC_KP_0};
                    send_alt_code(code, 2);
                }
                break;
            case MAC_RIGHT_TRIAG:
                if (layer_state_is(0)) {
                    tap_code16(LSFT(KC_KP_7));
                } else if (layer_state_is(4)) {
                    uint8_t code[] = {KC_KP_6, KC_KP_2};
                    send_alt_code(code, 2);
                }
                break;
            case MAC_LEFT_BRACKET:
                if (layer_state_is(0)) {
                    tap_code16(KC_KP_5);
                } else if (layer_state_is(4)) {
                    uint8_t code[] = {KC_KP_9, KC_KP_1};
                    send_alt_code(code, 2);
                }
                break;
            case MAC_RIGHT_BRACKET:
                if (layer_state_is(0)) {
                    tap_code16(LSFT(KC_KP_5));
                } else if (layer_state_is(4)) {
                    uint8_t code[] = {KC_KP_9, KC_KP_3};
                    send_alt_code(code, 2);
                }
                break;
            case MAC_LEFT_PARENT:
                if (layer_state_is(0)) {
                    tap_code16(KC_LEFT_PAREN);
                } else if (layer_state_is(4)) {
                    tap_code16(KC_LEFT_PAREN);
                }
                break;
            case MAC_RIGHT_PARENT:
                if (layer_state_is(0)) {
                    tap_code16(KC_RIGHT_PAREN);
                } else if (layer_state_is(4)) {
                    tap_code16(KC_RIGHT_PAREN);
                }
                break;
            case MAC_LEFT_BRACE:
                if (layer_state_is(0)) {
                    tap_code16(KC_KP_6);
                } else if (layer_state_is(4)) {
                    uint8_t code[] = {KC_KP_1, KC_KP_2, KC_KP_3};
                    send_alt_code(code, 3);
                }
                break;
            case MAC_RIGHT_BRACE:
                if (layer_state_is(0)) {
                    tap_code16(LSFT(KC_KP_6));
                } else if (layer_state_is(4)) {
                    uint8_t code[] = {KC_KP_1, KC_KP_2, KC_KP_5};
                    send_alt_code(code, 3);
                }
                break;
        }
    }
}


bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_RGUI, KC_TAB):
        case MT(MOD_LCTL, KC_TAB):
        case MT(MOD_LALT, KC_DEL):
        case LT(1, KC_ESC):
        case LT(2, KC_SPC):
            return true;
        default:
            return false;
    }
}
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_RGUI, KC_TAB):
        case MT(MOD_LCTL, KC_TAB):
        case MT(MOD_LALT, KC_DEL):
        case LT(1, KC_ESC):
        case LT(2, KC_SPC):
            return 150;
        default:
            return TAPPING_TERM;
    }
}
