/*

This program explains how to pass a structure as arguments to furnctions

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

struct mystruct div(struct mystruct );

int main()
{
	struct mystruct s;
	printf("\n Enter any two integers : ");
	 scanf("%d%d",&s.a,&s.b);
	s = div(s);
	printf("\n %d / %d = %.2f\n",s.a,s.b,s.result);
}
struct mystruct div(struct mystruct x)
{
	x.result = (float)x.a/x.b;
	return x;
}

