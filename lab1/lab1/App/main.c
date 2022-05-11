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
#include "Pushbutton.h"

int main(void)
{
    /* Replace with your application code */
	
	H_Led_Init(RED_LED_PIN);
	
	H_PushButton_Init();
	u8 x=0;
	
    while (1) 
    {
		x = H_PushButton_Read();
		/*while(x==PRESSED)
		{
			x = H_PushButton_Read();
			H_Led_On(RED_LED_PIN);
		}
			H_Led_Off(RED_LED_PIN);
			*/
		if(x==PRESSED)
		{
			H_Led_Tog(RED_LED_PIN);
		}
	}
	return 0;
}

