/*

This program explains how to define and declare unions

Author	: Vivek Tiwari
Usage	: union union_name{members list};
Version	: 1.0

*/

#include<stdio.h>

union my
{
	short iresult;
	float fresult;
};

int main()
{
	int a=10,b=20;
	union my result;
	result.iresult = b/a;
	printf("\n %d ",result.iresult);
	result.fresult =(float)a/b;
	printf("\n %lf\n",result.fresult);
	printf("\n Size of Union : %d\n",sizeof(result));
}
