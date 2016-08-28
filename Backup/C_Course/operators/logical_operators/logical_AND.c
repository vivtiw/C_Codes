/*

This program explains about && (Logical AND) operator

The logical AND operator (&&) evaluate the truth or falsehood of pairs of expressions. 
The logical AND operator evaluates to 1 if and only if all expressions are true.

Author	:  Vivek Tiwari.
Usage	:  exp1 && exp2
	   exp1 And exp2 can be any expression.   
version : 1.0

*/

#include<stdio.h>
main()
{
	int a=1,b=0;
	printf("\n a = %d , b = %d , (a>=1) && (b<=0) : %d\n",a,b,(a>=1) && (b<=0));
	
	printf("\n a = %d , b = %d , (a>=1) && (++b<=0) : %d\n",a,b,(a>=1) && (++b<=0));
	printf("\n  %d \n","Veda" && "sol");
}
