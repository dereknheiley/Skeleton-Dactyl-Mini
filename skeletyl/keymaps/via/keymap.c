#include QMK_KEYBOARD_H

const uint16_t PROGMEM QW_COMBO[]       = {KC_Q, KC_W, COMBO_END};

const uint16_t PROGMEM AS_COMBO[]       = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM SD_COMBO[]       = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM DF_COMBO[]       = {KC_D, KC_F, COMBO_END};

const uint16_t PROGMEM ZX_COMBO[]       = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM XC_COMBO[]       = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM CV_COMBO[]       = {KC_C, KC_V, COMBO_END};

const uint16_t PROGMEM OP_COMBO[]       = {KC_O, KC_P, COMBO_END};

const uint16_t PROGMEM JK_COMBO[]       = {KC_J, KC_K   , COMBO_END};
const uint16_t PROGMEM KL_COMBO[]       = {KC_K, KC_L   , COMBO_END};
const uint16_t PROGMEM LSCLM_COMBO[]    = {KC_L, KC_SCLN, COMBO_END};

const uint16_t PROGMEM DOTSLASH_COMBO[] = {KC_DOT , KC_SLSH, COMBO_END};
const uint16_t PROGMEM COMMDOT_COMBO[]  = {KC_COMM, KC_DOT , COMBO_END};
const uint16_t PROGMEM MCOMM_COMBO[]    = {KC_M   , KC_COMM, COMBO_END};

/* Declare the combos you will use here, and DON'T FORGET TO UPDATE config.h to set #define COMBO_COUNT number_of_combos_herez */
enum combos {
  QW_TAB,

  SD_LBRC,
  DF_RBRC,

  // ZX_LBRC,
  XC_LALT,
  // CV_RBRC,y

  OP_BSLS,

  JK_LPRN,
  KL_RPRN,
  LSCLM_QUOT,

  // DOTSLASH_EQL, 
  COMMDOT_RALT,
  // MCOMM_MINS
};

/* DON'T FORGET TO UPDATE config.h to set #define COMBO_COUNT number_of_combos_herez */
combo_t key_combos[COMBO_COUNT] = {
  [QW_TAB]  = COMBO(QW_COMBO, KC_TAB),

  [SD_LBRC] = COMBO(SD_COMBO, KC_LBRC),
  [DF_RBRC] = COMBO(DF_COMBO, KC_RBRC),

  // [ZX_LBRC] = COMBO(ZX_COMBO, KC_LBRC),
  [XC_LALT] = COMBO(XC_COMBO, KC_LALT),
  // [CV_RBRC] = COMBO(CV_COMBO, KC_RBRC),

  [OP_BSLS] = COMBO(OP_COMBO, KC_BSLS),

  [JK_LPRN]    = COMBO(JK_COMBO, KC_LPRN),
  [KL_RPRN]    = COMBO(KL_COMBO, KC_RPRN),
  [LSCLM_QUOT] = COMBO(LSCLM_COMBO, KC_QUOT),

  // [DOTSLASH_EQL] = COMBO(DOTSLASH_COMBO, KC_EQL),
  [COMMDOT_RALT] = COMBO(COMMDOT_COMBO, KC_RALT),
  // [MCOMM_MINS]   = COMBO(MCOMM_COMBO, KC_MINS)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
         KC_Q , KC_W, KC_E, KC_R, KC_T,                                                   KC_Y, KC_U , KC_I  , KC_O  ,        KC_P,
  LSFT_T(KC_A), KC_S, KC_D, KC_F, KC_G,                                                   KC_H, KC_J , KC_K  , KC_L  , RSFT_T(KC_SCLN),
  LCTL_T(KC_Z), KC_X, KC_C, KC_V, LT(3,KC_B),                                             KC_N, KC_M ,KC_COMM, KC_DOT, RCTL_T(KC_SLSH),
                              KC_LGUI, LT(1,KC_SPC), KC_ENT,       KC_ESC, LT(2,KC_BSPC), RSFT_T(KC_DEL)
  ),

  [1] = LAYOUT(
    KC_GRV , KC_PGUP, KC_UP  , KC_PGDN, KC_VOLU,                                       KC_VOLU, KC_PGUP, KC_UP  , KC_PGDN, KC_BSLS,
    KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_VOLD,                                       KC_VOLD, KC_LEFT, KC_DOWN, KC_RGHT, KC_QUOT,
    KC_F5  , KC_F6  , KC_F7  , KC_F8  , LT(3,KC_F10),                                  KC_MUTE, KC_END , KC_MINS,  KC_EQL, KC_QUES,
                                    KC_TRNS, KC_TRNS, RESET,             KC_TRNS, KC_TRNS, KC_TRNS
  ), 

  // [1] = LAYOUT(
  //   KC_GRV , KC_PGUP, KC_UP  , KC_PGDN, KC_VOLU,                                       KC_VOLU, KC_P7, KC_P8  , KC_P9, KC_PMNS
  //   KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_VOLD,                                       KC_VOLD, KC_P4, KC_P5  , KC_P6, KC_PPLS,
  //   KC_F5  , KC_F6  , KC_F7  , KC_F8  , LT(3,KC_F10),                                  KC_MUTE, KC_P1 , KC_P2,  KC_P3, KC_PENT,
  //                                   KC_TRNS, KC_TRNS, RESET,             KC_TRNS, KC_TRNS, KC_P0
  // ), 

  [2] = LAYOUT(
    KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                                  KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
      KC_F1,   KC_F2,   KC_F3,   KC_F4,   LT(3,KC_F5),                              KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,
                                    KC_TRNS, KC_TRNS, KC_TRNS,       RESET, KC_TRNS, KC_TRNS
  ),

  [3] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                        KC_TRNS, KC_BSPC, KC_ESC,    KC_TRNS, KC_TRNS, KC_TRNS
  )
};