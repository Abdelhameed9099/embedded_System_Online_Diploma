/*
 * main.c
 *
 *  Created on: Feb 13, 2024
 *      Author: Abdelhameed
 */

#include "stdio.h"

int main ()
{
	int num1,num2;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	printf("Sum: %d",num1 + num2);
	return 0;
}
