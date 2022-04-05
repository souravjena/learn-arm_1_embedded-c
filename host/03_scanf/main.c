/**
 ******************************************************************************
 * @file           : main.c
 * @author         : souravjena
 * @brief          : Main program body
 ******************************************************************************
 */

#include <stdio.h>

int main(){

	float n1, n2, n3;

	printf("Enter three numbers: ");

	scanf("%f %f %f", &n1, &n2, &n3);

	printf("The three numbers are: %f %f %f\n", n1, n2, n3);

	getchar();

	return 0;
}
