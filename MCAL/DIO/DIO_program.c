
/*
 * DIO_program.c
 *
 * Created: 9/9/2023 5:15:39 AM
 *  Author: ElRapper
 */ 


#include "DIO_interface.h"
#include "../../Utilities/Regiseters.h"
#include "DIO_config.h"
#if Dio_cfg
Ret DIO_VoidSetPinDirection (uint8_t copy_u8PORT, uint8_t copy_u8PIN, uint8_t Direction){
	if (copy_u8PIN>=MAX_PIN)
	{
		return NOT_OK;
	}
	
	if(Direction==PIN_OUTPUT){
		
		switch (copy_u8PORT){
			case PORT_A : SET_BIT(DDRA,copy_u8PIN);break;
			case PORT_B : SET_BIT(DDRB,copy_u8PIN);break;
			case PORT_C : SET_BIT(DDRC,copy_u8PIN);break;
			case PORT_D : SET_BIT(DDRD,copy_u8PIN);break;
		}
		
	}
	else if(Direction==PIN_INPUT){
			switch (copy_u8PORT){
				case PORT_A : CLR_BIT(DDRA,copy_u8PIN);break;
				case PORT_B : CLR_BIT(DDRB,copy_u8PIN);break;
				case PORT_C : CLR_BIT(DDRC,copy_u8PIN);break;
				case PORT_D : CLR_BIT(DDRD,copy_u8PIN);break;
			}
			
	}
	return OK;
}
Ret DIO_VoidSetPinValue (uint8_t copy_u8PORT, uint8_t copy_u8PIN, uint8_t Value){
	if (copy_u8PIN>=MAX_PIN)
	{
		return NOT_OK;
	}
	if(Value==PIN_HIGH){
		
		switch (copy_u8PORT){
			case PORT_A : SET_BIT(PORTA,copy_u8PIN);break;
			case PORT_B : SET_BIT(PORTB,copy_u8PIN);break;
			case PORT_C : SET_BIT(PORTC,copy_u8PIN);break;
			case PORT_D : SET_BIT(PORTD,copy_u8PIN);break;
		}
		
	}
	else if(Value==PIN_LOW){
		switch (copy_u8PORT){
			case PORT_A : CLR_BIT(PORTA,copy_u8PIN);break;
			case PORT_B : CLR_BIT(PORTB,copy_u8PIN);break;
			case PORT_C : CLR_BIT(PORTC,copy_u8PIN);break;
			case PORT_D : CLR_BIT(PORTD,copy_u8PIN);break;
		}
		
	}
	return OK;
}
uint8_t DIO_VoidGetPinValue (uint8_t copy_u8PORT, uint8_t copy_u8PIN, uint8_t* State){
	
	if (copy_u8PIN>=MAX_PIN)
	{
		return NOT_OK;
	}
	
	
	switch (copy_u8PORT){
		
		case PORT_A : *State = GET_BIT(PINA,copy_u8PIN);break;
		case PORT_B : *State = GET_BIT(PINB,copy_u8PIN);break;
		case PORT_C : *State = GET_BIT(PINC,copy_u8PIN);break;
		case PORT_D : *State = GET_BIT(PIND,copy_u8PIN);break;
	}
	
	return OK;
}
Ret DIO_VoidToggPIN (uint8_t PORT, uint8_t PIN){
	if (PIN>=MAX_PIN)
	{
		return NOT_OK;
	}
	
	
	switch (PORT){
		case PORT_A : TOG_BIT(PORTA,PIN);break;
		case PORT_B : TOG_BIT(PORTB,PIN);break;
		case PORT_C : TOG_BIT(PORTC,PIN);break;
		case PORT_D : TOG_BIT(PORTD,PIN);break;
	}
	
	return OK;
}
#endif




