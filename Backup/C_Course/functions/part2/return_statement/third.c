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
	int a=10,b=20;
	printf("\n I am in main function\n");
printf("\n Value returned by add : %d\n",big(a,b));
	if(big(a,b))
		printf("\n A is Big\n");
	else
		printf("\n B is Big\n");

}

big(int a,int b)
{
	return a>b;
}
