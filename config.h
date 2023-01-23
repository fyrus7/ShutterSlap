#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 5

/* Keyboard Matrix IDHAM */
#define MATRIX_ROW_PINS { F5, F4, B6 }
#define MATRIX_COL_PINS { B2, B3, B1, F7, F6 }

#define LAYER_STATE_8BIT

#define TAPPING_TERM 300

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Rotary encoders */
#define ENCODERS_PAD_A { B5, E6, C6 }
#define ENCODERS_PAD_B { B4, D7, D4 }
#define ENCODER_RESOLUTION 4
#define ENCODER_DIRECTION_FLIP

/* Debounce reduces chatter (unintended double-presses)
 - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* disable action features */
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
#define NO_MUSIC_MODE


/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

/* enable oled display */
#define OLED_DISPLAY_128X64
#define OLED_FONT_H "font/glcdfont.c"


// make shutterslap:default
