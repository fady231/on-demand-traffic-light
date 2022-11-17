/*
 * ex_reg.h
 *
 * Created: 2022-11-05 10:11:36 PM
 *  Author: Fannan
 */

#ifndef EX_REG_H_
#define EX_REG_H_

// Interrupt REGISTERS



#define GICR	 		*((volatile uint8_t*)0x5B) 
#define INT0		6


#define GIFR		 	*((volatile uint8_t*)0x5A)

#define MCUCR		 	*((volatile uint8_t*)0x55)
#define ISC11		3
#define ISC10		2
#define ISC01		1
#define ISC00		0

#define INTF0       6


#define MCUCSR	 		*((volatile uint8_t*)0x54)
#define SREG			*(volatile uint8_t*)(0x5F)

#endif /* EX_REG_H_ */