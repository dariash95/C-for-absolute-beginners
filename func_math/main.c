/*
 * main.c
 *
 *  Created on: Feb 18, 2020
 *      Author: Daniela
 */

#include <stdio.h>
#include "math.h"

int main(){

	int result_sum = math_add(39877,490053);
	printf("The result of the addition is %d\n", result_sum);
	int result_subs = math_sub(39877,490053);
	printf("The result of the subtraction is %d\n", result_subs);
	long long int result_mult = math_mult(3977,4053);
	printf("The result of the multiplication is %I64d\n", result_mult);
	float result_div = math_div(39877,490053);
	printf("The result of the division is %f\n", result_div);
	return 0;
}
