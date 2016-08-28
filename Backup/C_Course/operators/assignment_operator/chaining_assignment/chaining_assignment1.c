/*

This Program Shows how make use of Chaining assignment 

Author	:  Vivek Tiwari
Useage  :  lvalue = lavlue = lvalue = lvalue = expression;
	   lvalue = expression;
Version :  1.0

*/

#include<stdio.h>
main()
{
	int a,b=1,c=2;
	a=b+(c*=4);		// Chaining assignment multiple
				// Multiply c with 4, and add result & b, and assign to a  
	printf("\n A = %d ",a);
	printf("\n B = %d ",b);
	printf("\n C = %d ",c);
}
