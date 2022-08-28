/* Copyright 2020 Dimitris Papavasiliou <dpapavas@protonmail.ch>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBEEF
#define PRODUCT_ID      0x2718
#define DEVICE_VER      0x0001
#define MANUFACTURER    Nisker
#define PRODUCT         Lagrange

#define SPLIT_HAND_PIN B10

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN B6     // USART TX pin
#define SERIAL_USART_RX_PIN B7     // USART RX pin
#define SERIAL_USART_SPEED 921600

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE

/* key matrix size */
#define MATRIX_ROWS 14
#define MATRIX_COLS 6
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

#define LED_CAPS_LOCK_PIN C13
#define LED_PIN_ON_STATE 0

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD

//No-Go pins: A8, A9, A11, A12, B2
//Maybe not A9. A10 needs to be pulled high, else it wont program.

/* pin-out */
#define MATRIX_ROW_PINS { B14, B15, A10, A15, B3, B4, B5 }
#define MATRIX_COL_PINS { B13, B0, A0, A1, A2, A3} 

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

//SPI EEPROM
#define EXTERNAL_EEPROM_SPI_SLAVE_SELECT_PIN A4
#define EXTERNAL_EEPROM_SPI_CLOCK_DIVISOR 4
#define EXTERNAL_EEPROM_BYTE_COUNT 65536
#define EXTERNAL_EEPROM_PAGE_SIZE 128

#define SPI_DRIVER SPID1
#define SPI_SCK_PIN A5
#define SPI_MOSI_PIN A6
#define SPI_MISO_PIN A7

//VIAL MACRO
#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 65535
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

//Speaker
#define AUDIO_PIN A8			//B1
#define AUDIO_PWM_DRIVER PWMD1	//3
#define AUDIO_PWM_CHANNEL 1		//4
#define AUDIO_PWM_PAL_MODE 1	//2
#define AUDIO_STATE_TIMER GPTD4
#define AUDIO_CLICKY

#ifdef AUDIO_CLICKY2
    #define AUDIO_CLICKY_ON
    #define AUDIO_CLICKY_FREQ_DEFAULT 261.63f
    #define AUDIO_CLICKY_FREQ_MIN 65.41f
    #define AUDIO_CLICKY_FREQ_MAX 1046.5f
    #define AUDIO_CLICKY_FREQ_FACTOR 1.61803f // golden ratio
    #define AUDIO_CLICKY_FREQ_RANDOMNESS 17.0f
#endif  
#ifdef AUDIO_CLICKY
#define AUDIO_CLICKY_FREQ_DEFAULT 2360.0f
#define AUDIO_CLICKY_FREQ_MAX 9500.0f
#define AUDIO_CLICKY_FREQ_RANDOMNESS 0.05f
#endif  

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

//Space cadet 
/*
#define LSPO_KEYS KC_LSFT, KC_LSFT, KC_8
#define RSPC_KEYS KC_RSFT, KC_RSFT, KC_9
#define RCPC_KEYS KC_RCTL, KC_RSFT, KC_9
#define LAPO_KEYS KC_LALT, KC_LSFT, KC_8
#define RAPC_KEYS KC_RALT, KC_RSFT, KC_9
*/