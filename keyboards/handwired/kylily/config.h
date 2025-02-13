/*
Copyright 2022 Sven Wessiepe 

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


/* USB Device descriptor parameter */

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x4B4C // "KL"
#define DEVICE_VER      0x0100
#define MANUFACTURER    SvenW
#define PRODUCT         kylily

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2 }


#define DIODE_DIRECTION COL2ROW
/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define SOFT_SERIAL_PIN D2

#define ENCODERS_PAD_A { B5 }
#define ENCODERS_PAD_B { B6 }
#define ENCODERS_PAD_A_RIGHT { B6 }
#define ENCODERS_PAD_B_RIGHT { B5 }
#define ENCODER_RESOLUTION 2


#define TAPPING_TOGGLE 2