/*

This example shows how to define user defined functions

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
	int temp;
	printf("\n I am in main function\n");
	temp=display(); // Function Call
	printf("\n I am back in main function %d\n",temp);	
}

display()	// Function Definition
{
	printf("\n I am in display function\n");
}
