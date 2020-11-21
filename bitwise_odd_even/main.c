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

	int32_t num;
	printf("Please enter a number: ");
	scanf("%d", &num);

	if (num & 1){
		printf("The number is odd\n");
	}
		else {
			printf("The number is even\n");
		     }
	wait_for_user_input();
	}



void wait_for_user_input(void){

	printf("Please press enter to exit");
	while(getchar() != '\n'){
	}
		getchar();
	}


