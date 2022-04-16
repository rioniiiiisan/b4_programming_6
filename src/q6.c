#include <stdio.h>
#include "../include/header.h"

#define MAX_TRIALS 200

//for bisection method
#define MIN -3.0
#define MAX 0.0

//for newton method
#define INITIAL_X -3.0


double func(double x){
	return x * x - 4;
}

double dfunc(double x){
	return 2 * x;
}

int main(){
	//Bisection Method
	printf("\nBisection Method\n");
	printf("result = %lf\n\n", bisection(func, MIN, MAX, MAX_TRIALS));
	
	//Newton Method
	printf("Newton Method\n");
	printf("result = %lf\n\n", newton(func, dfunc, INITIAL_X, MAX_TRIALS)); 
	
	return 0;
} 
