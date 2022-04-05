/**
 ******************************************************************************
 * @file           : main.c
 * @author         : souravjena
 * @brief          : Main program body
 ******************************************************************************
 */

#include <stdio.h>


int main(){

	/*
	 * float: 32 bits/4 bytes, single precision, 6 decimal places
	 * double: 64 bits/8 bytes, double precision, 15 decimal places
	 *
	 * %f -> print float
	 * %lf -> print double
	 *
	 * %e -> print float in scientific notation
	 * %le -> print double in scientific notation
	 */

	// Representing floats in scientific notation
	float num1 = 1.23456e-2; // 0.0123456

	printf("num1 %%0.2f: %0.2f\n", num1);	// print as float with a precision of 2
	printf("num1 %%0.2e: %0.2e\n\n", num1);	// print in scientific notation


	float num_f = 0.12345678901234567890;
	double num_d = 0.12345678901234567890;

	printf("num_f %%0.20f: %0.20f\n", num_f);		// prints correct upto 9 decimal places
	printf("num_d %%0.20e: %0.20lf\n\n", num_d);	// prints correct upto 16 decimal places


	return 0;
}
