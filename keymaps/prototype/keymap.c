#include "TP_AVR.h"

#include "keymap_jp.h"

//ThinkPad Original Key
//#define TP_Fn	KC_F	// Fn
#define TP_PWR1	KC_PWR 	// Power (X220/230)
#define TP_PWR2	KC_PWR 	// Power (X40-X201)
#define TP_AITV	KC_MYCM	// Accsess IBM or ThinkVantage
#define TP_SMUT	KC_MUTE	// Speaker Mute
#define TP_MMUT	KC_WAKE	// Mic Mute
#define TP_VOLU KC_VOLU	// Speaker Volume Up
#define TP_VOLD	KC_VOLD	// Speaker Volume Down
#define TP_BRBA	KC_WBAK	// Browser Back(Left)
#define TP_BRNE	KC_WFWD	// Browser Next(Right)

/*
//Japanese Key
#define JP_ZHTG KC_GRV  // hankaku/zenkaku|kanzi
#define JP_CIRC KC_EQL  // ^, ~
#define JP_AT   KC_LBRC // @, `
#define JP_LBRC KC_RBRC // [, {
#define JP_COLN KC_QUOT // :, *
#define JP_RBRC KC_NUHS // ], }
#define JP_BSLS KC_INT1 // \, _
#define JP_KANA KC_INT2 // katakana/hiragana|ro-mazi
#define JP_YEN  KC_INT3 // yen, |
#define JP_HENK KC_INT4 // henkan
#define JP_MHEN KC_INT5 // muhenkan
*/

enum TP_layers {
    _QWERTY = 0,
    _FN,
};

enum TP_keycodes {
  QWERTY = SAFE_RANGE,
  FN
};

//ThinkPad X220 JP Default KEYMAP
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = KEYMAP(
		KC_TILD, KC_F1,   KC_F2,   KC_5,   KC_6,   KC_EQL,   KC_F8,   KC_MINS,  KC_F9,   KC_INS,   KC_DEL,    KC_PGUP,   KC_HOME,   KC_NO,     KC_NO,     KC_LCTRL, \
		KC_1,    KC_2,    KC_3,    KC_4,   KC_7,   KC_8,     KC_9,    KC_0,     KC_F10,  KC_F12,   KC_F11,    KC_PGDN,   KC_END,    KC_PSCR,   KC_NO,     KC_NO,    \
		KC_Q,    KC_W,    KC_E,    KC_R,   KC_U,   KC_I,     KC_O,    KC_P,     JP_YEN,  KC_NO,    TP_VOLU,   TP_PWR2,   KC_NO,     KC_LSCR,   KC_NO,     KC_NO,    \
		KC_TAB,  KC_CAPS, KC_F3,   KC_T,   KC_Y,   JP_LBRC,  KC_F7,   JP_AT,    KC_BSPC, KC_LGUI,  TP_VOLD,   KC_NO,     KC_NO,     KC_NO,     KC_LSFT,   KC_NO,    \
		KC_A,    KC_S,    KC_D,    KC_F,   KC_J,   KC_K,     KC_L,    KC_SCLN,  KC_BSLS, KC_NO,    TP_SMUT,   KC_APP,    KC_NO,     KC_NO,     KC_NO,     KC_NO,    \
		KC_ESC,  FN,      KC_F4,   KC_G,   KC_H,   KC_F6,    JP_HENK, KC_QUOT,  KC_F5,   KC_NO,    TP_AITV,   KC_NO,     KC_UP,     KC_LALT,   KC_NO,     KC_NO,    \
		KC_Z,    KC_X,    KC_C,    KC_V,   KC_M,   KC_COMM,  KC_DOT,  JP_RBRC,  KC_ENT,  KC_NO,    TP_MMUT,   TP_BRBA,   KC_PAUS,   KC_NO,     KC_RSFT,   KC_RCTRL, \
		JP_MHEN, TP_PWR1, KC_NO,   KC_B,   KC_N,   JP_BSLS,  JP_KANA, KC_SLSH,  KC_SPC,  KC_RGHT,  KC_DOWN,   TP_BRNE,   KC_LEFT,   KC_RALT,   KC_NO,     KC_NO     \
	),
	
	[_FN] = KEYMAP(
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_EJCT, KC_NO,    KC_NO,     KC_NO,     KC_BRIU,   KC_NO,     KC_NO,     KC_NO,    \
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,     KC_NO,     KC_BRID,   KC_SYSREQ, KC_NO,     KC_NO,    \
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,     KC_NO,     KC_NO,     KC_LNUM,   KC_NO,     KC_NO,    \
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,    \
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,    \
		KC_NO,   KC_NO,   KC_SLEP, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,    \
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,     KC_NO,     KC_BRK,    KC_NO,     KC_NO,     KC_NO,    \
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO     \
	)
		
};

/*
//Default QWERTY
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_TILD, KC_F1,   KC_F2,   KC_5,   KC_6,   KC_EQL,   KC_F8,   KC_MINS,  KC_F9,   KC_INS,   KC_DEL,    KC_PGUP,   KC_HOME,   KC_NO,     KC_NO,     KC_LCTRL, \
		KC_1,    KC_2,    KC_3,    KC_4,   KC_7,   KC_8,     KC_9,    KC_0,     KC_F10,  KC_F12,   KC_F11,    KC_PGDN,   KC_END,    KC_PSCR,   KC_NO,     KC_NO,    \
		KC_Q,    KC_W,    KC_E,    KC_R,   KC_U,   KC_I,     KC_O,    KC_P,     JP_YEN,  KC_NO,    TP_VOLU,   KC_NO,     KC_NO,     KC_LSCR,   KC_NO,     KC_NO,    \
		KC_TAB,  KC_CAPS, KC_F3,   KC_T,   KC_Y,   JP_LBRC,  KC_F7,   JP_AT,    KC_BSPC, KC_LGUI,  TP_VOLD,   KC_NO,     KC_NO,     KC_NO,     KC_LSFT,   KC_NO,    \
		KC_A,    KC_S,    KC_D,    KC_F,   KC_J,   KC_K,     KC_L,    KC_SCLN,  KC_BSLS, KC_NO,    TP_SMUT,   KC_APP,    KC_NO,     KC_NO,     KC_NO,     KC_NO,    \
		KC_ESC,  KC_NO,   KC_F4,   KC_G,   KC_H,   KC_F6,    JP_HENK, KC_QUOT,  KC_F5,   KC_NO,    TP_AITV,   KC_NO,     KC_UP,     KC_LALT,   KC_NO,     KC_NO,    \
		KC_Z,    KC_X,    KC_C,    KC_V,   KC_M,   KC_COMM,  KC_DOT,  JP_RBRC,  KC_ENT,  KC_NO,    TP_MMUT,   TP_PL,     KC_PAUS,   KC_NO,     KC_RSFT,   KC_RCTRL, \
		JP_MHEN, KC_NO,   KC_NO,   KC_B,   KC_N,   JP_BSLS,  JP_KANA, KC_SLSH,  KC_SPC,  KC_RGHT,  KC_DOWN,   TP_PR,     KC_LEFT,   KC_RALT,   KC_NO,     KC_NO     \
		)

};
*/

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case FN:
      if (record->event.pressed) {
        layer_on(_FN);
      } else {
        layer_off(_FN);
      }
      return false;
      break;
  }
  return true;
}