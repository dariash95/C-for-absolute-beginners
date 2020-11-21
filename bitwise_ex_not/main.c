/*
 * main.c
 *
 *  Created on: Mar 12, 2020
 *      Author: Daniela
 */

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

	int32_t num, num1;
	printf("Please enter a number: ");
	scanf("%d", &num);

	num1 = (num & 10001111);
	printf("%d \n", num1);

	wait_for_user_input();
	}



void wait_for_user_input(void){

	printf("Please press enter to exit");
	while(getchar() != '\n'){
	}
		getchar();
	}



