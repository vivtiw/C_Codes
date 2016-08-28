/*

This program explains about ! (Logical Negation or Logical NOT) operator

The logical negation operator (!) takes only one operand. 
If the operand is true, the result is false; if the operand is false, the result is true.

Author	:  Vivek Tiwari.
Usage	:  !exp1
	    exp1 and exp2 can be any expression.   
version : 1.0

*/

#include<stdio.h>
main()
{
	int a=1;

	printf("\n a = %d , !a = %d \n",a,!a);
	
	a=0;	
	printf("\n a = %d , !a = %d \n",a,!a);
}
