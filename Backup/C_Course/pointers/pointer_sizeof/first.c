#include<stdio.h>

int main()
{
	int *i,a[10];
	float *f;
	double *d;
	char *c;
	void *v;
	printf("\n size of int pointer : %d",sizeof(i));
	printf("\n size of float pointer : %d",sizeof(f));
	printf("\n size of double pointer : %d",sizeof(d));
	printf("\n size of char pointer : %d\n",sizeof(c));
	printf("\n size of void pointer : %d\n",sizeof(v));
	i=a;
	printf("\n size of array pointer : %d",sizeof(i));
	printf("\n size of array : %d\n",sizeof(a));
	
}
