/* Copyright 2012 Jun Wako <wakojun@gmail.com>: LED init
 * Copyright 2017 Mathias Andersson <wraul@dbox.se>: Phantom config
 * Copyright 2018 bakageta <amo@bakageta.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "TP_AVR.h"

void matrix_init_kb(void) {
    // put your keyboard start-up code here
    // runs once when the firmware starts up
    led_init_ports();
    matrix_init_user();
}

void matrix_scan_kb(void) {
    // put your looping keyboard code here
    // runs every cycle (a lot)

    matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    // put your per-action keyboard code here
    // runs for every action, just before processing by the firmware

    return process_record_user(keycode, record);
}

void led_init_ports(void) {
    DDRB |= 0x01; // OUT ProMicro
    DDRD |= 0xB0; // OUT ProMicro

    DDRC |= 0x40; // OUT Board
    DDRE |= 0x40; // OUT Board
}

void led_set_kb(uint8_t usb_led) {

    if (usb_led & (1<<USB_LED_CAPS_LOCK))
        PORTD &= ~(1<<4);
    else
        PORTD |= (1<<4);

    if (usb_led & (1<<USB_LED_SCROLL_LOCK))
        PORTD &= ~(1<<7);
    else
        PORTD |= (1<<7);

    if (usb_led & (1<<USB_LED_NUM_LOCK))
        PORTC &= ~(1<<6);
    else
        PORTC |= (1<<6);

    if (usb_led & (1<<USB_LED_COMPOSE))
        PORTE &= ~(1<<6);
    else
        PORTE |= (1<<6);

    led_set_user(usb_led);
}
