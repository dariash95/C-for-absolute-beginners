/*
 * main.c
 *
 *  Created on: Feb 21, 2020
 *      Author: Daniela
 *
 *  Exercise
 *  1. Create a char type variable and initialize it to the value 100 (line 21)
 *  2. Print the address of the above variable (line 23)
 *  3. Create a pointer variable and store the address of the above variable (line 24)
 *  4. Perform read operation on the pointer variable to fetch 1 byte of data from the pointer (line 25)
 *  5. Print the data obtained from the read operations on the pointer (line 26)
 *  6. Perform write operation on the pointer to store the value 65 (line 27)
 *  7. Print the value of the variable defined in step 1 (line 28)
 *
 */

#include <stdio.h>

int main (void){
	char data = 100;
	printf("The value of the variable data is %d \n",data);
	printf("The address of the variable data is %p \n",&data); // &data gives the address
	char* pAddress = &data;
	char value = *pAddress;
	printf("The value read is %d \n", value);
	*pAddress = 65;
	printf("The value read is %d \n", data);

	return 0;
}
