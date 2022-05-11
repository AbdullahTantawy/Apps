/*
 * Dio.c
 *
 * Created: 5/10/2022 10:00:46 AM
 *  Author: Tantawy
 */ 

#include "Dio.h"
#include "BitMath.h"

//-------_function_to_select_the_pins_modes_-----------------------------
// take two arguments one to select the port and the pin
// and another to select out or input (mode)
void M_Dio_PinMode(u8 Local_u8_num , u8 Local_u8_Mode)
{
	// variable to select the pin number -> 
	//ex:Local_u8_num =PA4 = (14) mean pin 4
	u8 Local_u8_Pin = Local_u8_num %10;
	// variable to select the port -> (14) mean port 1(A)
	u8 local_u8_Port = Local_u8_num /10;
	
	switch(Local_u8_Mode) // switch the mode is input or output
	{
		case INPUT:
		{
			switch(local_u8_Port) // switch the port (A,B,C,D)
			{
				case PORT_A:	Clrbit(DDRA,Local_u8_Pin);	 break;
				case PORT_B:	Clrbit(DDRB,Local_u8_Pin);	 break;
				case PORT_C:	Clrbit(DDRC,Local_u8_Pin);	 break;
				case PORT_D:	Clrbit(DDRD,Local_u8_Pin);	 break;
				default:								 break;
			}// switch port
		}
		break;// Case input
		case OUTPUT:
		{
			switch(local_u8_Port) // select the port
			{
				case PORT_A:	Setbit(DDRA,Local_u8_Pin);	 break;
				case PORT_B:	Setbit(DDRB,Local_u8_Pin);	 break;
				case PORT_C:	Setbit(DDRC,Local_u8_Pin);	 break;
				case PORT_D:	Setbit(DDRD,Local_u8_Pin);	 break;
				default:								 break;
			}// switch port
		}
		break;//case output
		default:
		break;//default
		
	}// switch mode
	
}// DIO pin mode function

/*******************************************************************************************************/
void M_Dio_PinWrite(u8 Local_u8_num , u8 Local_u8_Mode)
{
	// variable to select the pin number
	u8 Local_u8_Pin = Local_u8_num %10;
	// variable to select the port
	u8 local_u8_Port = Local_u8_num /10;
	
	switch(Local_u8_Mode)
	{
		case LOW:
		{
			switch(local_u8_Port) // select the port
			{
				case PORT_A:	Clrbit(PORTA,Local_u8_Pin);	 break;
				case PORT_B:	Clrbit(PORTB,Local_u8_Pin);	 break;
				case PORT_C:	Clrbit(PORTC,Local_u8_Pin);	 break;
				case PORT_D:	Clrbit(PORTD,Local_u8_Pin);	 break;
				default:								 break;
			}// switch port
		}
		break;// Case input
		case HIGH:
		{
			switch(local_u8_Port) // select the port
			{
				case PORT_A:	Setbit(PORTA,Local_u8_Pin);	 break;
				case PORT_B:	Setbit(PORTB,Local_u8_Pin);	 break;
				case PORT_C:	Setbit(PORTC,Local_u8_Pin);	 break;
				case PORT_D:	Setbit(PORTD,Local_u8_Pin);	 break;
				default:								 break;
			}// switch port
		}
		break;//case output
		default:
		break;//default
		
	}// switch mode
	
}


void M_Dio_pinTog(u8 Local_u8_num)
{
	// variable to select the pin number
	u8 Local_u8_Pin = Local_u8_num %10;
	// variable to select the port
	u8 local_u8_Port = Local_u8_num /10;
	
	switch(local_u8_Port) // select the port
	{
		case PORT_A:	Togbit(PORTA,Local_u8_Pin);	 break;
		case PORT_B:	Togbit(PORTB,Local_u8_Pin);	 break;
		case PORT_C:	Togbit(PORTC,Local_u8_Pin);	 break;
		case PORT_D:	Togbit(PORTD,Local_u8_Pin);	 break;
		default:								 break;
	}// switch port
}