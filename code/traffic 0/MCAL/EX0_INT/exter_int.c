/*
 * ex_reg.h
 *
 * Created: 2022-11-05 5:49:23 PM
 *  Author: Fannan
 */


/*
 * exter_int.c
 *
 * Created: 2022-11-05 10:11:44 PM
 *  Author: Fannan
 */

#include "exter_int.h"


void static (*pressedcallback)(void)=NULL;

void exterint_set()
{
	
		sei(); //to enable global interrupt
		SET_BIT(MCUCR,ISC00);//to make it work with rising edge 
		SET_BIT(MCUCR,ISC01);
		SET_BIT(GIFR,INTF0);//clear flag
		SET_BIT(GICR,INT0);//enable interrupt
}

void ex0_int_SetCallBack(void (*copy)(void))
{
	
	pressedcallback=copy;
}

ISR(EX_INT)
{
	if(pressedcallback!=NULL)
	{
		pressedcallback();
	}
}