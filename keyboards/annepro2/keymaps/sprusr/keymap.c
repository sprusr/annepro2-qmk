#include <stdint.h>
#include "annepro2.h"
#include "qmk_ap2_led.h"

enum anne_pro_layers {
  _QWERTY_LAYER,
  _LH_DVORAK_LAYER,
  _FN1_LAYER,
  _FN2_LAYER,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY_LAYER] = KEYMAP(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP,
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, MO(_FN1_LAYER), KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_LH_DVORAK_LAYER] = KEYMAP(
        KC_GRV, KC_LBRC, KC_RBRC, KC_SLSH, KC_P, KC_F, KC_M, KC_L, KC_J, KC_4, KC_3, KC_2, KC_1, KC_BSPC,
        KC_TAB, KC_SCLN, KC_Q, KC_B, KC_Y, KC_U, KC_R, KC_S, KC_O, KC_DOT, KC_6, KC_5, KC_EQL, KC_BSLS,
        KC_ESC, KC_MINS, KC_K, KC_C, KC_D, KC_T, KC_H, KC_E, KC_A, KC_Z, KC_8, KC_7, KC_ENT,
        KC_LSFT, KC_QUOT, KC_X, KC_G, KC_V, KC_W, KC_N, KC_I, KC_COMM, KC_0, KC_9, KC_UP,
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, MO(_FN1_LAYER), KC_LEFT, KC_DOWN, KC_RGHT
    ),
	[_FN1_LAYER] = KEYMAP(
        KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
        KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_TRNS,
        KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS, KC_HOME, KC_PGUP, KC_TRNS,
        KC_TRNS, KC_VOLU, KC_VOLD, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_END, KC_PGDN, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(_FN2_LAYER), KC_TRNS, KC_TRNS
    ),
	[_FN2_LAYER] = KEYMAP(
        KC_AP2_USB, DF(_QWERTY_LAYER), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DF(_LH_DVORAK_LAYER), RESET,
        KC_AP2_BT_UNPAIR, KC_AP2_BT1, KC_AP2_BT2, KC_AP2_BT3, KC_AP2_BT4, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_AP_LED_ON, KC_AP_LED_OFF, KC_AP_LED_NEXT_PROFILE, KC_AP_LED_PREV_PROFILE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
};

const uint16_t keymaps_size = sizeof(keymaps);


void matrix_init_user(void) {

}

void matrix_scan_user(void) {
}

layer_state_t layer_state_set_user(layer_state_t layer) {
    return layer;
}
