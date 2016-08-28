/*

This program explaing how to define a function like macro takes arguments & how to invoke them
Author	: Vivek Tiwari
Usage	: #define MACRO_NAME()	MACRO_BODY
Version	: 1.0

*/

#include<stdio.h>

#define 	BIG(x,y)	(x>y) ? x : y  	// Macro takes no argument

int main()
{
	int a,b,result,*p;
	char y = 'F', z = 'S';
	printf("\n Enter any two Integer : ");
	 scanf("%d%d",&a,&b);
	printf("\n Biggest of Two numbers : %d\n",BIG(a,b));
	printf("\n Biggest of Two char : %c\n",BIG(y,z));
	printf("\n Biggest of Two float : %c\n",BIG(10.23,24.45));
	
	
}
