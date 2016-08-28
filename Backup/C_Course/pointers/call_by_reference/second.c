/*

This program explains how to swap two numbers without using third variable

Author	:  Vivek Tiwari
Version	:  1.0

*/

#include<stdio.h>

void swap(float *,float *);

int main()
{
	float a=10.23,b=20.45;
	printf("\n Before Swap Function Call\na = %.2f\tb = %.2f",a,b);
	swap(&a,&b);
	printf("\n After Swap Function Call\na = %.2f\tb = %.2f\n",a,b);
}

void swap(float *p,float *q)
{
	float temp=*p;
	*p=*q;
	*q=temp;
/*	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;*/
}
