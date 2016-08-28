/*

This program explains how to define Object like macro using #define directive.
This program shows When the preprocessor expands a macro name, the macro's expansion replaces the  macro invocation, then the expansion is examined for more macros to expand.   


Author	: Tenam veda
Usage	: #define MACRO_NAME macro_expansion
Version	: 1.0 

*/

#include<stdio.h>

#define MAX SIZE	// When MAX is used it is expanded to SIZE
#define SIZE 10		// And SIZE is again expanended	to 10 
#define VALUES 1,2,3,4,5,6,7,8,9,10

#define NEWLINE printf("\n");
int main()
{
	int even_array[MAX]={VALUES},i;
	
	for(i=0;i<SIZE;i++)	
		printf(" %d ",even_array[i]);
	NEWLINE;
}

