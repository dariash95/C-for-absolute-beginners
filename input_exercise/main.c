/*
 * main.c
 *
 *  Created on: Feb 20, 2020
 *      Author: Daniela
 */

#include <stdio.h>

int main(){
	char c1, c2, c3, c4, c5, c6;
	printf("Enter the 6 characters:");
	scanf("%c %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5, &c6);

	printf("ASCII codes: %d %d %d %d %d %d \n", c1, c2, c3, c4, c5, c6);
	printf("Please press enter to exit");

	while(getchar() != '\n'){

	}
	getchar();

}
