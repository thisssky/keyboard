#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001

#define MANUFACTURER    "qmkbuilder"
#define PRODUCT         "keyboard"


/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 13

/* key matrix pins */
#define MATRIX_ROW_PINS { D3, D2, D1, D0, C6 }
#define MATRIX_COL_PINS { D4, D7, E6, B4, B5, F4, F5, F6, F7, B1, B3, B2, B6 }
/*#define UNUSED_PINS*/

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
#define MK_3_SPEED

#endif
