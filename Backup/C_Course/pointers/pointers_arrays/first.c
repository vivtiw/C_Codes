/*

This program explains how pointers & arrays are closely linked

Author	:  Vivek Tiwari
Usage 	:  datatype variable[size];
version	:  1.0

*/

#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5},i,*p;
	printf("\n Array Elements are \n");
	p=a;	// equal to p=&a;

	for(i=0;i<5;i++)
		printf("%d ",a[i]);

	printf("\n");
	for(i=0;i<5;i++)
		printf("%d ",*(p+i));
	
	printf("\n");
	for(i=0;i<5;i++)
		printf("%d ",*(a+i));		//a++ is not valied

	printf("\n");
	for(i=0;(p+i)<(p+5);i++)
		printf("%d ",*(p+i));

}


