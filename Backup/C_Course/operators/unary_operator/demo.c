/*
 
This program explaing how to find out the size of the different data types
Author	:  Vivek Tiwari
Usage	:  
	   sizeof(expression);
	   sizeof(type);

Version	:  1.0
 
*/

#include <stdio.h>
int main()
{
        short int b = 1;
	printf("Before ++ b  = %d \n",b);
	sizeof ++b;
	printf("After ++ b  = %d \n",b);
}

