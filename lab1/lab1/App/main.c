/*
 * lab1.c
 *
 * Created: 5/9/2022 4:00:40 PM
 * Author : Tantawy
 */ 


#define F_CPU 16000000UL
#include "util/delay.h"
#include "Dio.h"
#include "Led.h"

int main(void)
{
    /* Replace with your application code */
	
	H_Led_Init(BLU_LED_PIN);
	H_Led_Init(RED_LED_PIN);
	H_Led_Init(GRN_LED_PIN);
	
	//H_Led_Blinktwice();
    while (1) 
    {
		H_Led_On(BLU_LED_PIN);
		_delay_ms(BLINK_TIME);
		H_Led_Off(BLU_LED_PIN);
		H_Led_On(RED_LED_PIN);
		_delay_ms(BLINK_TIME);
		H_Led_Off(RED_LED_PIN);
		H_Led_On(GRN_LED_PIN);
		_delay_ms(BLINK_TIME); 
		H_Led_Off(GRN_LED_PIN); 
		
    }
	
	return 0;
}

