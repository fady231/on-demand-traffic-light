/*
 * dio.c
 *
 * Created: 2022-11-02 5:20:23 PM
 *  Author: Fannan
 */
#include "dio.h"


detect_dio DIO_init(uint8_t port, uint8_t pin, uint8_t direction) // it takes port and pin numbers and direction 
{
	detect_dio state = OK;
	switch (port)
	{ 
		case DIOA:
		/* code */
		if(direction==IN) CLR_BIT(DDRA,pin); // clear bit
		else SET_BIT(DDRA,pin);  // set bit
		break;
		case DIOB:
		if(direction==IN) CLR_BIT(DDRB,pin); // clear bit
		else SET_BIT(DDRB,pin);  // set bit
		/* code */
		break;
		case DIOC:
		/* code */
		if(direction==IN) CLR_BIT(DDRC,pin); // clear bit
		else SET_BIT(DDRC,pin);  // set bit
		break;
		case DIOD:
		/* code */
		if(direction==IN) CLR_BIT(DDRD,pin); // clear bit
		else SET_BIT(DDRD,pin);  // set bit
		break;
		
		default:
		   state =ERROR;//reDIO error
		break;
	}
	return state;
}
detect_dio DIO_write(uint8_t port, uint8_t pin, uint8_t value) // it takes port and pin numbers and value
{
	detect_dio state = OK;
	switch (port)
	{
		case DIOA:
		/* code */
		if(value==LOW) CLR_BIT(PORTA,pin); // clear bit
		else SET_BIT(PORTA,pin);  // set bit
		break;
		case DIOB:
		if(value==LOW) CLR_BIT(PORTB,pin); // clear bit
		else SET_BIT(PORTB,pin);  // set bit
		/* code */
		break;
		case DIOC:
		/* code */
		if(value==LOW) CLR_BIT(PORTC,pin); // clear bit
		else SET_BIT(PORTC,pin);  // set bit
		break;
		case DIOD:
		/* code */
		if(value==LOW) CLR_BIT(PORTD,pin); // clear bit
		else SET_BIT(PORTD,pin);  // set bit
		break;
		
		default:
		 state =ERROR;//reDIO error
		break;
	}
	return state;
}

uint8_t DIO_read(uint8_t port, uint8_t pin)// it takes port and pin numbers
{
	uint8_t value=0;
	switch (port)
	{
		case DIOA:
		value =GET_BIT(PINA,pin);// get bit value in reg pina
		break;
		case DIOB:
		value =GET_BIT(PINB,pin);// get bit value in reg pinb
		break;
		case DIOC:
		value =GET_BIT(PINC,pin);// get bit value in reg pinc
		break;
		case DIOD:
		value =GET_BIT(PIND,pin);// get bit value in reg pinf
		break;
		
		default:
		//reDIO error
		break;
	}
	return value; // return value 
}

detect_dio DIO_toggle(uint8_t port, uint8_t pin)
{
	detect_dio state=OK;
	switch(port){
		case DIOA:
		TOGGLE_BIT(PORTA,pin);// toggle bit  in reg porta
		break;
		
		case DIOB:
		TOGGLE_BIT(PORTB,pin);// toggle bit  in reg portb
		break;
		
		case DIOC:
		TOGGLE_BIT(PORTC,pin);// toggle bit  in reg portc
		break;
		
		case DIOD:
		TOGGLE_BIT(PORTD,pin);// toggle bit  in reg portd
		break;
		
		default:
		state=ERROR;//reDIO error
		break;
	}
	return state;
}
