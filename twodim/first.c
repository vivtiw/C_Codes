#include <stdio.h>

int main()
{
	int a[2][3]={ {1,2,3},{4,5,6}};

	int *p = *a;	

	printf("  %u\n",a);	
	printf("  %u\n",*a);	
	printf("  %d\n",**a);	
}
