/*
 * Reg.h
 *
 * Created: 5/10/2022 10:31:06 AM
 *  Author: Tantawy
 */ 


#ifndef REG_H_
#define REG_H_

//--------------_REGs_ADDRESSES_-------------------

#define DDRA	*(volatile char *)0x3A
#define PORTA	*(volatile char *)0x3B


#define DDRB	*(volatile char *)0x37
#define PORTB	*(volatile char *)0x38


#define DDRC	*(volatile char *)0x34
#define PORTC	*(volatile char *)0x35


#define DDRD	*(volatile char *)0x31
#define PORTD	*(volatile char *)0x32




#endif /* REG_H_ */