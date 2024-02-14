/*
 * main.c
 *
 *  Created on: Feb 14, 2024
 *      Author: dell
 */

#include "stdio.h"

int main ()
{
	float num1,num2,num3;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f%f%f",&num1,&num2,&num3);
	if(num1 > num2)
	{
		if(num1 > num3){
			printf("Largest Number = %0.2f",num1);
		}
		else{
			printf("Largest Number = %0.2f",num3);
		}
	}
	else if (num2 > num3){
		if(num2 > num1){
			printf("Largest Number = %0.2f",num2);
		}
		else{
			printf("Largest Number = %0.2f",num1);
		}
	}
	return 0;
}
