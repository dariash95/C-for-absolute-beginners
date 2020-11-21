/*
 * main.c
 *
 *  Created on: Mar 26, 2020
 *      Author: Daniela
 */

#include<stdio.h>
#include<stdint.h>

int main (void){
/*	uint32_t studentsAge[100];
	printf("Size of an array = %u\n", sizeof(studentsAge));
	printf("Array address = %p\n", studentsAge);

	uint8_t someData[10] = {0xFF, 0XFF, 0XFF}; //All remaining items will be initialized to 0
	uint8_t someData[] = {0xFF, 0XFF, 0XFF}; // This is correct bc the compiler will be able to tell that the size of the array is 3 based on the number on initialized elements
	*/

	uint8_t someData[10]={0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
	printf("Before: second data item = %X\n",*(someData+1));
	*(someData+1) = 0x9; // someData[1] = 0x9;
	printf("First data item = %X\n",someData[0]);
	printf("After: second data item = %X\n",*(someData+1));

	printf("\n");
	printf("Array elements: \n");
	for(uint8_t i=0; i<10; i++){
		printf("%X\n", someData[i]);
	}

	return 0;
}
