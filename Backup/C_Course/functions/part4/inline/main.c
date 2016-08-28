/* 

This program is a source file which cotains some external linkage variables & functions which can  be shared by other source files used with this to create executable.

Author	:  Vivek Tiwari
Version :  1.0

*/

#include<stdio.h>
extern int result; 	// Declaration
extern inline void disp();
int main()
{
	int a=10,b=20;
	printf("\n  Result = %d",result);
	add(a,b);
	printf("\n  Result = %d",result);
	sub(a,b);
	printf("\n  Result = %d\n",result);
	disp();
}
