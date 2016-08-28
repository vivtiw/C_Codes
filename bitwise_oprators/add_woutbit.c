#include<stdio.h>
int main()
{
	int a=6578,b=4567,sum;
	char *p;
	p=(char*)a;
	printf("\n %d",p);
	sum= (int)&p[b];
	printf("\n %d",sum);
}
