/*

This program explains how to pass individual members of a structure as arguments to furnctions

Author	: Vivek Tiwari
Usage	: function(structure variable)
Version	: 1.0

*/
  
#include<stdio.h>
struct mystruct
{
	int a,b;
	float result;
};

float div(int,int);

int main()
{
	struct mystruct s;
	printf("\n Enter any two integers : ");
	 scanf("%d%d",&s.a,&s.b);
	s.result = div(s.a,s.b);
	printf("\n %d / %d = %.2f\n",s.a,s.b,s.result);
}
float div(int a,int b)
{
	return (float)a/b;
}

