/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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
//#define USE_SERIAL
#define USE_I2C

#define MASTER_LEFT
//#define MASTER_RIGHT
//#define EE_HANDS



#ifdef SUBPROJECT_rev1
    #include "../../rev1/config.h"
#endif
#ifdef SUBPROJECT_rev2
    #include "../../rev2/config.h"
#endif
#ifdef SUBPROJECT_rev2fliphalf
	#include "../../rev2fliphalf/config.h"
#endif


#define RGBLIGHT_ANIMATIONS
#undef RGB_DI_PIN
#define RGB_DI_PIN D3
#undef RGBLED_NUM
#define RGBLED_NUM 6
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

// prevent stuck modifieres, mine get stuck all the time
#define PREVENT_STUCK_MODIFIERS

// wiring of each half
#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS { D7, E6, B4, B5 }
//#define MATRIX_ROW_PINS { B5, B4, E6, D7 }

#undef MATRIX_COL_PINS
// Using D4 because I jumped the pins due to a broken trace under B1
#define MATRIX_COL_PINS {F6, F7, D4, B3, B2, B6}
//#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3 }
