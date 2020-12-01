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
#define DIODE_DIRECTION COL2ROW
#define MATRIX_COL_PINS { E6, C6, B1, B3, B2 }
#define MATRIX_ROW_PINS { B5, F7, F6, B6 }
#define DEBOUNCE 5
#define SOFT_SERIAL_PIN D0
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
#define PERMISSIVE_HOLD
#define USE_SERIAL
#define MASTER_LEFT
