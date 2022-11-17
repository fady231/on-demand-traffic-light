/*
 * traffic 0.c
 *
 * Created: 2022-11-02 4:15:44 PM
 * Author : Fannan
 */ 



#include "APP/app.h"
/*
#include "MCAL/DIO/dio.h"          // **
#include "MCAL/TIMER/timer.h"		// ***
#include "MCAL/EX0_INT/exter_int.h" // ***** for testing 
#include "ECUAL/BUTTON/button.h"	// ***
#include "ECUAL/LED/led.h"*/	    // **


int main(void)
{
   APP_init();
    while (1) 
    {
		App_start();
    }
}


   /*                //testing 
int main(void)
{
	exterint_set();		
	
	LED_init(DIOA,PIN_0);
	LED_init(DIOA,PIN_1);
	LED_init(DIOA,PIN_2);
	
	DIO_init(DIOA,PIN_3,OUT);
	DIO_init(DIOA,PIN_4,OUT);
	DIO_init(DIOA,PIN_5,OUT);
	DIO_init(DIOA,PIN_6,OUT);
	DIO_init(DIOA,PIN_7,OUT);
	
	LED_init(DIOB,PIN_0);
	LED_init(DIOB,PIN_1);
	LED_init(DIOB,PIN_2);
	
	DIO_init(DIOB,PIN_3,OUT);
	DIO_init(DIOB,PIN_4,OUT);
	DIO_init(DIOB,PIN_5,OUT);
	DIO_init(DIOB,PIN_6,OUT);
	DIO_init(DIOB,PIN_7,OUT);
	DIO_init(DIOC,PIN_0,OUT);
	DIO_init(DIOC,PIN_1,OUT);
	DIO_init(DIOC,PIN_2,OUT);
	DIO_init(DIOC,PIN_3,OUT);
	DIO_init(DIOC,PIN_4,OUT);
	DIO_init(DIOC,PIN_5,OUT);
	DIO_init(DIOC,PIN_6,OUT);
	DIO_init(DIOC,PIN_7,OUT);
	DIO_init(DIOD,PIN_0,OUT);
	DIO_init(DIOD,PIN_1,OUT);
	
	BUTTON_init(DIOD,PIN_2);
	
	DIO_init(DIOD,PIN_3,OUT);
	DIO_init(DIOD,PIN_4,OUT);
	DIO_init(DIOD,PIN_5,OUT);
	DIO_init(DIOD,PIN_6,OUT);
	DIO_init(DIOD,PIN_7,OUT);		
	while (1)
	{
	DIO_write(DIOA,PIN_0,HIGH);
	DIO_write(DIOA,PIN_1,HIGH);
	DIO_write(DIOA,PIN_2,HIGH);
	DIO_write(DIOA,PIN_3,HIGH);
	DIO_write(DIOA,PIN_4,HIGH);
	DIO_write(DIOA,PIN_5,HIGH);
	DIO_write(DIOA,PIN_6,HIGH);
	DIO_write(DIOA,PIN_7,HIGH);
	DIO_write(DIOB,PIN_0,HIGH);
	DIO_write(DIOB,PIN_1,HIGH);
	DIO_write(DIOB,PIN_2,HIGH);
	DIO_write(DIOB,PIN_3,HIGH);
	DIO_write(DIOB,PIN_4,HIGH);
	DIO_write(DIOB,PIN_5,HIGH);
	DIO_write(DIOB,PIN_6,HIGH);
	DIO_write(DIOB,PIN_7,HIGH);
	DIO_write(DIOC,PIN_0,HIGH);
	DIO_write(DIOC,PIN_1,HIGH);
	DIO_write(DIOC,PIN_2,HIGH);
	DIO_write(DIOC,PIN_3,HIGH);
	DIO_write(DIOC,PIN_4,HIGH);
	DIO_write(DIOC,PIN_5,HIGH);
	DIO_write(DIOC,PIN_6,HIGH);
	DIO_write(DIOC,PIN_7,HIGH);
	DIO_write(DIOD,PIN_0,HIGH);
	DIO_write(DIOD,PIN_1,HIGH);
	DIO_write(DIOD,PIN_3,HIGH);
	DIO_write(DIOD,PIN_4,HIGH);
	DIO_write(DIOD,PIN_5,HIGH);
	DIO_write(DIOD,PIN_6,HIGH);
	DIO_write(DIOD,PIN_7,HIGH);
		
		TIMER_delay(5000);
			
			DIO_toggle(DIOA,PIN_0);
			DIO_toggle(DIOA,PIN_1);
			DIO_toggle(DIOA,PIN_2);
			DIO_toggle(DIOA,PIN_3);
			DIO_toggle(DIOA,PIN_4);
			DIO_toggle(DIOA,PIN_5);
			DIO_toggle(DIOA,PIN_6);
			DIO_toggle(DIOA,PIN_7);
			DIO_toggle(DIOB,PIN_0);
			DIO_toggle(DIOB,PIN_1);
			DIO_toggle(DIOB,PIN_2);
			DIO_toggle(DIOB,PIN_3);
			DIO_toggle(DIOB,PIN_4);
			DIO_toggle(DIOB,PIN_5);
			DIO_toggle(DIOB,PIN_6);
			DIO_toggle(DIOB,PIN_7);
			DIO_toggle(DIOC,PIN_0);
			DIO_toggle(DIOC,PIN_1);
			DIO_toggle(DIOC,PIN_2);
			DIO_toggle(DIOC,PIN_3);
			DIO_toggle(DIOC,PIN_4);
			DIO_toggle(DIOC,PIN_5);
			DIO_toggle(DIOC,PIN_6);
			DIO_toggle(DIOC,PIN_7);
			DIO_toggle(DIOD,PIN_0);
			DIO_toggle(DIOD,PIN_1);
			DIO_toggle(DIOD,PIN_3);
			DIO_toggle(DIOD,PIN_4);
			DIO_toggle(DIOD,PIN_5);
			DIO_toggle(DIOD,PIN_6);
			DIO_toggle(DIOD,PIN_7);						
			
		
			TIMER_delay(5000);
			
			LED_off(DIOA,PIN_0);
			LED_off(DIOA,PIN_1);
			LED_off(DIOA,PIN_2);
			
			DIO_write(DIOA,PIN_3,LOW);
			DIO_write(DIOA,PIN_4,LOW);
			DIO_write(DIOA,PIN_5,LOW);
			DIO_write(DIOA,PIN_6,LOW);
			DIO_write(DIOA,PIN_7,LOW);
			
			LED_off(DIOB,PIN_0);
			LED_off(DIOB,PIN_1);
			LED_off(DIOB,PIN_2);
			
			DIO_write(DIOB,PIN_3,LOW);
			DIO_write(DIOB,PIN_4,LOW);
			DIO_write(DIOB,PIN_5,LOW);
			DIO_write(DIOB,PIN_6,LOW);
			DIO_write(DIOB,PIN_7,LOW);
			DIO_write(DIOC,PIN_0,LOW);
			DIO_write(DIOC,PIN_1,LOW);
			DIO_write(DIOC,PIN_2,LOW);
			DIO_write(DIOC,PIN_3,LOW);
			DIO_write(DIOC,PIN_4,LOW);
			DIO_write(DIOC,PIN_5,LOW);
			DIO_write(DIOC,PIN_6,LOW);
			DIO_write(DIOC,PIN_7,LOW);
			DIO_write(DIOD,PIN_0,LOW);
			DIO_write(DIOD,PIN_1,LOW);
			DIO_write(DIOD,PIN_3,LOW);
			DIO_write(DIOD,PIN_4,LOW);
			DIO_write(DIOD,PIN_5,LOW);
			DIO_write(DIOD,PIN_6,LOW);
			DIO_write(DIOD,PIN_7,LOW);
		
	}
}

ISR(EX0_INT)
{
		LED_on(DIOA,PIN_0);
		LED_on(DIOA,PIN_1);
		LED_on(DIOA,PIN_2);
		
		DIO_write(DIOA,PIN_3,HIGH);
		DIO_write(DIOA,PIN_4,HIGH);
		DIO_write(DIOA,PIN_5,HIGH);
		DIO_write(DIOA,PIN_6,HIGH);
		DIO_write(DIOA,PIN_7,HIGH);
		
		LED_on(DIOB,PIN_0);
		LED_on(DIOB,PIN_1);
		LED_on(DIOB,PIN_2);
		
		DIO_write(DIOB,PIN_3,HIGH);
		DIO_write(DIOB,PIN_4,HIGH);
		DIO_write(DIOB,PIN_5,HIGH);
		DIO_write(DIOB,PIN_6,HIGH);
		DIO_write(DIOB,PIN_7,HIGH);
		DIO_write(DIOC,PIN_0,HIGH);
		DIO_write(DIOC,PIN_1,HIGH);
		DIO_write(DIOC,PIN_2,HIGH);
		DIO_write(DIOC,PIN_3,HIGH);
		DIO_write(DIOC,PIN_4,HIGH);
		DIO_write(DIOC,PIN_5,HIGH);
		DIO_write(DIOC,PIN_6,HIGH);
		DIO_write(DIOC,PIN_7,HIGH);
		DIO_write(DIOD,PIN_0,HIGH);
		DIO_write(DIOD,PIN_1,HIGH);
		DIO_write(DIOD,PIN_3,HIGH);
		DIO_write(DIOD,PIN_4,HIGH);
		DIO_write(DIOD,PIN_5,HIGH);
		DIO_write(DIOA,PIN_6,HIGH);
		DIO_write(DIOD,PIN_7,HIGH);
}*/