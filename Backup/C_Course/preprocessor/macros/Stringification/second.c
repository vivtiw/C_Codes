/*

This porgram explains how to convers macro argumnets into string constant

Author	: Vivek Tiwari
Usage	: #define MACRO_NAME MACRO_BODY
VERSION	: 1.0

*/

#include<stdio.h>
#include<string.h>
#define String_Concat(result,s1,s2) 	strcat(result,#s1); strcat(result,#s2)// Converting Macro argument into string constant

int main()
{
	char name[30]={0};
	String_Concat(name,Veda, Solutions);
	printf("\n Name of Organizations is %s\n",name) ;
	
}
