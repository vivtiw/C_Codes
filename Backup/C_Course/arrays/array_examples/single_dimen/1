/*
   This program uses Bubble sorting method to sort an array
 
   Author : Vivek Tiwari
     
   Version:1.0
 */

#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int main()
{
	 int a[MAX_SIZE];
	 int n,i,j,temp;
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
 	return 0;
} 


 
 
 
  







