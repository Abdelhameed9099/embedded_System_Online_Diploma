/*
 * main.c
 *
 *  Created on: Feb 14, 2024
 *      Author: dell
 */

#include "stdio.h"

int main (){
	char alpha;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&alpha);
	if((alpha >= 65 && alpha <= 90) ||(alpha >= 97 && alpha <= 122)){
		printf("%c is an alphabet",alpha);
	}
	else{
		printf("%c is not an alphabet",alpha);
	}
	return 0;
}
