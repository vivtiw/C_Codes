/*

This program explains how to define Object like macro using #define directive.

Author	: Tenam veda
Usage	: #define MACRO_NAME macro_expansion
Version	: 1.0 

*/

#include<stdio.h>

	#define MAX 100		// Object like macro
	#define PI  3.14


int main()
{
	int a=MAX;
	printf("Size of array : %d",sizeof(a));
	printf("\nPI value is : %f",PI);
}

