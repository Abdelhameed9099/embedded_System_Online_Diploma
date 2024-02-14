/*
 * main.c
 *
 *  Created on: Feb 14, 2024
 *      Author: dell
 */

#include "stdio.h"

int main () {
	int num = 0;
	int factorial = 1;
	int i = 0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&num);
	if(num < 0){
		printf("Error !!! Factorial of a negative number doesn't exist.");
	}
	else if (num > 0){
		while(num > 0){
			factorial *= num;
			num--;
			i++;
		}
		printf("Factorial = %d",factorial);
	}
	else {
		printf("Factorial of 0 is 1");
	}
	return 0;
}
