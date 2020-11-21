/*
 * main.c
 *
 *  Created on: Sep 26, 2020
 *      Author: Daniela
 */

#include <stdio.h>

int main (void){

	int x = 0;
	int y = 1;
	int i = 0;
	int tot = 0;
	printf("%d %d ",x,y);

	while (i<4){
	    tot = x + y;
	    printf("%d ", tot);
	    x = y;
	    y = tot;
	    i = i+1;
	}

	return 0;
}
