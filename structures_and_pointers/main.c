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

void displayMemberElements(dataSet_t *pData);

int main (void){

	dataSet_t data;
	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;

	//printf("Before : data.data1 = %X\n", data.data1);

	dataSet_t *pData;
	pData = &data;
	pData->data1 = 0x55; //This is the same as *(address of the first member element data1) = 0x55

	//printf("After : data.data1 = %X\n", data.data1);

	displayMemberElements(&data);

	return 0;
}

void displayMemberElements(dataSet_t *pData){
	printf("data1 = %X\n", pData->data1);
	printf("data2 = %X\n", pData->data2);
	printf("data3 = %X\n", pData->data3);
	printf("data4 = %X\n", pData->data4);

}
