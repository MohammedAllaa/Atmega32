
/*
 * DIO_interface.h
 *
 * Created: 9/9/2023 5:16:14 AM
 *  Author: ElRapper
 */ 
#include "../../Utilities/TYPES.h"
#include "../../Utilities/MATH.h"

#ifndef INTERFACE_H
#define INTERFACE_H


	#define  PIN_INPUT  0
	#define  PIN_OUTPUT 1



#define 	PORT_A   0
#define 	PORT_B   1
#define 	PORT_C   2
#define 	PORT_D   3

	
#define PIN_HIGH 1
#define PIN_LOW 0

typedef enum{
	PIN_0=0,
	PIN_1,
	PIN_2,
	PIN_3,
	PIN_4,
	PIN_5,
	PIN_6,
	PIN_7,
	MAX_PIN
}PIINS;

typedef enum {
	NOT_OK=0,
	OK
	
	}Ret;

#define  Dio_cfg  Dio_ENABLE

#if Dio_cfg
Ret DIO_VoidSetPinDirection (uint8_t copy_u8PORT, uint8_t copy_u8PIN, uint8_t Direction);
Ret DIO_VoidSetPinValue (uint8_t copy_u8PORT, uint8_t copy_u8PIN, uint8_t copy_u8Value);
Ret DIO_VoidGetPinValue (uint8_t copy_u8PORT, uint8_t copy_u8PIN, uint8_t* State);
Ret DIO_VoidToggPIN (uint8_t PORT, uint8_t PIN);
#endif

#endif