/*

This program explaing how to allocate memory at runtime using malloc routine

Author	: Vivek Tiwari
Usage	: void *malloc(size_t size);
Version	: 1.0

*/

#include<stdio.h>
#include<stdlib.h>
int *p;	
int main()
{
	int n=4,i;
	//printf("\n Enter How many elements : ");
	 //scanf("%d",&n);
	printf("\n***********************8\n");
	p = (int *) malloc (n*sizeof(int));	// Enforsing void * to int *
	if(p==NULL)
	{
		fprintf(stderr,"\nFail to alloct memory\n");
		exit(1);
	}
	printf("\n Memory Allocated at : %x ",p);
	printf("\n Intial Values \n");
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	for(i=0;i<n;i++)
		p[i] = i+1;
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
}

