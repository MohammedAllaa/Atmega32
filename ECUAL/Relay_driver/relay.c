
/*
 * relay.c
 *
 * Created: 9/16/2023 1:33:54 AM
 *  Author: ElRapper
 */ 
#include "Relay.h"

Ret Relay_intialize (uint8_t pinNumber, uint8_t port){
	if (DIO_VoidSetPinDirection(pinNumber,port,PIN_OUTPUT))
	{
		return OK;
	}
	return NOT_OK;
}
Ret Relay_on (uint8_t pinNumber, uint8_t port){
	Relay_intialize(pinNumber,port);
	if(DIO_VoidSetPinValue(pinNumber,port,PIN_HIGH))return OK;
	return NOT_OK;
}
Ret Relay_off(uint8_t pinNumber, uint8_t port){
	Relay_intialize(pinNumber,port);
	if(DIO_VoidSetPinValue(pinNumber,port,PIN_LOW))return OK;
	return NOT_OK;
	
}