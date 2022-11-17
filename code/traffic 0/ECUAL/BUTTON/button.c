/*
 * button.c
 *
 * Created: 2022-11-05 5:49:23 PM
 *  Author: Fannan
 */
#include "button.h"

//initialize
detect_dio BUTTON_init(uint8_t Port,uint8_t Pin)// takes port and pin number
{
		detect_dio state=OK;
		exterint_set(); //enable external interrupt to read buuton value 
		if(DIO_init(Port,Pin,IN)==ERROR) state =ERROR;// init direction to be output
		return state;// return state
}

// button read
uint8_t BUTTON_read(uint8_t Port,uint8_t Pin)// takes port and pin number
{
	return DIO_read(Port,Pin); // get bit 
}
