/*
 * timer.h
 *
 * Created: 2022-11-04 8:30:10 PM
 *  Author: Fannan
 */


#ifndef TIMER_H_
#define TIMER_H_
#include <math.h>
#include "timer_reg.h"
#include "../../UTLIS/bit_math.h"
#include "../../UTLIS/std_types.h"
uint16_t NOV;

typedef enum
{
	T_OK,
	T_ERROR
}detect_timer0;

void TIMER_init();//initialize Timer0
detect_timer0 TIMER_delay(uint16_t millisec); //delay of specific amount


#endif /* TIMER_H_ */