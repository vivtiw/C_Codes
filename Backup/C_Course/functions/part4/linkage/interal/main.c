/* 

This program is a source file which cotains some external linkage variables & functions which can  be shared by other source files used with this to create executable.

Author	:  Vivek Tiwari
Version :  1.0

*/

#include<stdio.h>
static int result; 	// Error: Result is not external linkage
int main()
{
	int a=10,b=20;
	printf("\n  Main Result = %d",result);
	result = add(a,b);
	printf("\n  Main Result = %d",result);
	result = sub(a,b);
	printf("\n  Main Result = %d\n",result);
	disp();
	//show();		// Error: show is internal linkage & can be called in second file	
}
