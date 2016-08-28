/*

This example shows how to define user defined functions which returns some value 

Author	:  Vivek Tiwari
Usage	:
	   return_type function_name(formal list)
	   {
		function body;
		return exp;	
	   }
	   Default return type of a function is int
	   return statement can be use to return any value we desired explicitly 
	   exp : any c valied expression	 	
Version	: 1.0

*/
#include<stdio.h>

int main()
{
	printf("\n I am in main function\n");
	printf("\n Value returned by add : %d\n",add());
	
}

add()
{
	int a=10,b=20;
	return a+b;
}
