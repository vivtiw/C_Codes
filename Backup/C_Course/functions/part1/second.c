/*

This example shows how to define user defined functions
This program will also demonstrate that all functions return some int value

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

float display()
{
	printf("\n I am in display function \n");
	return 10.6;
}
int main()
{
	float temp;
	printf("\n I am in main function\n");
	temp=display(10,20);
	printf("\n I am back in main function & return value of display : %f\n",temp);	
}

