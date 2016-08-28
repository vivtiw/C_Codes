/*

This program explains a programming bug know as infinite loop

Author	:  Vivek Tiwari
Version :  1.0

*/

#include<stdio.h>

int main()
{
	int i=0;
	while(!i) 	// Condition is always false 
		printf(" %d ",i);
}
