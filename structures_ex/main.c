/*
 * main.c
 *
 *  Created on: Mar 19, 2020
 *      Author: Daniela
 */

#include<stdio.h>
#include<stdint.h>

// This is usually done in the .h
struct carModel{
	uint32_t carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float    carWeight;
};

int main (void){

	struct carModel carBMW = {2021,15000,220,1330}; //C89 method. Order is important
	printf("Sizeof of struct car model BMW is %I64d\n", sizeof(carBMW));

	struct carModel carFord = {4031,35000,160,1900.96};
	struct carModel carHonda ={.carWeight = 90.90,.carPrice=15000,.carMaxSpeed=180,.carNumber=3033}; //C99 method

	printf("Details of the car BMW is as follows\n");
	printf("Car Number = %u\n", carBMW.carNumber);
	printf("Car Price = %u\n", carBMW.carPrice);
	printf("Car Max Speed = %u\n", carBMW.carMaxSpeed);
	printf("Car Weight = %.2f\n", carBMW.carWeight);

	printf("Details of the car Ford is as follows\n");
	printf("Car Number = %u\n", carFord.carNumber);
	printf("Car Price = %u\n", carFord.carPrice);
	printf("Car Max Speed = %u\n", carFord.carMaxSpeed);
	printf("Car Weight = %f\n", carFord.carWeight);

	// Override values
	carBMW.carNumber = 2023;

	return 0;
}
