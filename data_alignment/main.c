/*
 * main.c
 *
 *  Created on: Mar 19, 2020
 *      Author: Daniela
 */

#include<stdio.h>
#include<stdint.h>

typedef struct {
	char  data1;
	int   data2;
	char  data3;
	short data4;
}dataSet_t;

int main (void){

	dataSet_t data = {.data1 = 0x11,.data2 = 0xFFFFEEEE, .data3 = 0x22, .data4 = 0xABCD};

	uint8_t *ptr;
	ptr=(uint8_t*)&data;

	uint32_t totalSize = sizeof(struct dataSet);

	printf("Memory address           Content \n");
	printf("=================================\n");

	for(uint32_t i=0; i<totalSize; i++){
		printf("%p   %X\n", ptr, *ptr);
		ptr++;
	}

}
