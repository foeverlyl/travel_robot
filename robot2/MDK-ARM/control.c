#include "control.h"

uint16_t* Gray (){
		static uint16_t Gray_value[8];
		uint16_t i=0;
		uint32_t adc_buffer[8];
		HAL_ADC_Start_DMA(&hadc1, (uint32_t *)adc_buffer, 8);
		for(i=0;i<8;i++){
			if(adc_buffer [i]>= 200){
				Gray_value[i]=1;
			}
			else{
				Gray_value[i]=0;
			}
		}
			return Gray_value ;	
	}
