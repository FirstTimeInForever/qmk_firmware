#include QMK_KEYBOARD_H

#define ALEFT LALT(KC_LEFT)
#define ARIGHT LALT(KC_RIGHT)
#define ADOWN LALT(KC_DOWN)
#define AUP LALT(KC_UP)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  LAYOUT_all_split_spacebar(
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,   KC_DEL, KC_BSPC,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,      KC_BSLS,
      KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NO,        KC_ENT,
      KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,  KC_UP,   KC_END,
      KC_LGUI, KC_LALT, KC_LCTL,          KC_SPC,                 MO(1),         MO(2),    MO(3),   MO(3),    KC_LEFT,  KC_DOWN, KC_RIGHT),
  LAYOUT_all_split_spacebar(
      KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,   KC_DEL, KC_BSPC,
      KC_TAB,LALT(KC_Q),KC_UP, LALT(KC_E),KC_F4,  KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,      KC_GRV,
      KC_CAPS, KC_LEFT, KC_DOWN, KC_RIGHT,KC_F,LALT(KC_G),KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NO,        KC_ENT,
      KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,  KC_UP,   KC_END,
      KC_LGUI, KC_LALT, KC_LCTL,          KC_SPC,                 MO(1),          MO(2),   MO(3),   MO(3),    KC_LEFT,  KC_DOWN, KC_RIGHT),
  LAYOUT_all_split_spacebar(
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,   KC_DEL, KC_BSPC,
      KC_TAB,  KC_Q,    AUP,     KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,      KC_BSLS,
      KC_ESC,  ALEFT,   ADOWN,   ARIGHT,  KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NO,        KC_ENT,
      KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,  KC_UP,   KC_END,
      KC_LGUI, KC_LALT, KC_LCTL,          KC_SPC,                 MO(1),          MO(2),   MO(3),   MO(3),    KC_LEFT,  KC_DOWN, KC_RIGHT),
  LAYOUT_all_split_spacebar(
      KC_ESC,  KC_VOLD, KC_VOLU, KC_MPLY, KC_MPRV,KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,   KC_PSCR, KC_BSPC,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_MPLY, KC_MPRV,  KC_MNXT,      KC_BSLS,
      KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_VOLD, KC_VOLU,  KC_NO,        KC_ENT,
      KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_BRIU, KC_BRID, KC_SLSH,  KC_RSFT,  KC_UP,   KC_END,
      KC_LGUI, KC_LALT, KC_LCTL,          KC_SPC,                 MO(1),          MO(2),   MO(3),   MO(3),    KC_LEFT,  KC_DOWN, KC_RIGHT),
};
