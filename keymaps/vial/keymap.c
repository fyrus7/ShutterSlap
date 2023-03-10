#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
  		    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),
	[1] = LAYOUT(
  		    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_SAD, RGB_SAI),  ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
};
#endif



// make shutterslap:vial
