/*
 * timer.c
 *
 * Created: 2022-11-04 8:30:02 PM
 *  Author: Fannan
 */
#include "timer.h"



void TIMER_init()
{
    CLR_BIT(TCCR0,WGM00); //normal mode
	CLR_BIT(TCCR0,WGM01);
}
detect_timer0 TIMER_delay(uint16_t ms)//takes the required delay time 
{ detect_timer0 state =T_OK;
	if(ms<0) state=T_ERROR;
	uint16_t T_inital;
	double Tmaxdelay,Ttick;
	uint32_t OV_Count=0;

	Ttick = 256.0/1000.0;   // tick time is .256 ms as prescaler is 256
	Tmaxdelay= 65.536;      // time for max delay 65.536 as timer zero is 8 bit counter
	
    if(ms == (int)Tmaxdelay)  //if delay user want equal to max delay they will be only one overflow and tart with zero
    {
		T_inital=0;
		NOV=1;
	}
    	else if(ms<Tmaxdelay)        //if delay user want less than max delay they will be only one overflow and not start with zero 
    {   
		T_inital = (Tmaxdelay-ms)/Ttick;
		NOV = 1;
		
	}
    else                             //if delay user want more than max delay they will be more than one overflow and not start with zero
    {
		NOV = ceil((double)ms/Tmaxdelay);
		T_inital = (1<<8) - ((double)ms/Ttick)/NOV;
	}

	TCNT0 = T_inital; // after detecting which one of the three condation > or = or < max delay timer will start with the value
	    SET_BIT(TCCR0,CS02); //set 256 prescaler
	while(OV_Count<NOV) // in case delay was greater than max delay so it will be more thaan one overflow
    {
		while(GET_BIT(TIFR,0)==0);//busy wait
		SET_BIT(TIFR,0);//clear overflow flag
		OV_Count++;//increment counter
	}
	
	return state;//return state 
	
}
