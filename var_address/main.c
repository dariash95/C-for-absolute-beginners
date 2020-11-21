/*
 * main.c
 *
 *  Created on: Feb 18, 2020
 *      Author: Daniela
 */

#include <stdio.h>

int main()
{
    char l1 ='D';
    char l2 ='A';
    char l3 ='N';
    char l4 ='I';
    char l5 ='E';
    char l6 ='L';
    char l7 ='A';

    printf("The address memory for l1 is %p\n",&l1);
    printf("The address memory for l2 is %p\n",&l2);
    printf("The address memory for l3 is %p\n",&l3);
    printf("The address memory for l4 is %p\n",&l4);
    printf("The address memory for l5 is %p\n",&l5);
    printf("The address memory for l6 is %p\n",&l6);
    printf("The address memory for l7 is %p\n",&l7);

    // Otra forma

    unsigned long int adressOfl1 = (unsigned long int)&l1;

    printf("The address memory for l1 is %lx",adressOfl1);

    return 0;
}
