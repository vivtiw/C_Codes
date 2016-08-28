/*

This program explaing about callback functions in c
This is a generic program which can sort any type of array

Author 	: TeamVeda
Usage	: (*fun)(argument list);
Version	: 1.0

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef int compare(void *,void *);
void Shorting(void *array,int size,int ele_size,compare c) // Sorting function
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
if(c(array+j*ele_size,array+(j+1)*ele_size)==1)
			{
	void * temp = malloc(size*ele_size);
memcpy(temp,array+(j*ele_size),ele_size);
memcpy(array+(j*ele_size),array+((j+1)*ele_size),ele_size);
memcpy(array+((j+1)*ele_size),temp,ele_size);
		free(temp);				
		}
		}
	}
}
int compare_int(void *p,void *q)	// Compare ints
{
	int ele1 = *(int *)p;
	int ele2 = *(int *)q;
	if(ele1<ele2)
		return -1;
	if(ele1>ele2)
		return 1;
	return 0;
}

int compare_float(void *p,void *q)	// Compre Floats
{
        float ele1 = *(float *)p;
        float ele2 = *(float *)q;
        if(ele1<ele2)
                return -1;
        if(ele1>ele2)
                return 1;
        return 0;
}

int main()
{
	int array[5] = {2,5,-1,4,6},i;
	float f[6] = {12.34,78.23,1.45,5.67,67.89,1.46};
Shorting((void *)array,5,sizeof(array[0]),compare_int);
	printf("\n");
	for(i=0;i<5;i++)
		printf("%d ",array[i]);
Shorting((void *)f,6,sizeof(f[0]),compare_float);
	printf("\n");
	for(i=0;i<5;i++)
		printf("%.2f ",f[i]);
	
	printf("\n");

}
