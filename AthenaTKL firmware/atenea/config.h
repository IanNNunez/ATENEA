#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define VENDOR_ID       0x6B62
#define PRODUCT_ID      0x8769
#define DEVICE_VER      0x0001
#define MANUFACTURER    NEWblack01
#define PRODUCT         ATENEA

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 18

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
/*                         0   1   2   3   4  5   6   7   8   9   10  11  12  13  14  15  16  17*/
#define MATRIX_ROW_PINS { C2, C3, C4, C5, C6, C7 }
#define MATRIX_COL_PINS { A0, B0, A1, B1, A2, B2, A3, B3, A4, B4, A5, A6, A7, D6, D5, D1, D0, D7 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#endif