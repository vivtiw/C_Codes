#include <stdio.h>
#define MAX 20

int main()
{
	int a[MAX],i;
	
	for(i=0; i<MAX; i++)
		a[i]=i+1;

	for(i=0; i<MAX; i++)
		printf(" %d",a[i]);		
	#undef MAX 
	printf(" %d",MAX);		
	printf("\n");
	
}
