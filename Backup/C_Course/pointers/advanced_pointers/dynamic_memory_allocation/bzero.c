/*

This program explaing how to allocate memory at runtime and inisilize to zero

Author	: Vivek Tiwari
Usage	: void bzero(void *s, size_t n);
Version	: 1.0
Note	: This function is deprecated, use memset in new programs.

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int *p,n,i;
	printf("\n Enter How many elements : ");
	 scanf("%d",&n);
	p = (int *) malloc (n*sizeof(int));	
	if(p==NULL)
	{
		fprintf(stderr,"\nFail to alloct memory\n");
		exit(1);
	}
	bzero(p,sizeof(int)*n);		//not necessary
	printf("\n Memory Allocated at : %x ",p);
	printf("\n Intial Values \n");
	for(i=0;i<n;i++)
		p[i] = i+1;
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
}

