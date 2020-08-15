/*
 * Copyright 2020 Gabbla <zampierigabriele.ist@gmai.com>
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

#ifndef CONFIG_SPANK
#define CONFIG_SPANK

/* USB settings */
#define VENDOR_ID       0xC0DE
#define PRODUCT_ID      0xCAFE
#define DEVICE_VER      0x0001
#define MANUFACTURER    Gabbla
#define PRODUCT         Spank

/* Matrix configuration */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6
#define DIODE_DIRECTION COL2ROW

/* Note: These are not used for arm boards. They're here purely as documentation. */
#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS

#define MATRIX_ROW_PINS { A10, A9, A8, B15, C13, C14, C15, A2 }
#define MATRIX_COL_PINS { B11, B10, B2, B1, A7, B0 }

#define UNUSED_PINS

/* Encoder support */
#define ENCODERS_PAD_A { B12 }
#define ENCODERS_PAD_B { B13 }

/* DIP switch support */
#define DIP_SWITCH_PINS { B14, A15, A0, B9 }

/* RGB matrix configuration */
#define RGB_DI_PIN A1
#define DRIVER_LED_TOTAL 48 /* TODO depends on layout */

#endif /* end of include guard: CONFIG_SPANK */
