 /**
 * @file activity3.h
 * @author  Naresh
 * @brief 
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __ACTIVITY_3_H__
#define __ACTIVITY_3_H__

/* pulse width modulation for 25%*/
#define pwm_25 (250)


/* pulse width modulation for 50%*/
#define pwm_50 (512) 


/* pulse width modulation for 75%*/
#define pwm_75 (750) 


/* pulse width modulation for 95%*/
#define pwm_95 (990) 


/**
 * @Including Header files
 * 
 */

#include <util/delay.h>
#include <avr/io.h>


/**
 * @initialising timer registers 
 * 
 */
void initialisetimer();

/* Duty cycle according to ADC input*/
void activity3(uint16_t temp);

#endif