/* 

This program is a source file which contains some external varialbes & functions with internal     linkage which cannot be shared by other source files used with this to create executable.

Author	:  Vivek Tiwari
Version :  1.0

*/

#include<stdio.h>
static int result;		// Making External linkage to internal linkage
//int result;
static void show();
int sub(int x,int y)
{
	result = x-y;
	return result;
}

static void show()
{
	printf("\n I am Static function in second with internal Linkage \n : %d",result);
}
