/*

This program explaing about callback functions in c
This is a generic program which can sort any type of array

Author 	: TeamVeda
Usage	: (*fun)(argument list);
Version	: 1.0

*/

#include<stdio.h>
#include"include/myheader.h"





int main()
{
	int array[5] = {2,5,-1,4,6},i;
	float f[6] = {12.34,78.23,1.45,5.67,67.89,1.46};
	struct sorting obj;
	
	init(&obj,array,5,4,compare_int);	
	Shorting(obj);

	printf("\n");
	for(i=0;i<5;i++)
		printf("%d ",array[i]);

	init(&obj,f,6,4,compare_float);	
	Shorting(obj);

	printf("\n");
	for(i=0;i<5;i++)
		printf("%.2f ",f[i]);

	printf("\n");

}
