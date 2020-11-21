/*
 * main.c
 *
 *  Created on: Mar 26, 2020
 *      Author: Daniela
 */

#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);
void array_display(uint32_t const *const pArray, uint32_t nItems);
void swap_arrays(uint32_t *pArray1, uint32_t *pArray2, uint32_t nItems1, uint32_t nItems2);

int main (void){

	uint32_t nItems1, nItems2;
	// Arrays size
	printf("Please enter the number of elements of the Array 1 and the Array 2: ");
	scanf("%u %u", &nItems1, &nItems2);

	if ((nItems1 < 0)||(nItems2 < 0)){
		printf("The number of elements can't be negative\n");
		wait_for_user_input();
		return 0;
	}

	// Arrays creation
	uint32_t array1 [nItems1];
	uint32_t array2 [nItems2];

	//Array 1 items
	for(uint32_t i=0; i<nItems1; i++){
		printf("Please enter %u element of the Array 1: ",i);
		scanf("%d",&array1[i]);
	}

	//Array 2 items
	for(uint32_t i=0; i<nItems2; i++){
		printf("Please enter %u element of the Array 2: ",i);
		scanf("%d",&array2[i]);
	}

	//Array contents before swapping
	printf("Contents of arrays before swapping\n");
	array_display(array1,nItems1);
	printf("\n");
	array_display(array2,nItems2);
	printf("\n");

	//Array contents after swapping
	swap_arrays(array1, array2, nItems1, nItems2);
	printf("Contents of arrays after swapping\n");
	array_display(array1,nItems1);
	printf("\n");
	array_display(array2,nItems2);
	printf("\n");

	wait_for_user_input();
	return 0;

}

void wait_for_user_input(void){

	printf("Please press enter to exit");
	while(getchar() != '\n'){
	}
		getchar();
	}

void array_display(uint32_t const *const pArray, uint32_t nItems){
	for(uint32_t i=0; i<nItems; i++){
	printf("%4d\t",*(pArray + i));
	}
}

void swap_arrays(uint32_t *array1, uint32_t *array2, uint32_t nItems1, uint32_t nItems2)
{
	uint32_t length = nItems1<nItems2 ? nItems1 : nItems2;
	for (uint32_t i=0; i<length;i++){
		uint32_t aux = array1[i];
		array1[i]= array2[i];
		array2[i]= aux;
	}
}
