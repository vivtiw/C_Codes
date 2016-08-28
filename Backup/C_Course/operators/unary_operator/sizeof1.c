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
	unsigned short int a = 65535;
        unsigned short b = 1;
        unsigned short int c = a + b;
        printf("\na + b requirs \"%d bytes\" & c is of \"%d bytes.\"\n\n",sizeof(a+b),sizeof(c));
        printf("correct a + b = %d \noverflow a + b = %d.\n",a+b, c);
printf("correct a + b = %d .\n",a+b);
}

