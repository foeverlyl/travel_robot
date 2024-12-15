#include "motor.h" 

void set_pwm1(int speed1,int speed2){
	if(speed1 < 0 ){
		//gpio
		speed1 = -speed1;
	}
		if(speed2 < 0 ){
		//gpio
		speed2 = -speed2;
	}
	__HAL_TIM_SetCompare(&htim1,TIM_CHANNEL_1,speed1);
	__HAL_TIM_SetCompare(&htim1,TIM_CHANNEL_2,speed2);
		HAL_GPIO_WritePin(GPIOA,8,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,9,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,10,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,11,GPIO_PIN_SET);
}
	
void go(void){
}
