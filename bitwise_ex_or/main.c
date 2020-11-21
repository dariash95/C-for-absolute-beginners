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

	int32_t num;
	printf("Please enter a number: ");
	scanf("%d", &num);

	num = (num | 10010000);
	printf("%d \n", num);

	wait_for_user_input();
	}



void wait_for_user_input(void){

	printf("Please press enter to exit");
	while(getchar() != '\n'){
	}
		getchar();
	}



