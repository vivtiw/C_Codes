#include<stdio.h>

void swap(int *a,int *b)
{
	*a = *a^*b;
   	*b = *b^*a;
   	*a = *a^*b;
}
int main()
{
	int a=20,b=30;
	swap(&a,&b);
	printf("\n a is %d",a);
	printf("\n b is %d",b);
}


