/*

This program explains about all relations operators
	Relational operators evaluates either to 1 (true) or 0 (false).	

Author  :  Vivek Tiwari
Usage	:  exp1 <relational operator> exp2  	eg:- exp1>exp2;
	   exp1 & exp2 can be any expression
Version	:  1.0

*/

#include<stdio.h>
main()
{
	int a=10,b=20;
	
	printf("\n a = %d, b = %d",a,b);
	printf("\n a>b  : %d",a>b);
	printf("\n a<b  : %d",a<b);
	printf("\n a>=b : %d",a>=b);
	printf("\n a<=b : %d",a<=b);
	printf("\n a!=b : %d",a!=b);
	printf("\n a==b : %d\n",a==b);
}

