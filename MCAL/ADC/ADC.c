/*
 * ADC.c
 *
 * Created: 12/13/2023 8:57:39 AM
 *  Author: ElRapper
 */ 

/************************************* Includes ***************************************************/
#include "ADC.h"

/************************************* Global Variables ******************************************/
ADC_Config_t G_ADC_CFG;

/************************************* APIs Supported by "MCAL ADC DRIVER" **********************/

void MCAL_ADC_Init (ADC_Config_t* ADC_CFG){
	G_ADC_CFG = *ADC_CFG;
	
	//1.Select voltage source
	ADMUX |= ADC_CFG->ADC_Voltage_refrence;
	
	//2.select ADC_Result_Presentation
	ADMUX |= ADC_CFG->ADC_Result_Presentation;
	
	//3.ADC_Prescaler
	ADCSRA |= ADC_CFG->ADC_Result_Presentation;
	
	//4.ADC_IRQ
	ADCSRA |=  ADC_CFG->ADC_IRQ;
	if (ADC_CFG->ADC_IRQ == ADC_IRQ_enable)
	{
		/*sei();*/  // Enable global interrupt here.
	}
	
	//5.enable ADC
	ADCSRA |= (1<<ADEN);
	
	//6.Start conversion
	if (ADC_CFG->ADC_mode == ADC_mode_free_running_mode)
	{
		SET_BIT(ADCSRA , ADSC);
			}
	
}

void MCAL_ADC_DEInit(void){
	ADMUX = 0x00;
	ADCSRA = 0x00;
}

void MCAL_ADC_getConversionResult (channel_select_t channel , uint16_t* result , Polling_Mechanism_t polling ){
	// First clear selected channel to select another channel
	CLR_BIT(ADMUX , MUX0);
	CLR_BIT(ADMUX , MUX1);
	CLR_BIT(ADMUX , MUX2);
	CLR_BIT(ADMUX , MUX3);
	
	
	//1.select channel 
	ADMUX |= ( (uint8_t)channel << MUX0 );
	
	//2.make pin as input
	CLR_BIT(DDRA , channel);
	
	//3.start convention
	if (G_ADC_CFG.ADC_mode == ADC_mode_singel_convertion)
	{
		SET_BIT(ADCSRA , ADSC);
	}
	
	//4. wait until ADC convention complete
	if (polling == POLLING_ENABLE)
	{
		while(!GET_BIT(ADCSRA , ADIF));
	//5.read convention result
	if (G_ADC_CFG.ADC_Result_Presentation == ADC_Result_Presentation_right)
	{
		*result = (ADCL | (ADCH & 0x03)<<8);
	}
	else if (G_ADC_CFG.ADC_Result_Presentation == ADC_Result_Presentation_left)
	{
		*result = (((ADCL & 0x0c)>>6) | (ADCH<<2));
	}
	}
	
}

