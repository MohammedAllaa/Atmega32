
/*
 * Sev.c
 *
 * Created: 9/16/2023 9:31:10 AM
 *  Author: ElRapper
 */ 
#include "Sev_Seg.h"

Ret SEV_SEG_Intialization(){
	
	DIO_VoidSetPinDirection(PORT_A,0,PIN_OUTPUT);
	DIO_VoidSetPinDirection(PORT_A,1,PIN_OUTPUT);
	DIO_VoidSetPinDirection(PORT_A,2,PIN_OUTPUT);
	DIO_VoidSetPinDirection(PORT_A,3,PIN_OUTPUT);
	DIO_VoidSetPinDirection(PORT_A,4,PIN_OUTPUT);
	DIO_VoidSetPinDirection(PORT_A,5,PIN_OUTPUT);
	DIO_VoidSetPinDirection(PORT_A,6,PIN_OUTPUT);
	DIO_VoidSetPinDirection(PORT_A,7,PIN_OUTPUT);
	DIO_VoidSetPinDirection(PORT_B,0,PIN_OUTPUT);
	
	return OK;
	}

Ret SEV_SEG_WriteNum(uint8_t number){
	if(number>9){return NOT_OK;}
		else{
			
			DIO_VoidSetPinValue(PORT_B,0,PIN_LOW);
			switch(number){
				
				case 0 : PORTA=0b00111111;break;
				
				case 1 : PORTA=0b00000110;break;
				
				case 2 : PORTA=0b01011001;break;
				
				case 3 : PORTA=0b01001111;break;
				
				case 4 : PORTA=0b01100110;break;
				
				case 5 : PORTA=0b01101101;break;
				
				case 6 : PORTA=0b01111101;break;
				
				case 7 : PORTA=0b01000111;break;
				
				case 8 : PORTA=0b01111111;break;
				
				case 9 : PORTA=0b01101111;break;
			}
			return OK;
		}
}

