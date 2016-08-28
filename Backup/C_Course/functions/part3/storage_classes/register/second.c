/*

This program explains how to declare & use register storage class variables

Author	:  Vivek Tiwari
Usage 	:  register datatype variable;
Version	:  1.0

*/

#include<stdio.h>
int main()
{
    register int i=1,n;
    printf("\n Enter how many times : ");   
     scanf("%d",&n)			//Error: Cannot request for address of register variables
	for(;i<n;i++)
	printf(" %d \n",i);
}
	

