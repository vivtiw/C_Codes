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
Version	: 1.0

*/
#include<stdio.h>

int main()
{
	int temp;
	printf("\n I am in main function\n");
	temp = display();
	printf("\n I am back in main function & value returned by display : %d\n",temp);
	temp = show();
	printf("\n I am back in main function & value returned by show : %d\n",temp);
	
}

display()
{
	printf("\n I am in display function\n");	
}
show()
{
	printf("\n I am in display function\n");
	return 1;	
}
