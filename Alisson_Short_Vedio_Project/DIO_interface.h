
/*****************************************************************************/

/* File Defination :
 *
 * File 		: DIO_interface.h
 *
 * Created on	: Sep 8, 2023
 *
 * Author 		: ABDELFATTAH MOAWED
 */
/*****************************************************************************/
/*********************************inclusion*********************************/
/*****************************************************************************/


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_


// data types
// ERRORS
#define	WRONG_PIN_DIR				 0
#define WRONG_PIN_value 			 0
#define WRONG_PORT_DIR				 0
#define WRONG_PORT_VALUE			 0
#define WRONG_PORT_DIR 			   	 0
#define MIN_DIR_OR_VALUE			 0
#define MAX_DIR_OR_VALUE			255
#define	WRONG_PIN					 1
#define WRONG_PORT					 2
#define	NO_ERRORS					 3

//
#define PORTA_ID					 0
#define PORTB_ID				   	 1
#define PORTC_ID		  			 2
#define PORTD_ID					 3

#define DIO_U8_PIN0					 0
#define DIO_U8_PIN1				   	 1
#define DIO_U8_PIN2		  			 2
#define DIO_U8_PIN3					 3
#define DIO_U8_PIN4					 4
#define DIO_U8_PIN5				   	 5
#define DIO_U8_PIN6		  			 6
#define DIO_U8_PIN7					 7

#define PIN_OUTPUT 					 1
#define PIN_INPUT 					 0
#define PORT_OUTPUT 				0xFF
#define PORT_INPUT 					 0
#define PORT_HIGH 					0xFF
#define PORT_LOW 					 0
#define PIN_HIGH 					 1
#define PIN_LOW 					 0

/*SET PIN DIRECTION*/
u8 DIO_U8_Set_Pin_Dir(u8 Copy_U8_Port_ID , u8 Copy_U8_Pin_ID , u8 Copy_U8_Pin_Dir);
#endif /*DIO_INTERFACE_H_ */
