/*

This Program Shows how make use of Chaining assignment 

Author 	:  Vivek Tiwari
Usage   :  lvalue = lvalue = lvalue = lvalue = expression;
	   lvalue = expression;
Version :  1.0
*/

#include<stdio.h>
main()
{
	int length,breath,area;
	length=breath=4;		// Chaining assignment
	area = length*breath;
	printf("\n Area of a Square : %d\n",area);
}
