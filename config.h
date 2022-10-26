/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2013 Oleg Kostyuk <cub.uanic@gmail.com>
Copyright 2015 ZSA Technology Labs Inc (@zsa)
Copyright 2020 Christopher Courtney <drashna@live.com> (@drashna)

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

/*----------------------------
/* key matrix size */
#define MATRIX_ROWS 14
#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 2)
#define MATRIX_COLS 6

/*----------------------------
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */

#define MATRIX_ONBOARD_ROW_PINS { GP0,  GP1,  GP2,  GP3,  GP4,  GP5,  GP6 }
#define MATRIX_ONBOARD_COL_PINS { GP9,  GP10, GP11, GP12,  GP13,  GP14 }
#define DIODE_DIRECTION COL2ROW

/*rp2040 settings*/
#define RP2040_FLASH_W25Q080

/*----------------------------
/* optical sensor details [not needed yet, to  be added later]
/* optical sensor settings */
/*#define SCROLL_DIVIDER 12
/*#define CPI_1 2000
/*#define CPI_2 4000
/*#define CPI_3 8000
*/

/* Bootmagic Lite key configuration 
/* #define BOOTMAGIC_LITE_ROW 0
/* #define BOOTMAGIC_LITE_COLUMN 0*/

/*#define ADNS9800_CS_PIN SPI_SS_PIN
/*#define PMW33XX_CS_PIN SPI_SS_PIN


*/