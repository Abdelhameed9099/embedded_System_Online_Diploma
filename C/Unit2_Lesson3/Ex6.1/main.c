/*
 * main.c
 *
 *  Created on: Feb 14, 2024
 *      Author: dell
 */

#include "stdio.h"

int main () {
	unsigned int num = 0, sum = 0;
	int i = 0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&num);
	for(i = 1; i <= num; i++){
		sum += i;
	}
	printf("Sum = %d",sum);
	return 0;
}
