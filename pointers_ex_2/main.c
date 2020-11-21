/*
 * main.c
 *
 *  Created on: Feb 21, 2020
 *      Author: Daniela
 */

#include<stdio.h>

long long int g_data = 0XFFFEABCD11112345;
//int g_data = 0x11114523;

int main (void){

	char *pAddress1; // = char *pAddress
	pAddress1 = (char*)&g_data;
	printf("The value at address 1 %p is %x\n", pAddress1, *pAddress1);

	int* pAddress2;
	pAddress2 = (int*)&g_data;
	printf("The value at address 2 %p is %X\n", pAddress2, *pAddress2);

	short* pAddress3;
	pAddress3 = (short*)&g_data;
	printf("The value at address 3 %p is %X\n", pAddress3, *pAddress3);

	long long int* pAddress4;
	pAddress4 = (long long int*)&g_data;
	printf("The value at address 3 %p is %I64X", pAddress4, *pAddress4);

	return 0;
}
