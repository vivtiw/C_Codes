#include<stdio.h>
int main()
{
	int a=02;
	int b=20;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\n %d %d ", a,b);
	
}

