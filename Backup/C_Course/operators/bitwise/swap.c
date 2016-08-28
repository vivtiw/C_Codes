#include<stdio.h>
int main()
{
	int a = 20;
	int b = 10;
	a^=b;
	b^=a;
	a^=b;
	printf("\n %d -> %d\n",a,b);
}
