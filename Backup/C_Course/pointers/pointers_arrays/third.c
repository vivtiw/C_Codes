/*

This program explains how pointers & arrays are closely linked

Author	:  Vivek Tiwari
Usage 	:  datatype variable[size];
version	:  1.0

*/

#include<stdio.h>

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10},i,*p;

	printf("\n Array Elements Before change function call are \n");
	p=a;
	for(i=0;i<10;i++)
		printf("\n %x : %d ",&a[i],a[i]);
	
	printf("\n No of Elements from  %x & %x are : %d\n",p+5,p+2,((p+5)-(p+2)));
	

}



