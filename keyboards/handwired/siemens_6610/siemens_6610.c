// TODO
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_led_indicators.md
//
//
/* H-file:
 *
 * #pragma once
#include "quantum.h"
 */

/* TODO

- init status leds on startup
    - ON is always on (wire directly !)
    - ON LINE is on when controller is booted
    - CARRIER blinks, is on when first USB packet received
    - ENQ - numlock
    - ACK - scroll-lock
    - NAK - on when in bootstrap mode
    - WAIT blinks as long as no carrier, and during startup sequence

    - keyboard LED 1 - scroll-lock
    - keyboard LED 2 - compose-lock

    - Startup sequence: go through all LEDs

- custom code for shift lock / compose lock LEDs


=== https://github.com/qmk/qmk_firmware/blob/master/docs/gpio_control.md


static uint16_t key_timer;
key_timer = timer_read();

if (timer_elapsed(key_timer) < 100) {
  // do something if less than 100ms have passed
} else {
  // do something if 100ms or more have passed
}

===> uint32_t timer_read32(void);
#define timer_expired32(current, future) ((uint32_t)(current - future) < UINT32_MAX / 2)

wait_ms()



==> use https://github.com/qmk/qmk_firmware/blob/master/docs/custom_matrix.md for blinking

*/
