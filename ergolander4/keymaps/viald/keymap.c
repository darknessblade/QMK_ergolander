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
#include "./common/oled_helper.h"

enum layer_number {
  _BASE,
  _LOWER,
  _RAISE,
  _ADJUST,
};

enum custom_keycodes {
  KANJI = SAFE_RANGE,
  RGBRST
};

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

#define L_BASE _BASE
#define L_LOWER ((layer_state_t)1<<_LOWER)
#define L_RAISE ((layer_state_t)1<<_RAISE)
#define L_ADJUST ((layer_state_t)1<<_ADJUST)
#define L_ADJUST_1 (L_ADJUST|L_LOWER)
#define L_ADJUST_2 (L_ADJUST|L_RAISE)

#ifdef OLED_ENABLE
#include <stdio.h>
#include <string.h>
#include "../common/oled_helper.h"

typedef struct {
  uint8_t state;
  char name[8];
}LAYER_DISPLAY_NAME;

#define LAYER_DISPLAY_MAX 6
const LAYER_DISPLAY_NAME layer_display_name[LAYER_DISPLAY_MAX] = {
  {L_BASE, "Base"},
  {L_LOWER, "Lower"},
  {L_RAISE, "Raise"},
  {L_ADJUST, "Adjust"},
  {L_ADJUST_1, "Adjust"},
  {L_ADJUST_2, "Adjust"}
};

static inline const char* get_leyer_status(void) {

  for (uint8_t i = 0; i < LAYER_DISPLAY_MAX; ++i) {
    if (layer_state == 0 && layer_display_name[i].state == default_layer_state) {

      return layer_display_name[i].name;
    } else if (layer_state != 0 && (layer_display_name[i].state == layer_state)) {

      return layer_display_name[i].name;
    }
  }

  return "?";
}

static char layer_status_buf[24] = "Layer state ready.\n";
static inline void update_keymap_status(void) {

  snprintf(layer_status_buf, sizeof(layer_status_buf) - 1, "OS:%s Layer:%s\n",
    keymap_config.swap_lalt_lgui? "win" : "mac", get_leyer_status());
}

static inline void render_keymap_status(void) {

  oled_write(layer_status_buf, false);
}

static inline void render_status(void) {

  UPDATE_LED_STATUS();
  RENDER_LED_STATUS();
  update_keymap_status();
  render_keymap_status();
  RENDER_LOCK_STATUS();
  RENDER_KEY_STATUS();
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {

  if (is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

bool oled_task_user(void) {

  if (is_keyboard_master()) {
    render_status();
  } else {
    render_logo();
  }
  return false;
}

#endif