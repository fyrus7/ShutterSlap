#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 5

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 */
#define MATRIX_ROW_PINS { B2, B6 }
#define MATRIX_COL_PINS { C6, D7, E6, B4, B5 }

#define TAPPING_TERM 300

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Rotary encoders */
#define ENCODERS_PAD_A { B1, F6, F4 }
#define ENCODERS_PAD_B { B3, F7, F5 }
#define ENCODER_RESOLUTION 4

/* Midi options */
#define MIDI_BASIC
#define MIDI_ADVANCE

/* Debounce reduces chatter (unintended double-presses)
 - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* disable action features */
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0


/* enable oled display */
#define OLED_DISPLAY_128X64
#define OLED_FONT_H "keymaps/default/glcdfont.c"
#define OLED_DISABLE_TIMEOUT


//qmk compile -kb shutterslap -km default