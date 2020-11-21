/*
 * main.c
 *
 *  Created on: Feb 20, 2020
 *      Author: Daniela
 */

#include <stdio.h>

int main(){
	float num_1, num_2, num_3;
	float average;
	printf("Enter the first number:");
	fflush(stdout);
	scanf("%f",&num_1);
	printf("Enter the second number:");
	fflush(stdout);
	scanf("%f",&num_2);
	printf("Enter the third number:");
	fflush(stdout);
	scanf("%f",&num_3);

	average = (num_1+num_2+num_3)/3;
	printf("The average is %f", average);

	while(getchar() != '\n'){

	}
	getchar();

}
