
/*
 * Sev_Seg.h
 *
 * Created: 9/16/2023 9:30:59 AM
 *  Author: ElRapper
 */ 
#ifndef SEV_SEG_H
#define SEV_SEG_H

#include "../../MCAL/DIO/DIO_interface.h"
#include "../../Utilities/TYPES.h"
#include "../../Utilities/Regiseters.h"

#include "Sev_Seg_cfg.h"

#define SEV_SEG_CFG  SEV_SEG_ENABLE

//uint8_t arr;
//arr=[0b00111111,0b00000110,0b01011001,0b01001111,0b01100110,0b01101101,0b01111101,0b01000111,0b01111111,0b01101111];

Ret SEV_SEG_Intialization();

Ret SEV_SEG_WriteNum(uint8_t number);
#endif