/*
 * main.c
 *
 *  Created on: Mar 25, 2020
 *      Author: Daniela
 */



#include<stdio.h>
#include<stdint.h>

union Packet
{
	uint32_t packetValue;

	struct
	{
		uint32_t crc       :2; //Of the 32 bits, use 2 for the crc. The order doesn't matter, but don't
		uint32_t status    :1;
		uint32_t payload   :12;
		uint32_t bat       :3;
		uint32_t sensor    :3;
		uint32_t longAddr  :8;
		uint32_t shortAddr :2;
		uint32_t addrMode  :1;
	}packetFields;
};

void wait_for_user_input(void);

int main (void){

	union Packet packet; // Definition of variable of type union

	printf("Enter the value: ");
	scanf("%x",&packet.packetValue); // Remember that in an union all member elements refer to the same memory area

	printf("The CRC value is %#X\n",packet.packetFields.crc); // Inside the union. inside the structure. member element
	printf("The Status value is %#X\n",packet.packetFields.status);
	printf("The Payload value is %#X\n",packet.packetFields.payload);
	printf("The Battery value is %#X\n",packet.packetFields.bat);
	printf("The Sensor value is %#X\n",packet.packetFields.sensor);
	printf("The Long Address value is %#X\n",packet.packetFields.longAddr);
	printf("The Short Address value is %#X\n",packet.packetFields.shortAddr);
	printf("The Address Mode value is %#X\n",packet.packetFields.addrMode);

	printf("The size of the structure is %u\n", sizeof(packet));
	wait_for_user_input();

}

void wait_for_user_input(void){

	printf("Please press enter to exit");
	while(getchar() != '\n'){
	}
		getchar();
	}
