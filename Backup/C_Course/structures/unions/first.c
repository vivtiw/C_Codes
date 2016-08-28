/*

This program explains how to define and declare unions

Author	: Vivek Tiwari
Usage	: union union_name{members list};
Version	: 1.0

*/

#include<stdio.h>

union my
{
	int a;
	double b;
};

int main()
{
	union my u;
	u.a=100;
	printf("\n %d ",u.a);
	u.b=20.60;
	printf("\n %lf\n",u.b);
	printf("\n %d ",u.a);

}
