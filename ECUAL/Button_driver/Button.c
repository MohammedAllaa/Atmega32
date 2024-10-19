
/*
 * Button.c
 *
 * Created: 9/16/2023 1:52:53 AM
 *  Author: ElRapper
 */ 
#include "Button.h"
Ret button_init(uint8_t pinNum, uint8_t port){
	if (DIO_VoidSetPinDirection(pinNum,port,PIN_OUTPUT))
	{
		return OK;
	}
	return NOT_OK;
}

/*Ret button_read (uint8_t pinNum, uint8_t port, pointer){
	
	button_init(pinNum,port);
	if(DIO_VoidGetPinValue (pinNum,port,PIN_HIGH,&state))return OK;
	return NOT_OK;
}
 }*/