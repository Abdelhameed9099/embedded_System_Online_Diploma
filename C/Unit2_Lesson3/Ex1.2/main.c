/*
 * main.c
 *
 *  Created on: Feb 14, 2024
 *      Author: Abdelhameed
 */

#include "stdio.h"

int main ()
{
	int Num = 0;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d",&Num);
	if(Num % 2 == 0)
	{
		printf("%d is Even\n",Num);
	}
	else{
		printf("%d is Odd\n",Num);
	}
	return 0;
}
