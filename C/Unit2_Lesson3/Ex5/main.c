/*
 * main.c
 *
 *  Created on: Feb 13, 2024
 *      Author: Abdelhameed
 */

#include "stdio.h"

int main ()
{
	char letter;
	printf("Enter character: ");
	fflush(stdout);
	scanf("%c",&letter);
	printf("ASCII value of %c = %d",letter,letter);
	return 0;
}
