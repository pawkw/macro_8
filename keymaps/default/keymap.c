#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_F13, KC_F14, KC_F15, KC_F16, 
		KC_F17, KC_F18, KC_F19, LT(1, KC_F20)),

	KEYMAP(
		KC_F21, KC_F22, KC_F23, KC_F24, 
		KC_VOLD, KC_VOLU, RESET, KC_TRNS),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	// keyevent_t event = record->event;

	switch (id) {

	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}