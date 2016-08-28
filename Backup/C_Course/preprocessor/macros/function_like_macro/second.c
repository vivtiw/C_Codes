/*

This program explaing how to define a function like macro takes argument

Author	: Vivek Tiwari
Usage	: #define MACRO_NAME()	MACRO_BODY
Version	: 1.0

*/

#include<stdio.h>

void check(int);
#define EVEN(n) check(n) 	// Macro takes no argument

int main()
{
	int a ;
	printf("\n Enter any Integer : ");
	 scanf("%d",&a);
	EVEN(a);
}
void check(int x)
{
	printf("\n %s\n",(x%2==0) ? "EVEN NUMBER":"ODD NUMBER");
}
