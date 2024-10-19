
/*
 * Relay.h
 *
 * Created: 9/16/2023 1:33:43 AM
 *  Author: ElRapper
 */ 
#ifndef RELAY_H
#define ReLAY_H

#include "Relay_cfg.h"
#include "../../MCAL/DIO/DIO_interface.h"
#include "../../Utilities/TYPES.h"

#define Relay_CFG RELAY_ENABLE

Ret Relay_intialize (uint8_t pinNumber, uint8_t port);
Ret Relay_on (uint8_t pinNumber, uint8_t port);
Ret Relay_off(uint8_t pinNumber, uint8_t port);


#endif