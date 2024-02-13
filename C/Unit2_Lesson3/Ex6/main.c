/*
 * main.c
 *
 *  Created on: Feb 13, 2024
 *      Author: Abdelhameed
 */

#include "stdio.h"

int main ()
{
	float num1,num2,temp;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&num1);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("\n");
	printf("After swapping, value of a = %f\n",num1);
	printf("After swapping, value of b =%f\n",num2);
	return 0;
}
