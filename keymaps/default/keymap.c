#include QMK_KEYBOARD_H
#include "encoder.h"
#include "midi.h"

extern MidiDevice midi_device;

#define _BASE  0
#define _LTRM1 1
#define _LTRM2 2


enum LAYOUT { LAYER_1 = 0, LAYER_2, LAYER_3,
              MIDI_01, MIDI_02, MIDI_03, MIDI_04, MIDI_05,
			  MIDI_06, MIDI_07, MIDI_08, MIDI_09, MIDI_10,
			  MIDI_11, MIDI_12, MIDI_13, MIDI_14, MIDI_15,
			  MIDI_16, MIDI_17, MIDI_18 };
uint8_t last_stayed_layer = 0;

enum midi_cc_keycodes_LTRM { MIDI_CC1 = SAFE_RANGE,
                             MIDI_CC2, MIDI_CC3, MIDI_CC4, MIDI_CC5,
							 MIDI_CC6, MIDI_CC7, MIDI_CC8, MIDI_CC9 };

const char* current_ltrm_func = '\0';

static uint8_t current_MIDI_ccNumber   = 1;
const char* current_MIDI_ccNumber_char = '\0';


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
  		    TD(MIDI_01), TD(MIDI_02), TD(MIDI_03), TD(MIDI_04), TD(MIDI_05),
		    TD(MIDI_06), TD(MIDI_07), TD(MIDI_08), TD(MIDI_09), TD(LAYER_1)
	),
	[_LTRM1] = LAYOUT(
	        TD(MIDI_10), TD(MIDI_11), TD(MIDI_12), TD(MIDI_13), TD(MIDI_14),
		    TD(MIDI_15), TD(MIDI_16), TD(MIDI_17), TD(MIDI_18), TD(LAYER_2)
	),
	[_LTRM2] = LAYOUT(
	        MIDI_CC1, MIDI_CC2, MIDI_CC3, MIDI_CC4, MIDI_CC5,
		    MIDI_CC6, MIDI_CC7, MIDI_CC8, MIDI_CC9, TD(LAYER_3)
	),
};


		
void dance_MIDI_01(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 1;
		current_ltrm_func             = "LR 01";
		current_MIDI_ccNumber_char    = "01";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 27;
		current_ltrm_func             = "LR 27";
		current_MIDI_ccNumber_char    = "27";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 53;
		current_ltrm_func             = "LR 53";
		current_MIDI_ccNumber_char    = "53";
	}
}
void dance_MIDI_02(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 2;
		current_ltrm_func             = "LR 02";
        current_MIDI_ccNumber_char    = "02";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 28;
		current_ltrm_func             = "LR 28";
        current_MIDI_ccNumber_char    = "28";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 54;
		current_ltrm_func             = "LR 54";
        current_MIDI_ccNumber_char    = "54";
    }
}
void dance_MIDI_03(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 3;;
		current_ltrm_func             = "LR 03";
        current_MIDI_ccNumber_char    = "03";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 29;
		current_ltrm_func             = "LR 29";
        current_MIDI_ccNumber_char    = "29";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 55;
		current_ltrm_func             = "LR 55";
        current_MIDI_ccNumber_char    = "55";
    }
}
void dance_MIDI_04(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 4;
		current_ltrm_func             = "LR 04";
        current_MIDI_ccNumber_char    = "04";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 30;
		current_ltrm_func             = "LR 30";
        current_MIDI_ccNumber_char    = "30";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 56;
		current_ltrm_func             = "LR 56";
        current_MIDI_ccNumber_char    = "56";
    }
}
void dance_MIDI_05(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 5;
		current_ltrm_func             = "LR 05";
        current_MIDI_ccNumber_char    = "05";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 31;
		current_ltrm_func             = "LR 31";
        current_MIDI_ccNumber_char    = "31";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 57;
		current_ltrm_func             = "LR 57";
		current_MIDI_ccNumber_char    = "57";
    }
}
void dance_MIDI_06(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 6;
		current_ltrm_func             = "LR 06";
        current_MIDI_ccNumber_char    = "06";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 32;
		current_ltrm_func             = "LR 32";
        current_MIDI_ccNumber_char    = "32";
    } else if (state->count == 3){  // TAP THREE TIMES
		current_MIDI_ccNumber         = 58;
		current_ltrm_func             = "LR 58";
		current_MIDI_ccNumber_char    = "58";
    }
}
void dance_MIDI_07(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 7;
		current_ltrm_func             = "LR 07";
        current_MIDI_ccNumber_char    = "07";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 33;
		current_ltrm_func             = "LR 33";
        current_MIDI_ccNumber_char    = "33";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 59;
		current_ltrm_func             = "LR 59";
		current_MIDI_ccNumber_char    = "59";
    }
}
void dance_MIDI_08(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 8;
		current_ltrm_func             = "LR 08";
        current_MIDI_ccNumber_char    = "08";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 34;
		current_ltrm_func             = "LR 34";
        current_MIDI_ccNumber_char    = "34";
    } else if (state->count == 3){  // TAP THREE TIMES
		current_MIDI_ccNumber         = 60;
		current_ltrm_func             = "LR 60";
		current_MIDI_ccNumber_char    = "60";
    }
}
void dance_MIDI_09(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 9;
		current_ltrm_func             = "LR 09";
		current_MIDI_ccNumber_char    = "09";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 35;
		current_ltrm_func             = "LR 35";
		current_MIDI_ccNumber_char    = "35";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 61;
		current_ltrm_func             = "LR 61";
		current_MIDI_ccNumber_char    = "61";
    }
}
void dance_MIDI_10(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 10;
		current_ltrm_func             = "LR 10";
        current_MIDI_ccNumber_char    = "10";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 36;
		current_ltrm_func             = "LR 36";
        current_MIDI_ccNumber_char    = "36";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 62;
		current_ltrm_func             = "LR 62";
        current_MIDI_ccNumber_char    = "62";
    }
}
void dance_MIDI_11(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 11;
		current_ltrm_func             = "LR 11";
        current_MIDI_ccNumber_char    = "11";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 37;
		current_ltrm_func             = "LR 37";
        current_MIDI_ccNumber_char    = "37";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 63;
		current_ltrm_func             = "LR 63";
        current_MIDI_ccNumber_char    = "63";
    }
}
void dance_MIDI_12(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 12;
		current_ltrm_func             = "LR 12";
        current_MIDI_ccNumber_char    = "12";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 38;
		current_ltrm_func             = "LR 38";
        current_MIDI_ccNumber_char    = "38";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 64;
		current_ltrm_func             = "LR 64";
        current_MIDI_ccNumber_char    = "64";
    }
}
void dance_MIDI_13(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 13;
		current_ltrm_func             = "LR 13";
        current_MIDI_ccNumber_char    = "13";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 39;
		current_ltrm_func             = "LR 39";
        current_MIDI_ccNumber_char    = "39";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 65;
		current_ltrm_func             = "LR 65";
        current_MIDI_ccNumber_char    = "65";
    }
}
void dance_MIDI_14(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 14;
		current_ltrm_func             = "LR 14";
        current_MIDI_ccNumber_char    = "14";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 40;
		current_ltrm_func             = "LR 40";
        current_MIDI_ccNumber_char    = "40";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 66;
		current_ltrm_func             = "LR 66";
        current_MIDI_ccNumber_char    = "66";
    }
}
void dance_MIDI_15(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 15;
		current_ltrm_func             = "LR 15";
        current_MIDI_ccNumber_char    = "15";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 41;
		current_ltrm_func             = "LR 41";
        current_MIDI_ccNumber_char    = "41";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 67;
		current_ltrm_func             = "LR 67";
        current_MIDI_ccNumber_char    = "67";
    }
}
void dance_MIDI_16(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 16;
		current_ltrm_func             = "LR 16";
        current_MIDI_ccNumber_char    = "16";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 42;
		current_ltrm_func             = "LR 42";
        current_MIDI_ccNumber_char    = "42";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 68;
		current_ltrm_func             = "LR 68";
        current_MIDI_ccNumber_char    = "68";
    }
}
void dance_MIDI_17(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 17;
		current_ltrm_func             = "LR 17";
        current_MIDI_ccNumber_char    = "17";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 43;
		current_ltrm_func             = "LR 43";
        current_MIDI_ccNumber_char    = "43";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 69;
		current_ltrm_func             = "LR 69";
        current_MIDI_ccNumber_char    = "69";
    }
}
void dance_MIDI_18(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        current_MIDI_ccNumber         = 18;
		current_ltrm_func             = "LR 18";
        current_MIDI_ccNumber_char    = "18";
    } else if (state->count == 2){  // TAP TWICE
        current_MIDI_ccNumber         = 44;
		current_ltrm_func             = "LR 44";
        current_MIDI_ccNumber_char    = "44";
    } else if (state->count == 3){  // TAP THREE TIMES
        current_MIDI_ccNumber         = 70;
		current_ltrm_func             = "LR 70";
        current_MIDI_ccNumber_char    = "70";
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MIDI_CC1:
            if (record->event.pressed) {
                current_MIDI_ccNumber         =81;
                current_ltrm_func             = "LR 81";
				current_MIDI_ccNumber_char    = "81";
            } else {
            }
            return false;
            break;
        case MIDI_CC2:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 82;
                current_ltrm_func             = "LR 82";
				current_MIDI_ccNumber_char    = "82";

            } else {
            }
            return false;
            break;
        case MIDI_CC3:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 83;
                current_ltrm_func             ="LR 83";
				current_MIDI_ccNumber_char    = "83";
            } else {
            }
            return false;
            break;
			case MIDI_CC4:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 84;
                current_ltrm_func             = "LR 84";
				current_MIDI_ccNumber_char    = "84";
            } else {
            }
            return false;
            break;
			case MIDI_CC5:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 85;
                current_ltrm_func             = "LR 85";
				current_MIDI_ccNumber_char    = "85";
            } else {
            }
            return false;
            break;
			case MIDI_CC6:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 86;
                current_ltrm_func             = "LR 86";
				current_MIDI_ccNumber_char    = "86";
            } else {
            }
            return false;
            break;
			case MIDI_CC7:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 87;
                current_ltrm_func             = "LR 87";
				current_MIDI_ccNumber_char    = "87";
            } else {
            }
            return false;
            break;
			case MIDI_CC8:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 88;
                current_ltrm_func             = "LR 88";
				current_MIDI_ccNumber_char    = "88";
            } else {
            }
            return false;
            break;
			case MIDI_CC9:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 89;
                current_ltrm_func             = "LR 89";
				current_MIDI_ccNumber_char    = "89";
            } else {
            }
            return false;
            break;
        default:
            break;
    }
    return true;
}


