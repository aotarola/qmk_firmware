/*
Copyright 2019 Nicolas <BuraBure> Fernandez

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
#define PRODUCT Dactyl-Manuform (Custom)
#define USE_I2C
#define SPLIT_HAND_PIN F5
// #define SOFT_SERIAL_PIN D0

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS \
    { D3, D2, D4, C6, D7, E6 }
#define MATRIX_COL_PINS \
    { B6, B2, B3, B1, F7, F6 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TOGGLE 2

#define MOUSEKEY_TIME_TO_MAX    60

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
/* Tap dancing support */
#define TAPPING_TERM 200

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD

/* Requires to both keys to be held for TAPPING_TERM */
#define IGNORE_MOD_TAP_INTERRUPT
