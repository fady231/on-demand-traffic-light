/*
 * led.c
 *
 * Created: 2022-11-05 5:49:23 PM
 *  Author: Fannan
 */
#include "led.h"



detect_dio LED_init(uint8_t Port,uint8_t Pin) // takes port and pin number
{
	detect_dio state=OK;
	if(DIO_init(Port,Pin,OUT)==ERROR) state =ERROR;// init direction to be output
	return state;//  return state 
}
detect_dio LED_on(uint8_t Port,uint8_t Pin)// takes port and pin number
{
		detect_dio state=OK;
		if(DIO_write(Port,Pin,HIGH)==ERROR) state =ERROR;// to write high on led bit
		return state;
}
detect_dio LED_off(uint8_t Port,uint8_t Pin)// takes port and pin number
{
		detect_dio state=OK;
		if(DIO_write(Port,Pin,LOW)==ERROR) state =ERROR;// to write low on led bit
		return state;
}
detect_dio LED_toggle(uint8_t Port,uint8_t Pin)// takes port and pin number
{
		detect_dio state=OK;
		if(DIO_toggle(Port,Pin)==ERROR) state =ERROR;// to blink led
		return state;
}
detect_timer0 LED_timer_setup(uint16_t ms) // takes port and pin number
{
	detect_dio state=T_OK;
	if(TIMER_delay(ms)==T_ERROR) state =T_ERROR;// start timer with ms
	return state;//  return state
}
void led_timer_on()
{
	TIMER_init();
}
void led_timer_end()
{
	NOV =0;
}