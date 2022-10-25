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

/* key matrix size */
#define MATRIX_ROWS 14
#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 2)
#define MATRIX_COLS 6

#define COL_EXPANDED { true, true, true, true, true, true, true, false, false, false, false, false, false, false }
#define MATRIX_ONBOARD_ROW_PINS { 0, 0, 0, 0, 0, 0, 0, B0,  B1,  B2,  B3,  D2,  D3,  C6 }
#define MATRIX_ONBOARD_COL_PINS { F0,  F1,  F4,  F5,  F6,  F7 }
#define DIODE_DIRECTION COL2ROW
#define EXPANDER_COL_REGISTER GPIOB
#define EXPANDER_ROW_REGISTER GPIOA
#define MATRIX_EXPANDER_COL_PINS { 5, 4, 3, 2, 1, 0 }
#define MATRIX_EXPANDER_ROW_PINS { 0, 1, 2, 3, 4, 5, 6 }

/*
 * The debounce filtering reports a key/switch change directly,
 * without any extra delay. After that the debounce logic will filter
 * all further changes, until the key/switch reports the same state for
 * the given count of scans.
 * So a perfect switch will get a short debounce period and
 * a bad key will get a much longer debounce period.
 * The result is an adaptive debouncing period for each switch.
 *
 * If you don't define it here, the matrix code will default to
 * 5, which is now closer to 10ms, but still plenty according to
 * manufacturer specs.
 */

/* optical sensor details [not needed yet]
/* optical sensor settings */
/*#define SCROLL_DIVIDER 12
/*#define CPI_1 2000
/*#define CPI_2 4000
/*#define CPI_3 8000

/* Bootmagic Lite key configuration */
// #define BOOTMAGIC_LITE_ROW 0
// #define BOOTMAGIC_LITE_COLUMN 0

/*#define ADNS9800_CS_PIN SPI_SS_PIN
/*#define PMW33XX_CS_PIN SPI_SS_PIN


