#include QMK_KEYBOARD_H
#include "keymap_steno.h"

extern uint8_t is_master;

enum layer_number {
  _STENO = 0
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_STENO] = LAYOUT(
  //,-----------------------------------------------------|                 |-----------------------------------------------------.
       KC_ESC, KC_MUTE, KC_VOLD, KC_VOLU,   KC_UP, KC_DOWN,                   KC_LEFT,KC_RIGHT,    KC_0, KC_MINS,  KC_EQL, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                 |--------+--------+--------+--------+--------+--------|
      KC_MPLY,  STN_N1,  STN_N2,  STN_N3,  STN_N4,  STN_N5,                    STN_N6,  STN_N7,  STN_N8,  STN_N9,  STN_N9,    KC_A,
  //|--------+--------+--------+--------+--------+--------|                 |--------+--------+--------+--------+--------+--------|
       KC_TAB,  STN_S1,  STN_TL,  STN_PL,  STN_HL, STN_ST1,                   STN_ST3,  STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
  //|--------+--------+--------+--------+--------+--------|                 |--------+--------+--------+--------+--------+--------|
    KC_LSHIFT,  STN_S2,  STN_KL,  STN_WL,  STN_RL, STN_ST2,                   STN_ST4,  STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
              KC_LCTRL, KC_LGUI,   STN_A,   STN_O, STN_ST2, KC_SPC,  KC_SPC,  STN_ST4,   STN_E,   STN_U, KC_ASTR, KC_ENTER
          //`------------------------------------------------------------------------------------------------------------'
  )
};

// Enable steno on launch - https://docs.qmk.fm/#/feature_stenography
void matrix_init_user() {
  steno_set_mode(STENO_MODE_GEMINI); // or STENO_MODE_BOLT
}
