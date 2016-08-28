#include<stdio.h>
int main()
{
	int a=10;
	void *p = &a;
	printf("\n %d \n",*(int *)p);
}
