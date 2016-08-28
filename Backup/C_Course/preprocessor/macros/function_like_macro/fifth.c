/*

This program explaing how to define a function like macro

Author	: Vivek Tiwari
Usage	: #define MACRO_NAME()	MACRO_BODY
Version	: 1.0

*/

#include<stdio.h>

void disp(char *);
#define STRING(s) disp(s) 	// Macro takes no argument

int main()
{
	STRING("VEDA SOLUTIONS");
	STRING(10);
}
void disp(char *p)
{
	printf("\n %s \n",p);
}
