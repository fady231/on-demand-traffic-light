/*
 * timer_reg.h
 *
 * Created: 2022-11-04 8:30:15 PM
 *  Author: Fannan
 */ 


#ifndef TIMER_REG_H_
#define TIMER_REG_H_

#define TCCR0					*((volatile uint8_t*)0x53)		//Timer0 control register
#define WGM00				6				    		
#define WGM01				3							
#define TCS02				2 	
#define CS02				2							
#define CS01				1						
#define CS00				0							

#define TCNT0					*((volatile uint8_t*)0x52)		//Timer/Counter Register

#define OCR0 					*((volatile uint8_t*)0x5C)		//Output compare register 0

#define TIMSK					*((volatile uint8_t*)0x59)		//TIMER MASK
#define TOIE0				0							
#define OCIE0				1							
#define TIFR					*((volatile uint8_t*)0x58)




#endif /* TIMER_REG_H_ */