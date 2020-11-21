/*
 * main.c
 *
 *  Created on: Feb 18, 2020
 *      Author: Daniela
 */


#include <stdio.h>

int add_numbers(int a, int b, int c);

int main(){
	int total = add_numbers(2,57,89);
	printf("THe sum of the numbers is %d", total);
	return 0;
}

int add_numbers(int a, int b, int c){
	int sum = a+b+c;
	return sum;
}
