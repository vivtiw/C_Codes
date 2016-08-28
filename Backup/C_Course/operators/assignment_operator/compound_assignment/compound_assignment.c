/*

This example shows how to use Compound Assignment operators
		
Author	:  Vivek Tiwari
Useage	:  lvalue += expression;
Version :  1.0		

*/

#include<stdio.h>

main()
{
	int a = 10;
	
	printf("\n Intial Value of A : %d\n",a);

	a+=10;			// a = a+10;
	printf("\n After a+=10  %d \n",a);
	
	a-=a/2;			// a = a-a/2;
	printf("\n After a-=a/2 %d \n",a);	
	
	a*=2;			// a = a*2;
	printf("\n After a*=2   %d \n",a);	
	
	a/=2;			// a = a/2;
	printf("\n After a/=2   %d \n",a);	

	a%=2;
	printf("\n After a%=2   %d \n",a);	// a = a%2;		
	
	
}
