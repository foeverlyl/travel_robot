#ifndef __MOTOR_H_
#define __MOTOR_H_

#include "main.h"
#include "adc.h"
#include "dma.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"
#include "stm32f1xx_hal_gpio.h"
#include "stm32f1xx_hal_gpio_ex.h"
#include "control.h" 
void set_pwm1(int speed1,int speed2);
void go(void);
#endif