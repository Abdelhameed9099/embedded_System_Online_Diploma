/*
 * main.c
 *
 *  Created on: Feb 13, 2024
 *      Author: dell
 */

#include "stdio.h"

int main ()
{
	int num1,num2;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%d",&num1);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%d",&num2);
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	printf("\n");
	printf("After swapping, value of a = %d\n",num1);
	printf("After swapping, value of b =%d\n",num2);
	return 0;
}
