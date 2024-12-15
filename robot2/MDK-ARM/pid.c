#include "pid.h" 

int16_t pid_result (void){
	uint16_t* input = Gray();
	double result,diviation;
	static int16_t history,previous_result;
	double p,i,d;
	int16_t integration,differentiation;
	result = input[0]*(-4)+input[0]*(-4)+input[1]*(-3)+input[2]*(-2)+input[3]*(-1)+input[4]*(1)+input[5]*(2)+input[6]*(3)+input[7]*(4);
	
	integration= history ;
	integration+=result ;
	history =integration;
	
	differentiation = result-previous_result;
	previous_result = result ;
	
	p= 1;
	i= 0.1;
	d= 0.1;
	
	diviation = p*result + i*integration + d*differentiation ;
	return diviation;
	}