
/*
 * KPD.c
 *
 * Created: 9/16/2023 11:42:49 AM
 *  Author: ElRapper
 */ 
#include "KPD.h"

Ret KPD_init(){
	
	DIO_VoidSetPinDirection(PORT_C,0,PIN_OUTPUT);
	DIO_VoidSetPinDirection(PORT_C,1,PIN_OUTPUT);
	DIO_VoidSetPinDirection(PORT_C,2,PIN_OUTPUT);
	DIO_VoidSetPinDirection(PORT_C,3,PIN_OUTPUT);
	
	DIO_VoidSetPinDirection(PORT_C,4,PIN_INPUT);
	DIO_VoidSetPinDirection(PORT_C,5,PIN_INPUT);
	DIO_VoidSetPinDirection(PORT_C,6,PIN_INPUT);
	DIO_VoidSetPinDirection(PORT_C,7,PIN_INPUT);
	
	//PORT_C =0xff;
}