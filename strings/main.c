/*
 * main.c
 *
 *  Created on: Mar 26, 2020
 *      Author: Daniela
 */

#include<stdio.h>

int main (void){

	char msg1[] = "Hello how are you?";
	char *pmsg2 = "Blehhh";

	msg1[0]='b';
	pmsg2[0]='b'; //Wrong bc it's stores in the ROM nothing is going to change

	printf("Message 1 is: %s\n",msg1);
	printf("Message 2 is: %s\n",pmsg2);
	printf("Address of msg1: %p\n",&msg1);
	printf("Address of msg2: %p\n",&pmsg2);
	printf("Value of msg1: %p\n",msg1);
	printf("Value of msg2: %p\n",pmsg2);

	return 0;
}
