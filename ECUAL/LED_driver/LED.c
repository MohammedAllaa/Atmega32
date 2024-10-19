
/*
 * LED.c
 *
 * Created: 9/16/2023 12:54:45 AM
 *  Author: ElRapper
 */ 
#include "LED.h"

Ret led_intialize (uint8_t pinNumber, uint8_t port){
	if (DIO_VoidSetPinDirection(pinNumber,port,PIN_OUTPUT))
	{
		return OK;
	}
	return NOT_OK;
}
Ret led_on (uint8_t pinNumber, uint8_t port){
	led_intialize(pinNumber,port);
	if(DIO_VoidSetPinValue(pinNumber,port,PIN_HIGH))return OK;
	return NOT_OK;
}
Ret led_off(uint8_t pinNumber, uint8_t port){
	led_intialize(pinNumber,port);
	if(DIO_VoidSetPinValue(pinNumber,port,PIN_LOW))return OK;
	return NOT_OK;
}
Ret led_toggel(uint8_t pinNumber, uint8_t port){
	led_intialize(pinNumber,port);
	if(DIO_VoidToggPIN(pinNumber,port))return OK;
	return NOT_OK;
}
