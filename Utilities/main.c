/*
 * main.c
 *
 * Created: 9/9/2023 2:12:27 AM
 *  Author: ElRapper
 */ 

//#include <xc.h>
//#include <avr/io.h>
#define F_CPU 8000000
#include "TYPES.h"
#include "MATH.h"

#include "../ECUAL/LED_driver/LED.h"
#include "Regiseters.h"
#include "../ECUAL/Relay_driver/Relay.h"
int main(void)
{
	DIO_VoidSetPinDirection(PORT_A, PIN_1, PIN_OUTPUT);
	DIO_VoidSetPinValue(PORT_A, PIN_1, PIN_HIGH );
	led_intialize(5,PORT_A);
	Relay_intialize(3,PORT_A);
	 button_init(2, PORT_A);
    while(1)
    {
        //TODO:: Please write your application code 
    }
}