/*

This program explaing how to enlarge memory allocate at runtime using malloc routine

Author	: Vivek Tiwari
Usage	: void *realloc( void *ptr, size_t new_size);
Version	: 1.0

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int *p,n,i,*temp;
	printf("\n Enter How many elements : ");
	 scanf("%d",&n);
	p = (int *) malloc (n*sizeof(int));	// Enforsing void * to int *
	if(p==NULL)
	{
		fprintf(stderr,"\nFail to alloct memory\n");
		exit(1);
	}
	printf("\n Memory Allocated at : %x ",p);
	for(i=0;i<n;i++)
		p[i] = i+1;
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
	temp = realloc(p,(n*sizeof(int))+10);
	//memset(p+n,0,sizeof(int)*n);
	
	if(p==temp)
		printf("\n old memory is extended\n");
	else
		printf("\n new memory is allocted\n");
	
	n+=10;
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");	
}

