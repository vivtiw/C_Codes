/*

This program explains how to define Object like macro using #define directive.
This program shows  how to continue the definition onto multiple lines   


Author	: Tenam veda
Usage	: #define MACRO_NAME macro_expansion
Version	: 1.0 

*/

#include<stdio.h>

#define EVENS 2, \
	      4, \
	      6, \
	      8 	// '\' is used to continue the definition of a macro onto miltiple lines

#define NEWLINE printf("\n");
int main()
{
	int a=EVENS;
	int even_array[]={EVENS},i;
	
	for(i=0;i<4;i++)	
		printf(" %d ",even_array[i]);
	NEWLINE
}

