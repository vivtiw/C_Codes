#include <stdio.h>

#define MAX 20
#define INIT {1, 2, 3, 4, 5}


int main()
{
	int a[MAX]=INIT,i;
	
	for(i=0; i<MAX; i++)
		printf(" %d",a[i]);		
	printf("\n");
	
}
