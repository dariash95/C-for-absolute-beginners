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
	printf("Enter the 3 numbers:");
	scanf("%f %f %f",&num_1, &num_2, &num_3);

	average = (num_1+num_2+num_3)/3;
	printf("The average is %f\n", average);
	printf("Please press enter to exit");

	while(getchar() != '\n'){

	}
	getchar();

}
