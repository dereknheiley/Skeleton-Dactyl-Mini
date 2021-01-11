#pragma once
#include "config_common.h"
#define VENDOR_ID 0x2F8A
#define PRODUCT_ID 0x1828
#define DEVICE_VER 0x0001
#define MANUFACTURER HID Technologies
#define PRODUCT HID Technologies Skeletyl
#define DESCRIPTION A mini high-end split keyboard

#define MATRIX_ROWS 8
#define MATRIX_COLS 5

// dactyl manuform pins
#define DIODE_DIRECTION COL2ROW
#define MATRIX_COL_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F7, B1, B3, B2 }

// HIDTech bastyl pins
// #define DIODE_DIRECTION ROW2COL
// #define MATRIX_COL_PINS { E6, C6, B1, B3, B2 }
// #define MATRIX_ROW_PINS { B5, F7, F6, B6 }

// use an actual pin connecting D1 to GND on right hand side to indicate that it is right, no pin on the left controller makes it the master
#define SPLIT_HAND_PIN D1

// #define EE_HANDS
/* flash each half to known what side it is
 * avrdude - p m32u4 -c avr109 -P /dev/.... -U flash:w:hidtechca_skeletyl_via.hex -U eeprom:w:quantum/split/common/eeprom-lefthand.eep
 * avrdude - p m32u4 -c avr109 -P /dev/.... -U flash:w:hidtechca_skeletyl_via.hex -U eeprom:w:quantum/split/common/eeprom-righthand.eep
 * dfu-programmer atmega32u4 flash --force --eeprom /Applications/QMK Toolbox.app/Contents/Resources/reset.eep
 * dfu-programmer atmega32u4 flash --force --eeprom quantum/split_common/eeprom-lefthand.eep
 * dfu-programmer atmega32u4 flash --force --eeprom quantum/split_common/eeprom-righthand.eep
 */

#define USE_SERIAL
#define SOFT_SERIAL_PIN D0

#define DEBOUNCE 5

/* this combination of PERMISSIVE_HOLD being off and IGNORE_MOD_TAP_INTERRUPT being on 
 * helps with keys like A are also SHIFT when held */
// #define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

#define TAPPING_TERM 200

#define COMBO_COUNT 9
#define COMBO_TERM 20
