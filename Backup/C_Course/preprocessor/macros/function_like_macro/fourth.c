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
	int a,b,c;
	printf("\n Enter any three Integer : ");
	 scanf("%d%d%d",&a,&b,&c);
	printf("\n Biggest of Three numbers : %d\n",BIG(BIG(a,b),c));

	
	
}
