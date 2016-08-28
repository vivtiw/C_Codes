/*

This program explains how to define Object like macro using #define directive.
This program shows that we can use any C keywords in macros  


Author	: Tenam veda
Usage	: #define MACRO_NAME macro_expansion
Version	: 1.0 

*/

#include<stdio.h>

	#define INTEGER int		// Object like macro for a c keyword 'int'
	#define Condition if		// Object like macro for a c keyword 'if'


int main()
{
	INTEGER a=30,b=20;
	Condition(a>b)
		printf("A is Big\n");
	else
		printf("B is Big\n");	
}

