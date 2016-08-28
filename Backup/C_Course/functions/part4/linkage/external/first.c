/* 

This program is a source file which cotains some external linkage variables & functions which can  be shared by other source files used with this to create executable.

Author	:  Vivek Tiwari
Version :  1.0

*/

#include<stdio.h>
	int result[5];		// Data Definition
	int add(int x,int y)	// Function Definition
	{
	//	result = x+y;
	}

	int disp()
	{
		printf("\n Result in first file : %d\n",result);
	}
