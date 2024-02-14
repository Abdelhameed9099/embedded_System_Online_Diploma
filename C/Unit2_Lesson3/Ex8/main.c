/*
 * main.c
 *
 *  Created on: Feb 14, 2024
 *      Author: dell
 */

#include "stdio.h"

int main () {
	float num1,num2;
	char opera;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdout);
	scanf("%c",&opera);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f%f",&num1,&num2);
	switch(opera){
	case '+':{
		printf("%0.2f %c %0.2f = %0.2f",num1,opera,num2,(num1+num2));
	}break;
	case '-':{
		printf("%0.2f %c %0.2f = %0.2f",num1,opera,num2,(num1-num2));
	}break;
	case '*':{
		printf("%0.2f %c %0.2f = %0.2f",num1,opera,num2,(num1*num2));
	}break;
	case '/':{
		printf("%0.2f %c %0.2f = %0.2f",num1,opera,num2,(num1/num2));
	}break;
	default:{
		printf("Invalid operation\n");
	}break;
	}
	return 0;
}
