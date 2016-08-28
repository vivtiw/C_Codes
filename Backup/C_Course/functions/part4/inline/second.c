/* 

This program is a source file which cotains some external linkage variables & functions which can  be shared by other source files used with this to create executable.

Author	:  Vivek Tiwari
Version :  1.0

*/

#include<stdio.h>
extern int result;	// Declaration
void sub(int x,int y)
{
	result = x-y;
}