void dance_layer_BASE(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        layer_on(_LTRM1);
    } else {  // TAP TWICE OR MORE
        layer_on(last_stayed_layer);
    }
}
void dance_layer_reset_BASE(qk_tap_dance_state_t *state, void *user_data) { layer_off(_BASE); }

void dance_layer_LTRM1(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        layer_on(_LTRM2);
    } else {  // TAP TWICE OR MORE
        layer_on(_BASE);
        last_stayed_layer = _LTRM1;
    }
}
void dance_layer_reset_LTRM1(qk_tap_dance_state_t *state, void *user_data) { layer_off(_LTRM1); }

void dance_layer_LTRM2(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        layer_on(_BASE);
    } else {  // TAP TWICE OR MORE
        layer_on(_BASE);
        last_stayed_layer = _LTRM2;
    }
}
void dance_layer_reset_LTRM2(qk_tap_dance_state_t *state, void *user_data) { layer_off(_LTRM2); }


qk_tap_dance_action_t tap_dance_actions[] = {
	[LAYER_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_layer_BASE, dance_layer_reset_BASE),
    [LAYER_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_layer_LTRM1, dance_layer_reset_LTRM1),
	[LAYER_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_layer_LTRM2, dance_layer_reset_LTRM2),
    [MIDI_01] = ACTION_TAP_DANCE_FN (dance_MIDI_01),
    [MIDI_02] = ACTION_TAP_DANCE_FN (dance_MIDI_02),
    [MIDI_03] = ACTION_TAP_DANCE_FN (dance_MIDI_03),
    [MIDI_04] = ACTION_TAP_DANCE_FN (dance_MIDI_04),
    [MIDI_05] = ACTION_TAP_DANCE_FN (dance_MIDI_05),
    [MIDI_06] = ACTION_TAP_DANCE_FN (dance_MIDI_06),
    [MIDI_07] = ACTION_TAP_DANCE_FN (dance_MIDI_07),
    [MIDI_08] = ACTION_TAP_DANCE_FN (dance_MIDI_08),
    [MIDI_09] = ACTION_TAP_DANCE_FN (dance_MIDI_09),
    [MIDI_10] = ACTION_TAP_DANCE_FN (dance_MIDI_10),
    [MIDI_11] = ACTION_TAP_DANCE_FN (dance_MIDI_11),
    [MIDI_12] = ACTION_TAP_DANCE_FN (dance_MIDI_12),
	[MIDI_13] = ACTION_TAP_DANCE_FN (dance_MIDI_13),
	[MIDI_14] = ACTION_TAP_DANCE_FN (dance_MIDI_14),
	[MIDI_15] = ACTION_TAP_DANCE_FN (dance_MIDI_15),
	[MIDI_16] = ACTION_TAP_DANCE_FN (dance_MIDI_16),
	[MIDI_17] = ACTION_TAP_DANCE_FN (dance_MIDI_17),
	[MIDI_18] = ACTION_TAP_DANCE_FN (dance_MIDI_18),
};


