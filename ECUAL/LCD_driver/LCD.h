/*
 * LCD.h
 *
 * Created: 2/8/2024 1:15:30 PM
 *  Author: ElRapper
 */ 


#ifndef LCD_H_
#define LCD_H_

void LCD_Send_Command (u8 command);
void LCD_Send_Data (u8 Data);
void LCD_Init(void);
void LCD_Clear();
void LCD_String (char *str);



#endif /* LCD_H_ */