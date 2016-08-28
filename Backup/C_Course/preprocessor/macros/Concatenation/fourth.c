/*

This program explains how to concatenate two tokens

Author	: Vivek Tiwari
Usage	: #define MACRO_NAME MACRO_BODY
VERSION	: 1.0

*/

#include<stdio.h>
#include<string.h>

#define EVEN(n) \
		if(n%2==0){ \
				printf("\n Even Number\n"); \
				} \
		else \
		{ \
			printf("\n Odd Number\n"); \
		}
				

int main()
{
	int a = 11;
	EVEN(a);
	
}
