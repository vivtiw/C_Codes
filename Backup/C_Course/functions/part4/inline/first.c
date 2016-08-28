/* 

This program is a source file which cotains some external linkage variables & functions which can  be shared by other source files used with this to create executable.

Author	:  Vivek Tiwari
Version :  1.0

*/

#include<stdio.h>
int result;		// Definition
void add(int x,int y)
{
	result = x+y;
}

void disp()
{
	printf("\n Result in first file : %d\n",result);
}
