/*

This program explains a programming bug know as infinite loop

Author	:  Vivek Tiwari
Version :  1.0

*/

#include<stdio.h>

int main()
{
	int i;
	for(;;)
		printf(" %d ",i);
}
