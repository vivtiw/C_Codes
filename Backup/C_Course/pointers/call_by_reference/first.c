/*

This program explains how to pass address as arguments to a function

Author	:  Vivek Tiwari
Usage	:  fun(datatype *,....){body;}
Version	:  1.0

*/

#include<stdio.h>
void increment(float *);

int main()
{
	float f=10.234;
	printf("\n f = %.2f",f);
	increment(&f);
	increment(&f);
	increment(&f);
	increment(&f);
	printf("\n f = %.2f\n",f);
}

void increment(float *p)
{
	++*p;
}
