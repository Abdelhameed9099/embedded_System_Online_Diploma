/*
 * main.c
 *
 *  Created on: Feb 14, 2024
 *      Author: dell
 */

#include "stdio.h"

int main ()
{
	float num;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f",&num);
	if(num > 0){
		printf("%0.2f is positive",num);
	}
	else if (num < 0){
		printf("%0.2f is negative",num);
	}
	else{
		printf("you entered zero");
	}
	return 0;
}
