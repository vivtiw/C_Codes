/*

This Program explain about global variables & how functions communicate with external variables

Author 	:  Vivek Tiwari
Usage	:  datatype variable; Above all functions
Version	:  1.0

*/

#include<stdio.h>

int a=10,b=a;

void initialize();
void swap();

int main()
{
	initialize();
	printf("\n Before Swap\na = %d\tb = %d",a,b);
	swap();
	printf("\n After Swap\na = %d\tb = %d\n",a,b);
}

void initialize()
{
    a=10,b=20;		//Global or External Variables 
}

void swap()
{
   int temp = a;	//temp is local variable
   a=b;
   b=temp;
}
