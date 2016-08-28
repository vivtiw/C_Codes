/*

This program explais about comma operator

Author	: Vivek Tiwari

Usage	:
	  exp1,exp2,.....

Version : 1.0

*/
#include<stdio.h>
main()
{
	int a,b,c;
	a=(b=20,c=30);
	// the above expression returns the value of the rightmost expression. means a is set to 30
	printf("\n a = %d \t b = %d \t c = %d\n",a,b,c);
	
}
