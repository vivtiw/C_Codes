/*

This program explains how to use conditional 

Author	: Vivek Tiwari
Usage	: #ifdef MACRO
		........
	  #endif

Version	: 1.0

*/
#define NEGATIVE
#include<stdio.h>
int main()
{
	#ifdef POSITIVE
	int a = 10,b = 20;
	#endif
	
	#ifdef NEGATIVE
	int a = -10,b = -20;
	#endif
	printf("\n %d + %d = %d\n",a,b,a+b);
	
}
