/*

This program explains about increment operator and in how many ways it can be used
	
Author  :  Vivek Tiwari
Usage 	:  lvalue++	Called as "Postfix Form"
	   ++lvalue	Called as "Prefix Form"
	   In POSTFIX  increments the current value of lvalue after lvalue has been referenced.
	   In PREFIX  increments the current value of lvalue before lvalue has been referenced.
	
Version :  1.0

*/

#include<stdio.h>
main()
{
	int a=10,b=10;
	
	printf("\n postfix\ta = %d\n",a++);	// a is refered first then incremented
	
	printf("\n prefix \tb = %d\n",++b);	// b is incremented first then refered
}
