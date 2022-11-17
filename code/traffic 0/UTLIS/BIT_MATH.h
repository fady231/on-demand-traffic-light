/*
 * BIT_MATH.h
 *
 * Created: 2022-11-02 4:19:44 PM
 *  Author: Fannan
 */ 



#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(VAR,BIT_NO)			(VAR|=(1<<BIT_NO)) // set bit to one by left  shifting 00000001 with pin number and or value with reg past value so change occuare on taarget bit
#define CLR_BIT(VAR,BIT_NO)			(VAR&=(~(1<<BIT_NO))) // clear bit  by left shifting 00000001 with pin number and invert it and make and  value with reg past value so change occuare on taarget bit
#define TOGGLE_BIT(VAR,BIT_NO)		(VAR^=(1<<BIT_NO)) // toggle by left shifting 00000001 with pin number and xor it with past reg value
#define GET_BIT(VAR,BIT_NO)			((VAR>>BIT_NO)&0x01) //get value right shift reg PIN by times of bit number so the bit value will be the least significant bit so if i make and with 1 it will give me only target bit value  

#endif