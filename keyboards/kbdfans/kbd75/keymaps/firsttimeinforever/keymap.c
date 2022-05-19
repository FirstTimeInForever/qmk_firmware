#include QMK_KEYBOARD_H

#define ALEFT LALT(KC_LEFT)
#define ARIGHT LALT(KC_RIGHT)
#define ADOWN LALT(KC_DOWN)
#define AUP LALT(KC_UP)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_INS,   KC_HOME, 
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_DEL,   KC_BSPC,  KC_END,  
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_GRV,             KC_END, 
    KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_PGUP, 
    KC_LSFT,  KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_PGDN, 
    KC_LCTL,  KC_LALT,  KC_LGUI,                      KC_SPC,   XXXXXXX,  MO(1),                        MO(2),    MO(3),    MO(3),    KC_LEFT,  KC_DOWN,  KC_RGHT
  ),

  [1] = LAYOUT(
    _______,   _______,   _______,   _______,   _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
    _______,   _______,   _______,   _______,   _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
    KC_CLCK,LALT(KC_Q),   KC_UP,  LALT(KC_E),   KC_F4,     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______, 
    _______,   KC_LEFT,   KC_DOWN,  KC_RIGHT,   _______,LALT(KC_G),  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______, 
    _______,   _______,   _______,   _______,   _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______, 
    _______,   _______,   _______,                         _______,  _______,  _______,                      _______,  _______,  _______,  _______,  _______,  _______
  ),

  [2] = LAYOUT(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
    _______,  _______,  AUP,      _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______, 
    _______,  ALEFT,    ADOWN,    ARIGHT,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______, 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______, 
    _______,  _______,  _______,                      _______,  _______,  _______,                      _______,  _______,  _______,  _______,  _______,  _______
  ),

  [3] = LAYOUT(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RESET,    RESET,    RESET,    RESET,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MPLY,  KC_MPRV,  KC_MNXT,  _______,            _______, 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_VOLD,  KC_VOLU,            _______,            LCG_SWP, 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_BRIU,  KC_BRID,  _______,            _______,  _______,  LCG_NRM, 
    _______,  _______,  _______,                      _______,    RESET,  _______,                      _______,  _______,  _______,  _______,  _______,  _______
  ),

  [4] = LAYOUT(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______, 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______, 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______, 
    _______,  _______,  _______,                      _______,  _______,  _______,                      _______,  _______,  _______,  _______,  _______,  _______
  )
};
