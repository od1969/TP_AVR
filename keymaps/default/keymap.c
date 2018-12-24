#include "TP_AVR.h"

#include "keymap_jp.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
	KEYMAP(
		KC_1,    KC_2,    KC_3,    KC_4,   KC_7,   KC_8,     KC_9,    KC_0,     KC_A,   KC_B,   KC_C,    KC_D,   KC_E,   KC_F,     KC_G,     KC_H, \
		KC_I,    KC_2,    KC_3,    KC_4,   KC_7,   KC_8,     KC_9,    KC_0,     KC_A,   KC_B,   KC_C,    KC_D,   KC_E,   KC_F,     KC_G,     KC_H, \
		KC_J,    KC_2,    KC_3,    KC_4,   KC_7,   KC_8,     KC_9,    KC_0,     KC_A,   KC_B,   KC_C,    KC_D,   KC_E,   KC_F,     KC_G,     KC_H, \
		KC_K,    KC_2,    KC_3,    KC_4,   KC_7,   KC_8,     KC_9,    KC_0,     KC_A,   KC_B,   KC_C,    KC_D,   KC_E,   KC_F,     KC_G,     KC_H, \
		KC_L,    KC_2,    KC_3,    KC_4,   KC_7,   KC_8,     KC_9,    KC_0,     KC_A,   KC_B,   KC_C,    KC_D,   KC_E,   KC_F,     KC_G,     KC_H, \
		KC_M,    KC_2,    KC_3,    KC_4,   KC_7,   KC_8,     KC_9,    KC_0,     KC_A,   KC_B,   KC_C,    KC_D,   KC_E,   KC_F,     KC_G,     KC_H, \
		KC_N,    KC_2,    KC_3,    KC_4,   KC_7,   KC_8,     KC_9,    KC_0,     KC_A,   KC_B,   KC_C,    KC_D,   KC_E,   KC_F,     KC_G,     KC_H, \
		KC_O,    KC_2,    KC_3,    KC_4,   KC_7,   KC_8,     KC_9,    KC_0,     KC_A,   KC_B,   KC_C,    KC_D,   KC_E,   KC_F,     KC_G,     KC_H, \
		KC_P,    KC_2,    KC_3,    KC_4,   KC_7,   KC_8,     KC_9,    KC_0,     KC_A,   KC_B,   KC_C,    KC_D,   KC_E,   KC_F,     KC_G,     KC_H \
		)
};
*/

	KEYMAP(
		KC_TILD, KC_F1,   KC_F2,   KC_5,   KC_6,   KC_EQL,   KC_F8,   KC_MINS,  KC_F9,   KC_INS,   KC_DEL,    KC_PGUP,   KC_HOME,   KC_NO,     KC_NO,     KC_LCTRL, \
		KC_1,    KC_2,    KC_3,    KC_4,   KC_7,   KC_8,     KC_9,    KC_0,     KC_F10,  KC_F12,   KC_F11,    KC_PGDN,   KC_END,    KC_PSCR,   KC_NO,     KC_NO,    \
		KC_Q,    KC_W,    KC_E,    KC_R,   KC_U,   KC_I,     KC_O,    KC_P,     JP_YEN,  KC_NO,    KC_VOLU,   KC_W,      KC_NO,     KC_LSCR,   KC_NO,     KC_NO,    \
		KC_TAB,  KC_CAPS, KC_F3,   KC_T,   KC_Y,   JP_LBRC,  KC_F7,   JP_AT,    KC_BSPC, KC_LGUI,  KC_VOLD,   KC_NO,     KC_NO,     KC_NO,     KC_LSFT,   KC_NO,    \
		KC_A,    KC_S,    KC_D,    KC_F,   KC_J,   KC_K,     KC_L,    KC_SCLN,  KC_BSLS, KC_NO,    KC_MUTE,   KC_APP,    KC_NO,     KC_NO,     KC_NO,     KC_NO,    \
		KC_ESC,  KC_F,    KC_F4,   KC_G,   KC_H,   KC_F6,    JP_HENK, KC_QUOT,  KC_F5,   KC_NO,    KC_T,      KC_NO,     KC_UP,     KC_LALT,   KC_NO,     KC_NO,    \
		KC_Z,    KC_X,    KC_C,    KC_V,   KC_M,   KC_COMM,  KC_DOT,  JP_RBRC,  KC_ENT,  KC_NO,    KC_M,      KC_P,      KC_PAUS,   KC_NO,     KC_RSFT,   KC_RCTRL, \
		JP_MHEN, KC_PWR,  KC_NO,   KC_B,   KC_N,   JP_BSLS,  JP_KANA, KC_SLSH,  KC_SPC,  KC_RGHT,  KC_DOWN,   KC_N,      KC_LEFT,   KC_RALT,   KC_NO,     KC_NO     \
		)
		
};

