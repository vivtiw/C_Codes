/*

This program explains how to pass reference of individual members of a structure as arguments to   furnctions

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

void div(int,int,float *);

int main()
{
	struct mystruct s;
	printf("\n Enter any two integers : ");
	 scanf("%d%d",&s.a,&s.b);
	div(s.a,s.b,&s.result);
	printf("\n %d / %d = %.2f\n",s.a,s.b,s.result);
}
void div(int a,int b,float *r)
{
	*r = (float)a/b;
}

