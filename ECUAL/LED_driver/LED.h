
/*
 * LED.h
 *
 * Created: 9/16/2023 12:55:01 AM
 *  Author: ElRapper
 */ 

#ifndef LED_H
#define LED_H

#include "LED_cfg.h"
#include "../../MCAL/DIO/DIO_interface.h"
#include "../../Utilities/TYPES.h"

#define LED_CFG LED_ENABLE

Ret led_intialize (uint8_t pinNumber, uint8_t port);
Ret led_on (uint8_t pinNumber, uint8_t port);
Ret led_off(uint8_t pinNumber, uint8_t port);
Ret led_toggel(uint8_t pinNumber, uint8_t port);
#endif
