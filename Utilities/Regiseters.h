
/*
 * DIO_private.h
 *
 * Created: 9/9/2023 5:17:15 AM
 *  Author: ElRapper
 */ 
#ifndef PRIVATE_H
#define PRIVATE_H

/*Group A Register definitions*/

#define  PORTA  *((volatile uint8_t*)0x3B)
#define  PINA  *((volatile uint8_t*)0x39)
#define  DDRA  *((volatile uint8_t*)0x3A)

/*Group B*/

#define  PORTB  *((volatile uint8_t*)0x38)
#define  PINB  *((volatile uint8_t*)0x36)
#define  DDRB  *((volatile uint8_t*)0x37)

/*Group C*/

#define  PORTC  *((volatile uint8_t*)0x35)
#define  PINC  *((volatile uint8_t*)0x33)
#define  DDRC  *((volatile uint8_t*)0x34)

/*Group D*/

#define  PORTD  *((volatile uint8_t*)0x32)
#define  PIND  *((volatile uint8_t*)0x30)
#define  DDRD  *((volatile uint8_t*)0x31)

/***************************************************ADC******************************************************/
#define ADMUX   *(volatile uint8_t *)(0x27)
#define MUX0    0
#define MUX1    1
#define MUX2    2
#define MUX3    3
#define ADLAR   5
#define REFS0   6
#define REFS1   7

#define ADCSRA   *(volatile uint8_t*)(0x26)
#define ADPS0   0
#define ADPS1   1
#define ADPS2   2
#define ADIE    3
#define ADIF    4
#define ADATE   5
#define ADSC    6
#define ADEN    7

#define ADCH   *(volatile uint8_t*)(0x25)

#define ADCL   *(volatile uint8_t*)(0x24)

#define SFIOR   *(volatile uint8_t*)(0x50)



#endif 
