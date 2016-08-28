/*

This Program Explains About Various Arithmetic operators in C
	
Author  :  Vivek Tiwari
Useage	:  exp1 + exp2 
	   An exp can be any integer or floating-point expression
Version :  1.0

*/

#include<stdio.h>
main()
{
const	int a=10,b=2;
	
	printf("\n a = %d <==> b = %d\n",a,b);
	// + used for addition 
	printf("\n a + b = %d\n",a+b);
		
	// - used for subtration 
	printf("\n a - b = %d\n",a-b);
	
	// * used for multiplication 
	printf("\n a * b = %d\n",a*b);
	
	// / used for division 
	printf("\n a / b = %d\n",a/b);
	
	// % gives reminder of given expression 
	printf("\n a %b = %d\n",a%b);
	return 0;
}

