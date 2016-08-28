/*

This porgram explains how to convers macro argumnets into string constant

Author	: Vivek Tiwari
Usage	: #define MACRO_NAME MACRO_BODY
VERSION	: 1.0

*/

#include<stdio.h>

#define STR(s) #s	// Converting Macro argument into string constant

int main()
{
	printf("\n Name of Organizations is %s\n",STR(VEDA SOLUTIONS)) ;
	
}
