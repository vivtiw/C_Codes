/*

This program explains how pointers & arrays are closely linked

Author	:  Vivek Tiwari
Usage 	:  datatype variable[size];
version	:  1.0

*/

#include<stdio.h>

void change(int []);
int main()
{
	int a[]={1,2,3,4,5},i;

	printf("\n Array Elements Before change function call are \n");

	for(i=0;i<5;i++)
		printf("%d ",a[i]);

	change(a);
	printf("\n Array Elements After change function call are \n");

	for(i=0;i<5;i++)
		printf("%d ",a[i]);
}

void change(int *p)
{
	int i;
	for(i=0;i<5;i++,p++)
		*p=*p+2;
}	


