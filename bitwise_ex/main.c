/*
 * main.c
 *
 *  Created on: Mar 12, 2020
 *      Author: Daniela
 */

#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

int main (void){

	int32_t num1, num2;
	printf("Please enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);

	printf("Bitwise AND: %d\n",(num1 & num2));
	printf("Bitwise OR: %d\n",(num1 | num2));
	printf("Bitwise XOR: %d\n", (num1 ^ num2));
	printf("Bitwise NOT: %d\n", (~num1));

	wait_for_user_input();

}

void wait_for_user_input(void){

	printf("Please press enter to exit");
	while(getchar() != '\n'){
	}
	getchar();
}
