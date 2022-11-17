/*
 * dio.h
 *
 * Created: 2022-11-02 5:20:29 PM
 *  Author: Fannan
 */


#ifndef DIO_H_
#define DIO_H_

#include "dio_reg.h"
#include "../../UTLIS/bit_math.h"
#include "../../UTLIS/std_types.h"

//macros for 4 ports 
#define	DIOA  0
#define	DIOB  1
#define	DIOC  2
#define	DIOD  3



//macros for 8 bit
#define PIN_0 0
#define PIN_1 1
#define PIN_2 2
#define PIN_3 3
#define PIN_4 4
#define PIN_5 5
#define PIN_6 6
#define PIN_7 7

//Direction defines
#define IN 0
#define OUT 1

//Value defines
#define LOW 0
#define HIGH 1

typedef enum 
{
	OK,
	ERROR
}detect_dio;

detect_dio DIO_init(uint8_t port, uint8_t pin, uint8_t direction);// Initialize dio direction
detect_dio DIO_write(uint8_t port, uint8_t pin, uint8_t value); //write data to dio
detect_dio DIO_toggle(uint8_t port, uint8_t pinr); //toggle dio
uint8_t DIO_read(uint8_t port, uint8_t pin); //read dio




#endif /* DIO_H_ */