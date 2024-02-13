/*
 * main.c
 *
 *  Created on: Feb 13, 2024
 *      Author: Abdelhameed
 */

#include "stdio.h"

int main()
{
	int num;
	printf("Enter an integer : ");
	fflush(stdout);
	scanf("%d",&num);
	printf("You entered : %d",num);
	return 0;
}

