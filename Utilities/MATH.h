
/*
 * MATH.h
 *
 * Created: 9/9/2023 5:04:20 AM
 *  Author: ElRapper
 */ 
#ifndef MATH_H
#define MATH_H

#define SET_BIT(reg,bit)   reg|=(1<<bit)
#define CLR_BIT(reg,bit)   reg&=(~(1<<bit))
#define TOG_BIT(reg,bit)   reg^=(1<<bit)
#define GET_BIT(reg,bit)   (reg&(1<<bit))>>bit



#endif
