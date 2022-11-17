/*
 * app.c
 *
 * Created: 2022-11-07 3:40:23 PM
 *  Author: Fannan
 */ 
#include "app.h"

uint8_t CG_FLAG ,CY_FLAG ,CR_FLAG ,walk,end; //declaring global flags that we will use as it global its inital value will be zero 

void APP_init()
{
	
	led_timer_on(); // init timer
	
	BUTTON_init(BUTTON_1_PORT,BUTTON_1_PIN); // init button
	LED_init(CAR_PORT,CAR_G_PIN);// init car green led
	LED_init(CAR_PORT,CAR_Y_PIN);// init car yellow led
	LED_init(CAR_PORT,CAR_R_PIN);// init car red led
	LED_init(PED_PORT,PED_G_PIN);// init pedstrain green led
	LED_init(PED_PORT,PED_Y_PIN);// init pedstrain yellow led
	LED_init(PED_PORT,PED_R_PIN);// init pedstrain yellow led
}

void App_start()
{ while(end==0)
	{
		
	ex0_int_SetCallBack(EX0_INT);
	switch(walk) // switch for case in which pedstrain mode will be occuare
	{
	
	 case 0: // this case mean normal mode green --> yellow-->red-->yellow.....
	  {
		if(walk ==0) // check if ther any change in mode (if there's pressed on  pedstrain button)
		{
			LED_on(CAR_PORT,CAR_G_PIN); // on green led for cars for five seconds
			CG_FLAG =1; // rising  green flag
			LED_timer_setup(4775); // it was five seconds but considring interrupt letancy
			LED_off(CAR_PORT,CAR_G_PIN);// off green led for cars  
			CR_FLAG =0; // faling green flag
		}
	
		if(walk ==0)// check if ther any change in mode (if there's pressed on  pedstrain button)
	    {
			LED_on(CAR_PORT,CAR_Y_PIN); // on yellow led for cars for five seconds
			CY_FLAG =1;// rising  yellow flag
			for(uint8_t i=0;i<10;i++)
			{
				if(walk ==0)
				{
				LED_toggle(CAR_PORT,CAR_Y_PIN);
				LED_timer_setup(478);// it was 500 ms but considring interrupt letancy
				}
			}
		LED_off(CAR_PORT,CAR_Y_PIN); // off yellow led for cars for five seconds// on yellow led for cars for five seconds
		CY_FLAG =0;		// faling  yellow flag
		}
	
		if(walk==0)// check if ther any change in mode (if there's pressed on  pedstrain button)
		{
			LED_on(CAR_PORT,CAR_R_PIN); // on red led for cars for five seconds
			CR_FLAG =1; // rising red flag
			LED_timer_setup(4775); // it was five seconds but considring interrupt letancy
			LED_off(CAR_PORT,CAR_R_PIN); // off red led for cars for five seconds
			CR_FLAG=0;	 // faling red flag
		}
	}
	break;

	case 1:
	{
		if(walk==1)// check if ther any change in mode (if there's pressed on  pedstrain button)
		{
			
			LED_on(CAR_PORT,CAR_R_PIN);// on red led for cars for five seconds
			LED_on(PED_PORT,PED_G_PIN);// on green led for pedstrains for five seconds
			CR_FLAG =1; // rising red flag
			LED_timer_setup(4775); // it was five seconds but considring interrupt letancy
			LED_off(CAR_PORT,CAR_R_PIN); // off red led for cars after five seconds
			CR_FLAG=0;		 // faling red flag
		}

		if(walk==1)// check if ther any change in mode (if there's pressed on  pedstrain button)
		{
			
			LED_on(CAR_PORT,CAR_Y_PIN);
			LED_on(PED_PORT,PED_Y_PIN);
			CY_FLAG =1;   // rising yellow flag
			for(uint8_t i=0;i<10;i++)
			{
				
				LED_toggle(CAR_PORT,CAR_Y_PIN);// blink yellow led
				LED_toggle(PED_PORT,PED_Y_PIN);// blink yellow led
				LED_timer_setup(478); // it was 500 ms but considring interrupt letancy
			}
			LED_off(CAR_PORT,CAR_Y_PIN); // off yellow led for cars after five seconds
			LED_off(PED_PORT,PED_Y_PIN); // off yellow led for pedstrains after five seconds
			LED_off(PED_PORT,PED_G_PIN); // off green led for pedstrains after ten seconds
			CY_FLAG=0;	  // faling yellow flag
		}
		
		if(walk==1)// check if ther any change in mode (if there's pressed on  pedstrain button)
		{
			LED_on(CAR_PORT,CAR_G_PIN); // on green led for cars for five seconds
			CG_FLAG=1; // rising green flag
			LED_on(PED_PORT,PED_R_PIN); // on red led for  pedstrains for five seconds
			LED_timer_setup(4775); // it was five seconds but considring interrupt letancy
			LED_off(CAR_PORT,CAR_G_PIN); // off green led for cars after five seconds
			CG_FLAG=0; // faling green flag
			LED_off(PED_PORT,PED_R_PIN);	// off red led for pedstrains after five seconds
		}
		walk =0; // back to normal mode
	}
	break;

	case 2:
	{
		if(walk==2)// check if ther any change in mode (if there's pressed on  pedstrain button)
		{
			LED_on(PED_PORT,PED_R_PIN);// on red led for pedestrians 
			LED_on(CAR_PORT,CAR_Y_PIN); // on yellow led for cars for five seconds
			LED_on(PED_PORT,PED_Y_PIN); // on yellow led for pedstrains for five seconds
			CY_FLAG =1; // rising yellow flag
			for(uint8_t i=0;i<10;i++)
				{
		
					LED_toggle(CAR_PORT,CAR_Y_PIN);// blink yellow led 
					LED_toggle(PED_PORT,PED_Y_PIN);// blink yellow led 
					LED_timer_setup(478);// it was 500 ms but considring interrupt letancy
				}
			LED_off(PED_PORT,PED_R_PIN);// off red led for pedstrains 
			LED_off(CAR_PORT,CAR_Y_PIN); // off yellow led for cars after five seconds
			LED_off(PED_PORT,PED_Y_PIN);// off yellow led for pedstrains after five seconds
			CY_FLAG =0; // faling yellow flag
		}
	
		if(walk==2)// check if ther any change in mode (if there's pressed on  pedstrain button)
		{
		
			LED_on(CAR_PORT,CAR_R_PIN);// on red led for cars for five seconds
			LED_on(PED_PORT,PED_G_PIN);// on green led for pedstrains for five seconds
			CR_FLAG =1; // rising red flag
			LED_timer_setup(4775); // it was five seconds but considring interrupt letancy
			LED_off(CAR_PORT,CAR_R_PIN); // off red led for cars after five seconds
			CR_FLAG=0;		 // faling red flag
		}

		if(walk==2)// check if ther any change in mode (if there's pressed on  pedstrain button)
		{
		
			LED_on(CAR_PORT,CAR_Y_PIN);
			LED_on(PED_PORT,PED_Y_PIN);
			CY_FLAG =1;   // rising yellow flag
			for(uint8_t i=0;i<10;i++)
				{
			
					LED_toggle(CAR_PORT,CAR_Y_PIN);// blink yellow led 
					LED_toggle(PED_PORT,PED_Y_PIN);// blink yellow led 
					LED_timer_setup(478); // it was 500 ms but considring interrupt letancy
				}
		LED_off(CAR_PORT,CAR_Y_PIN); // off yellow led for cars after five seconds
		LED_off(PED_PORT,PED_Y_PIN); // off yellow led for pedstrains after five seconds
		LED_off(PED_PORT,PED_G_PIN); // off green led for pedstrains after ten seconds
		CY_FLAG=0;	  // faling yellow flag
		}
		
		if(walk==2)// check if ther any change in mode (if there's pressed on  pedstrain button)
		{	
			LED_on(CAR_PORT,CAR_G_PIN); // on green led for cars for five seconds
			CG_FLAG=1; // rising green flag
			LED_on(PED_PORT,PED_R_PIN); // on red led for  pedstrains for five seconds
			LED_timer_setup(4775); // it was five seconds but considring interrupt letancy
			LED_off(CAR_PORT,CAR_G_PIN); // off green led for cars after five seconds
			CG_FLAG=0; // faling green flag
			LED_off(PED_PORT,PED_R_PIN);	// off red led for pedstrains after five seconds
			
		}
		 walk =0; // back to normal mode
		}
	default: 
	break;
	  }
		
	 }
	}


void EX0_INT()
{ 
	uint8_t timer = 0; // init value timer to know if there is long press
	while(BUTTON_read(BUTTON_1_PORT, BUTTON_1_PIN)==1) // while button is pressed counter will be increased 
    {                   
		timer++; 
		LED_timer_setup(25);                            
	}
	
	if(((CY_FLAG==1)||(CG_FLAG==1))&&(CR_FLAG==0)) // in case of green flag or yellow flag one of them is high and red flag is low
	{
		while((walk!=2)&&(timer<9)&&(walk!=1))     // make sure that is pedstrain push long press or push button twice or more nothing chaange
		{
			led_timer_end();// to stop timer so it goes back and check for walk so it can exit the mode
		    walk =2;	
		}
			
	}
	else    // if the past was invert it mean that red led for car is on so pedstrain could walk 
	{  while((walk!=1)&&(timer<9)&&(walk!=2))// but make sure that is pedstrain push long press or push button twice or more nothing chaange 
		{	
			led_timer_end();// to stop timer so it goes back and check for walk so it can exit the mode
			walk=1;
			
		}
	}
}