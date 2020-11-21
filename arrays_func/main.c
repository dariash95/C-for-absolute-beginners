/*
 * main.c
 *
 *  Created on: Mar 26, 2020
 *      Author: Daniela
 */

#include<stdio.h>
#include<stdint.h>

void array_display(uint8_t const *const pArray, uint32_t nItems);

int main (void){
	uint8_t someData[10]={0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
	uint32_t nItems = sizeof(someData)/sizeof(uint8_t);
	array_display(someData,nItems);

	return 0;
}

void array_display(uint8_t const *const pArray, uint32_t nItems){
	printf("Array elements: \n");

	for(uint8_t i=0; i<nItems; i++){
		printf("%X\n",*(pArray + i));
	}
}
