#include <stdio.h>
#define SIZE    5
int main()
{
	int a[SIZE]={2,6,3,7,4};
	int i,j;
	for(i=0;i<SIZE-1;i++)
		for(j=i+1;j<SIZE;j++)
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	for(i=0;i<SIZE;i++)
		printf(" %d",a[i]);
}


