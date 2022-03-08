/**
 * @file activity2.h
 * @author  Naresh
 * @brief 
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __ACTIVITY_2_H__
#define __ACTIVITY_2_H__
/**
 * @Including header files
 * 
 */
 
#include <util/delay.h>
#include <avr/io.h>

/**
 * @Intialising the function for ADC
 * 
 */
void initialiseADC();

/**
 * 
 * @returning the ADC value
 */
uint16_t readADC(uint8_t ch);

/**
 * @Return the ADC value to main function
 * 
 */
uint16_t activity2(void);

#endif