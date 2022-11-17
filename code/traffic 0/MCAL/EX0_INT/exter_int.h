/*
 * exter_int.h
 *
 * Created: 2022-11-05 10:11:59 PM
 *  Author: Fannan
 */


#ifndef EXTER_INT_H_
#define EXTER_INT_H_
#include "../../UTLIS/BIT_MATH.h"
#include "../../UTLIS/STD_TYPES.h"
#include "ex_reg.h"


#define EX_INT __vector_1 //macro for vector 

#define sei()  __asm__ __volatile__ ("sei" ::: "memory") // macro for global interrupt enable
#define cli()  __asm__ __volatile__ ("cli" ::: "memory")// macro for global interrupt disable


//ISR macro
#define ISR(INT_VECT) \
void INT_VECT(void) __attribute__ ((signal,used)); \
void INT_VECT(void)



void exterint_set();
void ex0_int_SetCallBack(void (*copy)(void));
#endif