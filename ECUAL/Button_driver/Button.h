
/*
 * Button.h
 *
 * Created: 9/16/2023 1:52:40 AM
 *  Author: ElRapper
 */ 
#ifndef BUTTON_H
#define BUTTON_H

#include "Button_cfg.h"
#include "../../MCAL/DIO/DIO_interface.h"
#include "../../Utilities/TYPES.h"

#define Button_CFG Button_ENABLE

Ret button_init(uint8_t pinNum, uint8_t port);
Ret button_read (uint8_t pinNum, uint8_t port);
 

#endif