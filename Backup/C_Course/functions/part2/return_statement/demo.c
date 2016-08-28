#include<stdio.h>
float div(int,int);
main()
{
	float r;
	r=div(10,20);
	printf("\n %f \n",r);
}

float  div(int x,int y)
{
	
	return (float)x/y;
}	
