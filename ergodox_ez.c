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

#include "ergodox_ez.h"



#ifdef DYNAMIC_MACRO_ENABLE
static bool is_dynamic_recording = false;
static uint16_t dynamic_loop_timer;

void dynamic_macro_record_start_user(void) {
    is_dynamic_recording = true;
    dynamic_loop_timer = timer_read();
    ergodox_right_led_1_on();
}

void dynamic_macro_record_end_user(int8_t direction) {
    is_dynamic_recording = false;
    layer_state_set_user(layer_state);
}
#endif

void matrix_scan_kb(void) {
#ifdef DYNAMIC_MACRO_ENABLE
    if (is_dynamic_recording) {
        ergodox_right_led_1_off();
        // if (timer_elapsed(dynamic_loop_timer) > 5)
        {
            static uint8_t counter;
            counter++;
            if (counter > 100) ergodox_right_led_1_on();
            dynamic_loop_timer = timer_read();
        }
    }
#endif

#ifdef CAPS_LOCK_STATUS
    led_t led_state = host_keyboard_led_state();
    if(led_state.caps_lock) {
        ergodox_right_led_3_on();
    }
    else {
        uint8_t layer = get_highest_layer(layer_state);
        if(layer != 1) {
        ergodox_right_led_3_off();
        }
    }
#endif

    matrix_scan_user();
}
