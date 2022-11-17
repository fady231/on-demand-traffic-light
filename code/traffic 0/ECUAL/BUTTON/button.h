/*
 * button.h
 *
 * Created: 2022-11-05 5:49:23 PM
 *  Author: Fannan
 */


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO/dio.h"
#include "../../UTLIS/bit_math.h"
#include "../../UTLIS/std_types.h"
#include "../../MCAL/EX0_INT/exter_int.h"
#include "../../MCAL/EX0_INT/exter_int.h"

//Button port and pin
#define BUTTON_1_PORT DIOD 
#define BUTTON_1_PIN PIN_2



//initialize
detect_dio BUTTON_init(uint8_t Port,uint8_t Pin);

// button read
uint8_t BUTTON_read(uint8_t Port,uint8_t Pin);



#endif /* BUTTON_H_ */