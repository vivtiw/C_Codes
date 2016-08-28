/* 

This program is a source file which cotains some external varialbes & functions with internal  linkage which cannot be shared by other source files used with this to create executable.

Author	:  Vivek Tiwari
Version :  1.0

*/

#include<stdio.h>
static int result;		// Making External linkage to internal linkage
int add(int x,int y)
{
	result = x+y;
	return result;
}

void disp()
{
	printf("\n Result in first file : %d\n",result);
}