bool encoder_update_user(uint8_t index, bool clockwise) {
	if (index == 0) { /* first encoder */
        if (clockwise) {
                midi_send_cc(&midi_device, 0, current_MIDI_ccNumber, 65);
            } else {
                midi_send_cc(&midi_device, 0, current_MIDI_ccNumber, 63);
	    }
	}
    if (index == 1) { /* second encoder */
		switch (biton32(layer_state)) {
            case _BASE:
            if (clockwise) {
					tap_code16(KC_RGHT);
				} else {
					tap_code16(KC_LEFT);
				}
			break;
			case _LTRM1:
			if (clockwise) {
                midi_send_cc(&midi_device, 1, 0x14, 65);
            } else {
                midi_send_cc(&midi_device, 1, 0x14, 63);
	        }
			break;
			case _LTRM2:
			if (clockwise) {
                midi_send_cc(&midi_device, 7, 0x14, 65);
            } else {
                midi_send_cc(&midi_device, 7, 0x14, 63);
        }
	}
}		
    if (index == 2) { /* third encoder */
		switch (biton32(layer_state)) {
			case _BASE:
            if (clockwise) {
					tap_code16(KC_UP);
				} else {
					tap_code16(KC_DOWN);
				}
			break;
			case _LTRM1:
			if (clockwise) {
                midi_send_cc(&midi_device, 2, 0x14, 65);
            } else {
                midi_send_cc(&midi_device, 2, 0x14, 63);
	        }
			break;
			case _LTRM2:
			if (clockwise) {
                midi_send_cc(&midi_device, 8, 0x14, 65);
            } else {
                midi_send_cc(&midi_device, 8, 0x14, 63);
        }
    }
}
  return true;
}


