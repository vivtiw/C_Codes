/*

This program explains how to define Object like macro using #define directive.
This program shows When the preprocessor expands a macro name, the macro's expansion replaces the  macro invocation, then the expansion is examined for more macros to expand.   


Author	: Tenam veda
Usage	: #define MACRO_NAME macro_expansion
Version	: 1.0 

*/

#include<stdio.h>

#define SIZE 5		// And SIZE is again expanended	to 10 
#define MAX SIZE	// When MAX is used it is expanded to SIZE

#define NEWLINE printf("\n");
int main()
{
	int a[SIZE],b[MAX];
	
	printf(" A : %d \t B : %d\n",sizeof(a),sizeof(b));
	NEWLINE
}

