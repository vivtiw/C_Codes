/*
This program  counts bits set to 1 in an a number
*/


#include<stdio.h>
int main()
{ 
	int x=10,count,i;
	printf("\n ");
	for (i=31; i>=0; i--)
		printf(" %d",x>>i&1);
	printf("\n ");
}
