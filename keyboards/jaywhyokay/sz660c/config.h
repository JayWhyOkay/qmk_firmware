/* Copyright 2021 Justin Kim
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "config_common.h"

/* USB device descriptor parameters*/
#define VENDOR_ID       0x594b
#define PRODUCT_ID      0x4643
#define DEVICE_VER      0x1234
#define MANUFACTURER    Skimzor
#define PRODUCT         SZ660C

/* Matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 16

/* Matrix pin definitions */
#define MATRIX_ROW_PINS { E6, F7, B4, D4, D0, B3, B2 }
#define MATRIX_COL_PINS { D5, F0, C7, D7, F1, C6, D3, D6, F4, F5, B6, D2, B5, D1, F6, B1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* DEBOUNCE Config Options */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#ifdef KEY_LOCK_ENABLE
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
#endif

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
