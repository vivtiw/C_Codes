/*

This program explains how to concatenate two tokens

Author	: Vivek Tiwari
Usage	: #define MACRO_NAME MACRO_BODY
VERSION	: 1.0

*/

#include<stdio.h>
#include<string.h>

	#define Str(s) #s
	#define String_Concat(s1,s2) 	Str( s1 ## s2)// Converting Macro argument into string constant

int main()
{
	//ttchar name[30] = String_Concat(Veda, Solutions);
	printf("\n %s \n", String_Concat(Veda, Solutions));
//	printf("\n Name of Organizations is %s\n",name) ;
	
}
