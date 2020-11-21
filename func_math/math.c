/*
 * math.c
 *
 *  Created on: Feb 18, 2020
 *      Author: Daniela
 */

// Function definition
int math_add(int n1, int n2){
	int sum;
	sum = n1+n2;
	return sum;
}

int math_sub(int n1, int n2){
	int sub;
	sub = n1-n2;
	return sub;
}

long long int math_mult(int n1, int n2) {
	long long int mult;
	mult = (long long int)n1*n2;
	return mult;
}

float math_div(int n1, int n2){
	float div;
	div = (float)n1/n2;
	return div;
}