/*

#define JP_ZHTG KC_GRV  // hankaku/zenkaku|kanzi
#define JP_YEN  KC_INT3 // yen, |
#define JP_CIRC KC_EQL  // ^, ~
#define JP_AT   KC_LBRC // @, `
#define JP_LBRC KC_RBRC // [, {
#define JP_COLN KC_QUOT // :, *
#define JP_RBRC KC_NUHS // ], }
#define JP_BSLS KC_INT1 // \, _
#define JP_MHEN KC_INT5 // muhenkan
#define JP_HENK KC_INT4 // henkan
#define JP_KANA KC_INT2 // katakana/hiragana|ro-mazi

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_TILD, KC_F1,   KC_F2,   KC_5,   KC_6,   KC_EQL,   KC_F8,   KC_MINS,  KC_F9,   KC_INS,   KC_DEL,    KC_PGUP,   KC_HOME,   KC_NO,     KC_NO,     KC_LCTRL, \
		KC_1,    KC_2,    KC_3,    KC_4,   KC_7,   KC_8,     KC_9,    KC_0,     KC_F10,  KC_F12,   KC_F11,    KC_PGDN,   KC_END,    KC_PSCR,   KC_NO,     KC_NO,    \
		KC_Q,    KC_W,    KC_E,    KC_R,   KC_U,   KC_I,     KC_O,    KC_P,     JP_YEN,  KC_PWR,   KC_VOLU,   KC_W,      KC_NO,     KC_LSCR,   KC_NO,     KC_NO,    \
		KC_TAB,  KC_CAPS, KC_F3,   KC_T,   KC_Y,   JP_LBRC,  KC_F7,   JP_AT,    KC_BSPC, KC_LGUI,  KC_VOLD,   KC_NO,     KC_NO,     KC_NO,     KC_LSFT,   KC_NO,    \
		KC_A,    KC_S,    KC_D,    KC_F,   KC_J,   KC_K,     KC_L,    KC_SCLN,  KC_BSLS, KC_NO,    KC_MUTE,   KC_APP,    KC_NO,     KC_NO,     KC_NO,     KC_NO,    \
		KC_ESC,  KC_NO,   KC_F4,   KC_G,   KC_H,   KC_F6,    JP_HENK, KC_QUOT,  KC_F5,   KC_NO,    KC_T,      KC_NO,     KC_UP,     KC_LALT,   KC_NO,     KC_NO,    \
		KC_Z,    KC_X,    KC_C,    KC_V,   KC_M,   KC_COMM,  KC_DOT,  JP_RBRC,  KC_ENT,  KC_NO,    KC_M,      KC_P,      KC_PAUS,   KC_NO,     KC_RSFT,   KC_RCTRL, \
		JP_MHEN, KC_NO,   KC_NO,   KC_B,   KC_N,   JP_BSLS,  JP_KANA, KC_SLSH,  KC_SPC,  KC_RGHT,  KC_DOWN,   KC_N,      KC_LEFT,   KC_RALT,   KC_NO,     KC_NO     \
		)
		
};
*/

const uint16_t fn_actions[] = {
};
