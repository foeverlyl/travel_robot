#ifndef __PID_H_
#define __PID_H_

#include "main.h"
#include "adc.h"
#include "stm32f1xx_hal_gpio.h"
#include "stm32f1xx_hal_gpio_ex.h"
#include "control.h" 
#include "motor.h"
int16_t pid_result (void);
#endif