/*

This program explains about || (Logical OR) operator

The logical OR operator (||) evaluate the truth or falsehood of pairs of expressions. 
The logical OR operator evaluates to 1 if any one expressions is true.

Author	:  Vivek Tiwari.
Usage	:  exp1 || exp2
	   exp1 and exp2 can be any expression.   
version : 1.0

*/

#include<stdio.h>
main()
{
	int a=1,b=0;

	printf("\n a = %d , b = %d , (a>=1) || (b<=-1) : %d\n",a,b,(a>=1) || (b<=0));
	
	printf("\n a = %d , b = %d , (a<1) || (++b<=0) : %d\n",a,b,(a<1) || (++b<=0));
}
