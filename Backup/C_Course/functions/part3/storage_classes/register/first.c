/*

This program explains how to declare & use register storage class variables

Author	:  Vivek Tiwari
Usage 	:  register datatype variable;
Version	:  1.0

*/

#include<stdio.h>
int main()
{
    register int i=1;
    for(;i<10;i++)
	printf(" %d \n",i);
}
	

