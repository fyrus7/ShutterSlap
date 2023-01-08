#include QMK_KEYBOARD_H
#include "encoder.h"
#include "midi.h"

extern MidiDevice midi_device;

#define _BASE 0
#define _LTRM 1

enum LAYOUT { LAYER_1 = 0, LAYER_2 };
uint8_t last_stayed_layer = 0;

const char* current_ltrm_func = '\0';
static uint8_t current_MIDI_ccNumber = 1;

enum midi_cc_keycodes_LTRM { MIDI_CC1 = SAFE_RANGE,
                             MIDI_CC2, MIDI_CC3, MIDI_CC4, MIDI_CC5,
							 MIDI_CC6, MIDI_CC7, MIDI_CC8, MIDI_CC9,
                             MIDI_CC10, MIDI_CC11, MIDI_CC12, MIDI_CC13,
							 MIDI_CC14, MIDI_CC15, MIDI_CC16, MIDI_CC17,
                             MIDI_CC18 };


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
	        MIDI_CC1, MIDI_CC2, MIDI_CC3, MIDI_CC4, MIDI_CC5,
		    MIDI_CC6, MIDI_CC7, MIDI_CC8, MIDI_CC9, TD(LAYER_1)
	),
	[_LTRM] = LAYOUT(
	        MIDI_CC10, MIDI_CC11, MIDI_CC12, MIDI_CC13, MIDI_CC14,
		    MIDI_CC15, MIDI_CC16, MIDI_CC17, MIDI_CC18, TD(LAYER_2)
	),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MIDI_CC1:
            if (record->event.pressed) {
                current_MIDI_ccNumber         =1;
                current_ltrm_func             = "LR 01";
            } else {
            }
            return false;
            break;
        case MIDI_CC2:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 2;
                current_ltrm_func             = "LR 02";
            } else {
            }
            return false;
            break;
        case MIDI_CC3:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 3;
                current_ltrm_func             ="LR 03";
            } else {
            }
            return false;
            break;
			case MIDI_CC4:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 4;
                current_ltrm_func             = "LR 04";
            } else {
            }
            return false;
            break;
			case MIDI_CC5:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 5;
                current_ltrm_func             = "LR 05";
            } else {
            }
            return false;
            break;
			case MIDI_CC6:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 6;
                current_ltrm_func             = "LR 06";
            } else {
            }
            return false;
            break;
			case MIDI_CC7:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 7;
                current_ltrm_func             = "LR 07";
            } else {
            }
            return false;
            break;
			case MIDI_CC8:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 8;
                current_ltrm_func             = "LR 08";
            } else {
            }
            return false;
            break;
			case MIDI_CC9:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 9;
                current_ltrm_func             = "LR 09";
            } else {
            }
            return false;
            break;
			case MIDI_CC10:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 10;
                current_ltrm_func             = "LR 10";
            } else {
            }
            return false;
            break;
			case MIDI_CC11:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 11;
                current_ltrm_func             = "LR 11";
            } else {
            }
            return false;
            break;
			case MIDI_CC12:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 12;
                current_ltrm_func             = "LR 12";
            } else {
            }
            return false;
            break;
			case MIDI_CC13:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 13;
                current_ltrm_func             = "LR 13";
            } else {
            }
            return false;
            break;
			case MIDI_CC14:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 14;
                current_ltrm_func             = "LR 14";
            } else {
            }
            return false;
            break;
			case MIDI_CC15:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 15;
                current_ltrm_func             = "LR 15";
            } else {
            }
            return false;
            break;
			case MIDI_CC16:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 16;
                current_ltrm_func             = "LR 16";
            } else {
            }
            return false;
            break;
			case MIDI_CC17:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 17;
                current_ltrm_func             = "LR 17";
            } else {
            }
            return false;
            break;
			case MIDI_CC18:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 18;
                current_ltrm_func             = "LR 18";
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
        layer_on(_LTRM);
    } else {  // TAP TWICE OR MORE
        layer_on(last_stayed_layer);
    }
}
void dance_layer_reset_BASE(qk_tap_dance_state_t *state, void *user_data) { layer_off(_BASE); }

void dance_layer_LTRM(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {  // TAP ONCE
        layer_on(_BASE);
    } else {  // TAP TWICE OR MORE
        layer_on(_BASE);
        last_stayed_layer = _LTRM;
    }
}
void dance_layer_reset_LTRM(qk_tap_dance_state_t *state, void *user_data) { layer_off(_LTRM); }

qk_tap_dance_action_t tap_dance_actions[] = {
	[LAYER_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_layer_BASE, dance_layer_reset_BASE),
    [LAYER_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_layer_LTRM, dance_layer_reset_LTRM),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
	if (index == 0) {
        if (clockwise) {
                midi_send_cc(&midi_device, 0, current_MIDI_ccNumber, 65);
            } else {
                midi_send_cc(&midi_device, 0, current_MIDI_ccNumber, 63);
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
	   oled_write_P(PSTR("LIGHTROOM 1"), false);	   
	     oled_set_cursor(0, 6);
	     oled_write_P(PSTR("FUNC "), false);
       oled_write(current_ltrm_func, false);
       oled_write_P(PSTR("           "), false);
	   break;
	   case _LTRM :
   	 oled_set_cursor(0, 4);
	   oled_write_P(PSTR("LIGHTROOM 2"), false);
	     oled_set_cursor(0, 6);
	     oled_write_P(PSTR("FUNC "), false);
       oled_write(current_ltrm_func, false);
       oled_write_P(PSTR("           "), false);
	   break;
   }
	return false;
}
#endif

// copy below and compile
//qmk compile -kb shutterslap -km default
