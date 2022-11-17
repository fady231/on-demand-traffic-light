/*
 * led.h
 *
 * Created: 2022-11-05 5:49:23 PM
 *  Author: Fannan
 */


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO/dio.h"
#include "../../MCAL/TIMER/timer.h"
#include "../../UTLIS/bit_math.h"
#include "../../UTLIS/std_types.h"

// Car port and pins
#define CAR_PORT DIOA
#define CAR_G_PIN PIN_0
#define CAR_Y_PIN PIN_1
#define CAR_R_PIN PIN_2

// Pedestrian port and pins
#define PED_PORT DIOB
#define PED_G_PIN PIN_0
#define PED_Y_PIN PIN_1
#define PED_R_PIN PIN_2



detect_dio LED_init(uint8_t Port,uint8_t Pin);
detect_dio LED_on(uint8_t Port,uint8_t Pin);
detect_dio LED_off(uint8_t Port,uint8_t Pin);
detect_dio LED_toggle(uint8_t Port,uint8_t Pin);
detect_timer0 LED_timer_setup(uint16_t ms);
void led_timer_on();
void led_timer_end();

#endif /* LED_H_ */