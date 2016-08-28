#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int main()
{
         int a[MAX_SIZE];
         int n,i,j,temp,ser;
        printf("\nEnter number of elements(1-100)");
        scanf("%d",&n);
        if(n>MAX_SIZE)
        {
                printf("excess value!");
                exit(1);
        }

        printf("\nEnter elements");
        for(i=0;i<n;i++)
           scanf("%d",&a[i]);
        printf("\nBefore sorting:");
        for(i=0;i<n;i++)
           printf("   %d",a[i]);
        /*sorting(descending order*/
        for(i=0;i<n;i++)
        {
                for(j=0;j<n-1;j++)
                        if(a[j]>a[j+1])
                        {
                                temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                        }
        }

        /*printig sorted array */
        printf("\n\n After sorting:");
        for(i=0;i<n;i++)
           printf("   %d",a[i]);
	printf("\n Enter Element to search : ");
	 scanf("%d",&ser);
	if((i=BinarySearch(a,ser,n))==-1)
		printf("\n Element Not Found \n");
	else
		printf("\n Element Found at %d index\n",i);
} 


int BinarySearch(int *A, int value,int N) 
{
       int low = 0,high = N - 1,mid;
       while (low <= high) 
	{
           mid = (low + high) / 2;
           if (A[mid] > value)
               high = mid - 1;
           else if (A[mid] < value)
               low = mid + 1;
           else
               return mid; // found
       }
       return -1; // not found
}
