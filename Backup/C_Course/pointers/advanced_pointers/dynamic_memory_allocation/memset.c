/*

This program explaing how to allocate memory at runtime and inisilize to specific value 

Author	: Vivek Tiwari
Usage	: void *memset(void *s, int c, size_t n);
Version	: 1.0

Note	: Inisilize byte by byte 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int *p,n,i;
	void *x;
	printf("\n Enter How many elements : ");
	 scanf("%d",&n);
	x = malloc (n*sizeof(int));	// Enforsing void * to int *
	if(x==NULL)
	{
		fprintf(stderr,"\nFail to alloct memory\n");
		exit(1);
	}

	memset(x,1,n*sizeof(int));

	printf("\n Memory Allocated at : %x ",p);
	printf("\n Intial Values \n");
	p = (int *)x;
	for(i=0;i<n;i++)
		printf(" %d ",p[i]);

	/*printf("\n Printing Bits \n");
        for (i=31; i>=0; i--)
                printf(" %d",p[0]>>i&1);
        printf("\n ");*/

	for(i=0;i<n;i++)
		p[i] = i+1;
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
}

