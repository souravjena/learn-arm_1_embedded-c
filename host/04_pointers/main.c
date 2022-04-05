/**
 ******************************************************************************
 * @file           : main.c
 * @author         : souravjena
 * @brief          : Main program body
 ******************************************************************************
 */

#include <stdio.h>

int main(){

	long long int data = 0x1122334455667788; 	// long long int = 8 bytes

	unsigned char *addr_1b = (unsigned char*) &data;
	unsigned short *addr_2b = (unsigned short*) &data;
	unsigned int *addr_4b = (unsigned int*) &data;
	unsigned long long int *addr_8b = (unsigned long long int*) &data;

	printf("unsigned char @ %p: 0x%x\n", addr_1b, *addr_1b);			// 1 Byte will get printed
	printf("unsigned short @ %p: 0x%x\n", addr_2b, *addr_2b);			// 2 Bytes will get printed
	printf("unsigned int @ %p: 0x%x\n", addr_4b, *addr_4b);				// 4 Bytes will get printed
	printf("unsigned long long int @ %p: 0x%llx\n\n\n", addr_8b, *addr_8b); 	// 8 Bytes will get printed


	// ** Pointer Arithematic **
	unsigned char *addr_1b_1 = (unsigned char*) &data;
	unsigned char *addr_1b_2 = addr_1b_1 + 1;
	unsigned char *addr_1b_3 = addr_1b_1 + 2;
	unsigned char *addr_1b_4 = addr_1b_3 + 1;

	printf("unsigned char @ %p: 0x%x\n", addr_1b_1, *addr_1b_1);
	printf("unsigned char @ %p: 0x%x\n", addr_1b_2, *addr_1b_2);
	printf("unsigned char @ %p: 0x%x\n", addr_1b_3, *addr_1b_3);
	printf("unsigned char @ %p: 0x%x\n\n", addr_1b_4, *addr_1b_4);


	unsigned short *addr_2b_1 = (unsigned short*) &data;
	unsigned short *addr_2b_2 = addr_2b_1 + 1;
	unsigned short *addr_2b_3 = addr_2b_1 + 2;
	unsigned short *addr_2b_4 = addr_2b_1 + 3;

	printf("unsigned short @ %p: 0x%x\n", addr_2b_1, *addr_2b_1);
	printf("unsigned short @ %p: 0x%x\n", addr_2b_2, *addr_2b_2);
	printf("unsigned short @ %p: 0x%x\n", addr_2b_3, *addr_2b_3);
	printf("unsigned short @ %p: 0x%x\n", addr_2b_4, *addr_2b_4);


	return 0;
}
