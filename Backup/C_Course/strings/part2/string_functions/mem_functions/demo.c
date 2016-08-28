#include<stdio.h>
#include<string.h>

int main()
{
	int *p;
	p = malloc(0);	
	printf("\n %u %u %u \n",p-1,p,*(p-1)-9);
}

