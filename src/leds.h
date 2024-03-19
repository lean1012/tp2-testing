#ifndef LEDS_H
#define LEDS_H
#include <stdint.h>

/**
 * @brief Init port of leds
 *
 * @param puerto pointer to port of leds
 */
void leds_init(uint16_t * puerto);
/**
 * @brief turn on the led
 *
 * @param led number of led
 */
void leds_turn_on(uint8_t led);
/**
 * @brief turn off the led
 *
 * @param led number of led
 */
void leds_turn_off(uint8_t led);
/**
 * @brief State of led
 *
 * @param led number of led
 * @return uint8_t return 0 if the led is on
 *                        LED_ERROR if the led parameter is invalid
 */
uint8_t leds_is_on(uint8_t led);
/**
 * @brief State of led
 *
 * @param led number of led
 * @return uint8_t return 0 if the led is off
 *                        LED_ERROR if the led parameter is invalid
 */
uint8_t leds_is_off(uint8_t led);
/**
 * @brief Turn on all leds
 *
 */
void leds_turn_on_all();
/**
 * @brief Turn offn all leds
 *
 */
void leds_turn_off_all();

#endif
