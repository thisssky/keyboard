#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 13

/* key matrix pins */
#define MATRIX_ROW_PINS { D3, D2, D1, D0, D4 }
#define MATRIX_COL_PINS { C6, D7, E6, B4, B5, F4, F5, F6, F7, B1, B3, B2, B6 }


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL


/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#endif
