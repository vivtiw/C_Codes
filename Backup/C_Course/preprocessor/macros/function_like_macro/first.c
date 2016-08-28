/*

This program explaing how to define a function like macro

Author	: Vivek Tiwari
Usage	: #define MACRO_NAME()	MACRO_BODY
Version	: 1.0

*/

#include<stdio.h>

void add(void);
#define ADDITION() add() 	// Macro takes no argument

int main()
{
	ADDITION();
}
void add(void)
{
	printf("\n 10 + 20 = %d\n",10+20);
}