#ifdef OLED_ENABLE
// draw to OLED
bool oled_task_user() {
	static const char PROGMEM image[] = {0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4};
	oled_write_P(image, false);

   // switch on current active layer
   switch (get_highest_layer(layer_state)) {
	   case _BASE :
	   oled_set_cursor(0, 4);
	   oled_write_P(PSTR("LTRM 1"), false);
	   
       oled_write_P(PSTR("        [CC "), false);
	   oled_write(current_MIDI_ccNumber_char, false);
       oled_write_P(PSTR("]   "), false);
	   
	   oled_set_cursor(0, 6);
	   oled_write_P(PSTR("FUNC "), false);
       oled_write(current_ltrm_func, false);
       oled_write_P(PSTR("           "), false);
	   break;
	   case _LTRM1 :
   	   oled_set_cursor(0, 4);
	   oled_write_P(PSTR("LTRM 2"), false);
	   
       oled_write_P(PSTR("        [CC "), false);
	   oled_write(current_MIDI_ccNumber_char, false);
       oled_write_P(PSTR("]   "), false);
	   
	   oled_set_cursor(0, 6);
	   oled_write_P(PSTR("FUNC "), false);
       oled_write(current_ltrm_func, false);
       oled_write_P(PSTR("           "), false);
	   break;
	   case _LTRM2 :
   	   oled_set_cursor(0, 4);
	   oled_write_P(PSTR("LTRM 3"), false);
	   
       oled_write_P(PSTR("        [CC "), false);
	   oled_write(current_MIDI_ccNumber_char, false);
       oled_write_P(PSTR("]   "), false);
	   
	   oled_set_cursor(0, 6);
	   oled_write_P(PSTR("FUNC "), false);
       oled_write(current_ltrm_func, false);
       oled_write_P(PSTR("           "), false);
	   break;
   }
	return false;
}
#endif


//qmk compile -kb shutterslap -km default