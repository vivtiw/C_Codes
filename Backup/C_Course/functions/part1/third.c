/*

This example shows how to define user defined functions
This program will also demonstrate how controller will jump between function calls

Author	:  Vivek Tiwari
Usage	:
	   return_type function_name(formal list)
	   {
		function body;	
	   }
	   Default return type of a function is int  	
Version	: 1.0

*/
#include<stdio.h>

int main()
{
	printf("\n I am in main function & calling first function\n");
	first();
	printf("\n I am back in main function\n");	
}

first()
{
	printf("\n I am in first function & calling second function \n");
	second();
	printf("\n Coming out of first function & going back to calling function main\n");	
}
second()
{
	printf("\n I am in second function & calling third function \n");
	third();
	printf("\n Coming out of second function & going back to calling function first\n");	
}
third()
{
	printf("\n I am in third function \n");
	printf("\n Coming out of third function & going back to calling function second \n");	
}
