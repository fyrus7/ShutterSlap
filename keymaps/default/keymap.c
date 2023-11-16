#include QMK_KEYBOARD_H
#include "encoder.h"

#define _PAGE_1 0
#define _PAGE_2 1

/* Key Assign Layout */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_PAGE_1] = LAYOUT(
  	    KC_A, KC_B, KC_C, KC_D, KC_E,
	    KC_F, KC_G, KC_H, KC_I, KC_J,
            TO(1)
	),
[_PAGE_2] = LAYOUT(
            KC_1, KC_2, KC_3, KC_4, KC_5,
	    KC_6, KC_7, KC_8, KC_9, KC_0,
	    TO(0)
	),
};


bool encoder_update_user(uint8_t index, bool clockwise) {
if (index == 0) { /* first encoder */
    if (clockwise) {
        tap_code16(KC_VOLU);
     } else {
        tap_code16(KC_VOLD);
     }
}
 if (index == 1) { /* second encoder */
     if (clockwise) {
	tap_code16(KC_RGHT);
     } else {
	tap_code16(KC_LEFT);
     }
}	
  if (index == 2) { /* third encoder */
     if (clockwise) {
	tap_code16(KC_UP);
     } else {
	tap_code16(KC_DOWN);
      }
    }
  return true;
}


#ifdef OLED_ENABLE
bool oled_task_user() {
    static const char PROGMEM image[] = {0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4};
    oled_write_P(image, false);
	switch (get_highest_layer(layer_state)) {
        case _PAGE_1:
	    oled_set_cursor(5, 3);
            oled_write_P(PSTR("LAYER [1] 2 "), false);
            break;
        case _PAGE_2:
	    oled_set_cursor(5, 3);
            oled_write_P(PSTR("LAYER  1 [2]"), false);
            break;
        default:
  	    oled_set_cursor(5, 3);
            oled_write_ln_P(PSTR("NONE"), false);
    }
	return false;
}
#endif


//qmk compile -kb shutterslap -km default
