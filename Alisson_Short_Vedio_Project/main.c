/*****************************************************************************/

/* File Defination :
 *
 * File 		: main.c
 *
 * Created on	: Sep 25, 2023
 *
 * Author 		: ABDELFATTAH MOAWED
 */
/*****************************************************************************/
/***********************************inclusion**********************************/
/********************************************************************************/
#include<util/delay.h>
#include"STD_TYPES.h"

#include"BIT_CALC.h"
#include"DIO_interface.h"

#include"LCD_interface.h"

#define F_CPU		8000000UL
#define short_time		1000
void main(void)
{

DIO_void_Init();
LCD_void_Init();

/*fram1*/

u8 arr0[]={0, 0, 0, 4, 14, 27, 14, 4};// ball
LCD_void_Set_CGRAM_Address(ADDRESS_OF_CHAR0_IN_CGRAM,arr0);

u8 arr1[]={0, 4, 10, 4, 31, 4, 10, 17};// man
LCD_void_Set_CGRAM_Address(ADDRESS_OF_CHAR0_IN_CGRAM+8,arr1);

u8 arr2[]={1, 1, 1, 1, 1, 1, 1, 31};// down
LCD_void_Set_CGRAM_Address(ADDRESS_OF_CHAR0_IN_CGRAM+16,arr2);

u8 arr3[]={31, 1, 1, 1, 1, 1, 1, 1};// up
LCD_void_Set_CGRAM_Address(ADDRESS_OF_CHAR0_IN_CGRAM+24,arr3);

u8 arr4[]={31, 0, 4, 10, 4, 31, 4, 10};//allison
LCD_void_Set_CGRAM_Address(ADDRESS_OF_CHAR0_IN_CGRAM+32,arr4);

u8 arr5[]={31, 16, 16, 16, 16, 16, 16, 16};//left
LCD_void_Set_CGRAM_Address(ADDRESS_OF_CHAR0_IN_CGRAM+40,arr5);


u8 arr6[]={0, 4, 10, 4, 14, 21, 14, 17};//another man
LCD_void_Set_CGRAM_Address(ADDRESS_OF_CHAR0_IN_CGRAM+48,arr6);

LCD_void_DDRAM_Address(0,0);
LCD_void_Write_String("I'm Alisson  ");
LCD_void_DDRAM_Address(0,13);
LCD_void_Write_Data(5);
LCD_void_Write_Data(4);
LCD_void_Write_Data(3);



_delay_ms(2500);
LCD_void_Clear_Screen();

LCD_void_DDRAM_Address(0,15);
LCD_void_Write_Data(3);
LCD_void_DDRAM_Address(1,15);
LCD_void_Write_Data(2);
LCD_void_DDRAM_Address(1,14);
LCD_void_Write_Data(1);




LCD_void_DDRAM_Address(0,10);
LCD_void_Write_Data(1);



LCD_void_DDRAM_Address(1,10);
LCD_void_Write_Data(1);
LCD_void_DDRAM_Address(1,11);
LCD_void_Write_Data(0);
_delay_ms(short_time);
LCD_void_DDRAM_Address(1,11);
LCD_void_Write_Data(' ');
LCD_void_DDRAM_Address(1,12);
LCD_void_Write_Data(0);
_delay_ms(short_time);
LCD_void_DDRAM_Address(1,12);
LCD_void_Write_Data(' ');
LCD_void_DDRAM_Address(1,13);
LCD_void_Write_Data(0);
_delay_ms(short_time);
LCD_void_DDRAM_Address(1,13);
LCD_void_Write_Data(' ');
LCD_void_DDRAM_Address(0,12);
LCD_void_Write_Data(0);
_delay_ms(short_time);
LCD_void_DDRAM_Address(0,10);
LCD_void_Write_Data(' ');
LCD_void_DDRAM_Address(0,11);
LCD_void_Write_Data(1);
_delay_ms(short_time);
LCD_void_DDRAM_Address(0,12);
LCD_void_Write_Data(' ');
LCD_void_DDRAM_Address(0,13);
LCD_void_Write_Data(0);
_delay_ms(short_time);
LCD_void_DDRAM_Address(0,13);
LCD_void_Write_Data(' ');
LCD_void_DDRAM_Address(0,14);
LCD_void_Write_Data(0);
_delay_ms(short_time);
LCD_void_DDRAM_Address(0,14);




LCD_void_Clear_Screen();
LCD_void_Write_String("Bernardo Silva");
LCD_void_DDRAM_Address(1,0);
LCD_void_Write_String("!!!GOOOOOOAL!!");


	/*CODE*/
	while(1);
}












