/*

This program explaing how to allocate memory at runtime using calloc routine

Author	: Vivek Tiwari
Usage	: void *calloc(size_t nmemb, size_t size);
Version	: 1.0

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("\n Enter How many elements : ");
	 scanf("%d",&n);
	p = (int *) calloc (n,sizeof(int));	// Enforsing void * to int *
	if(p==NULL)
	{
		printf("\n Fail to alloct memory\n");
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

