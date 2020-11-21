/*
 * main.c
 *
 *  Created on: Mar 19, 2020
 *      Author: Daniela
 */


#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

int main (void){

	uint8_t const data = 10;
	printf("%u\n",data);

	uint8_t *ptr = (uint8_t*)&data; //Typecast so the data types coincide
	*ptr = 50; //One can modify a const variable by the value within its address
	printf("%u\n",data);

	wait_for_user_input();
}


void wait_for_user_input(void){

	printf("Please press enter to exit");
	while(getchar() != '\n'){
	}
		getchar();
	}

