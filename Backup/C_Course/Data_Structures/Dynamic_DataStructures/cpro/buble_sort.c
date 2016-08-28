#include <stdio.h>
#define  SIZE 5
int main()
{
	int a[SIZE]={2,6,3,9,4};
	int i,j;
	for(i=0;i<SIZE;i++)
		for(j=0;j<SIZE-1;j++)
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
		       	}

	for(i=0;i<SIZE;i++)
		printf(" %d",a[i]);
}

