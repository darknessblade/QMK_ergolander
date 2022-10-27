/* Copyright 2022 IFo Hancroft
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

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
    /* Default Layer
    * *---------------------------------------------------------------------*                             *---------------------------------------------------------------------*
    * | =       | 1       | 2       | 3       | 4       | 5       | Left    |                             | RIGHT   | 6       | 7       | 8       | 9       | 0       | -       |
    * |---------+---------+---------+---------+---------+---------+---------|                             |---------+---------+---------+---------+---------+---------+---------|
    * | Del     | Q       | W       | E       | R       | T       | L1      |                             | L1      | Y       | U       | I       | O       | P       | \       |
    * |---------+---------+---------+---------+---------+---------+---------|                             |---------+---------+---------+---------+---------+---------+---------|
    * | BkSp    | A       | S       | D       | F       | G       | Hyper   |                             | Meh     | H       | J       | K       | L       | ;       | ' 		|
    * |---------+---------+---------+---------+---------+---------+---------*                             *---------+---------+---------+---------+---------+---------+---------|
    * | Shift   | Z/Ctrl  | X       | C       | V       | B       |                                                 | N       | M       | ,       | .       | //Ctrl  | Shift   |
    * |---------+---------+---------+---------+---------+---------*                                                 *---------+---------+---------+---------+---------+---------|
    * | Shift   | "       |    Shf  | Left    | Right   |                                                                     | Up      | Down    | [       | ]       | ~L1     |
    * *-------------------------------------------------*                                                                     *-------------------------------------------------*
    *
    *                                                             *-------------------*         *-------------------*
    *                                                             | V       | LGui    |         | Alt     | v       |
    *                                                   		  |---------+---------|         |---------+---------|
    *                                                  	  		  |  BkSp 	| Home    |         | PgUp    | Enter	| 
    *                                                   		  |---------+---------|			|---------+---------|
    *                                                   		  | Space   | End     |         | PgDn    |  Tab    |
    *                                               		      *---------+---------*         *---------+---------*
    */
    LAYOUT_ergolander(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,                                                    _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,                                                                        _______,  _______,  _______,  _______,  _______,

                                                                    _______,  _______,            _______,  _______,
                                                                    _______,  _______,            _______,  _______,
																	_______,  _______,            _______,  _______  
    ),

    LAYOUT_ergolander(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,                                                    _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,                                                                        _______,  _______,  _______,  _______,  _______,

                                                                    _______,  _______,            _______,  _______,
                                                                    _______,  _______,            _______,  _______,
																	_______,  _______,            _______,  _______  
    ),

    LAYOUT_ergolander(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,                                                    _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,                                                                        _______,  _______,  _______,  _______,  _______,

                                                                    _______,  _______,            _______,  _______,
                                                                    _______,  _______,            _______,  _______,
																	_______,  _______,            _______,  _______  
    ),

    LAYOUT_ergolander(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,                                                    _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,                                                                        _______,  _______,  _______,  _______,  _______,

                                                                    _______,  _______,            _______,  _______,
                                                                    _______,  _______,            _______,  _______,
																	_______,  _______,            _______,  _______  
    ),
};
