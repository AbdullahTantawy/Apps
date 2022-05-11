/*
 * MACROS.h
 *
 * Created: 5/9/2022 4:29:23 PM
 *  Author: Tantawy
 */ 


#ifndef MACROS_H_
#define MACROS_H_

#define Setbit(reg,bit)			reg|=(1<<bit);
#define Clrbit(reg,bit)			reg&=~(1<<bit);
#define Togbit(reg,bit)			reg^=(1<<bit);
#define Getbit(reg,bit)			1&(reg>>bit);



#endif /* MACROS_H_ */