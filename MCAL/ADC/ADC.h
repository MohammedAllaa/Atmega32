/*
 * ADC.h
 *
 * Created: 12/13/2023 8:57:55 AM
 *  Author: ElRapper
 */ 


#ifndef ADC_H_
#define ADC_H_
/*********************************************** Includes ***********************************************************/
#include "../../Utilities/Regiseters.h"
#include "../../Utilities/TYPES.h"
#include "../../MCAL/DIO/DIO_interface.h"
#include "../../Utilities/MATH.h"
#include <util/delay.h>

/*********************************************** User Typr Definition (Structures) **********************************/
typedef struct{
	
	/* ADC_mode
	   Select ADC mode
	   This parameter must be set based on @ref ADC_modee_define 
	*/
	uint8_t ADC_mode;
	
	/* ADC_Voltafe_refrence
	   Select ADC voltage source
	   This parameter must be set based on @ref ADC_Voltafe_refrence_define 
	   ADMUX=>> 6,7
	*/
	uint8_t ADC_Voltage_refrence;
	
	/* ADC_Voltafe_refrence
	   Select ADC result presentation (Right or Left)
	   This parameter must be set based on @refADC_Result_Presentation_define 
	   ADMUX=>> 5 ADALR
	   */
	uint8_t ADC_Result_Presentation;
	
	/* ADC_prescaler
	   This bit determine the division factor between the XTAL frequency and the input clock to the ADC)
	   This parameter must be set based on @refADC_prescaler_define 
	   ADMUX=>> 0,1,2,3 (ADPS2,ADPS1,ADPS0)
	   */
	uint8_t ADC_prescaler;
	
	/* ADC_IRQ
	   This bit Enable | disable interrupt
	   This parameter must be set based on @refADC_IRQ_define 
	   ADMUX=>> 5 ADIE
	   */
	uint8_t ADC_IRQ;
	
	/* P_IRQ_Callback
	   set the c function will be called one IRQ happened
	   */
	void (*P_IRQ_Callback)(void);
	
		
}ADC_Config_t;

/************************************* Macro Configuration References ***********************************************/
/*ADC voltage_refrenc_define*/
#define ADC_Voltage_refrence_AREF       (uint8_t)(0)
#define ADC_Voltage_refrence_AVCC       (uint8_t)(0b01<<REFS0)
#define ADC_Voltage_refrence_INTERNAL   (uint8_t)(0b11<<REFS0)

/*ADC_Result_Presentation_define*/
#define ADC_Result_Presentation_right  (uint8_t)(0)
#define ADC_Result_Presentation_left   (uint8_t)(1<<ADLAR)

/*ADC_prescaler_define*/
#define ADC_prescaler_2                (uint8_t)(1<<ADPS0)
#define ADC_prescaler_4                (uint8_t)(2<<ADPS0)
#define ADC_prescaler_8                (uint8_t)(3<<ADPS0)
#define ADC_prescaler_16               (uint8_t)(4<<ADPS0)
#define ADC_prescaler_32               (uint8_t)(5<<ADPS0)
#define ADC_prescaler_64               (uint8_t)(6<<ADPS0)
#define ADC_prescaler_128              (uint8_t)(7<<ADPS0)

/*ADC_Result_IRQ_define*/
#define ADC_IRQ_enable                 (uint8_t)(1<<ADIE)
#define ADC_IRQ_disable                (uint8_t)(0)

/*ADC_mode_define*/
#define ADC_mode_free_running_mode     (uint8_t)(1)
#define ADC_mode_singel_convertion    (uint8_t)(0)


/************************************* enum ***********************************************/

typedef enum{
	ADC0 = 0 ,
	ADC1 ,
	ADC2 ,
	ADC3 ,
	ADC4 ,
	ADC5 ,
	ADC6 ,
	ADC7 ,
	
	}channel_select_t;
	
typedef enum{
	POLLING_DISABLE = 0,
	POLLING_ENABLE = 1,
		
	}Polling_Mechanism_t;
	

/************************************* APIs supported "MCAL Timer0 DRIVER" ***********************************************/	

void MCAL_ADC_Init (ADC_Config_t* ADC_CFG);
void MCAL_ADC_DEInit(void);
void MCAL_ADC_getConversionResult (channel_select_t channel , uint16_t* result , Polling_Mechanism_t polling );


#endif /* ADC_H_ */