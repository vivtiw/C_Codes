#include<stdio.h>
struct A
{
	int x,int y;
};
struct B
{
	int x,int y;
	double m;	
};

int main()
{
	struct A objA;
	struct B objB={10,20,40.5};
	objA=objB;
	printf("\n %d %d \n",objA.x,objA.y);
}
