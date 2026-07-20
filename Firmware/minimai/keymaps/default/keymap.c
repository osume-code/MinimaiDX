#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_W, KC_E, KC_D, KC_C,
        KC_X, KC_Z, KC_A, KC_Q
    )
};