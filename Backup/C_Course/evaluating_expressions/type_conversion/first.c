/*

This program explains  how binary operators act between two types that are the same, sometimes the type of the result will be different.

Author 	:  Vivek Tiwari
Version : 1.0

*/
#include<stdio.h>

int main()
{
	unsigned short int a = 65534;
	unsigned short int b = 123;
	unsigned short int c = a + b;
	printf("correct a + b = %d \noverflow a + b = %d.\n",a+b, c);
}
