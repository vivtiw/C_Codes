#include<stdio.h>
int main()
{
	int n,a[40],i,j,ele;
	printf("\n Enter Array Size : ");
	 scanf("%d",&n);
	printf("\n Enter %d Elements : ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n Elements Before Deleting : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n Enter Element To Delete\n");
	 scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(ele==a[i])
		{
			for(j=i;j<n;j++)
				a[j]=a[j+1];
			n--;
		}
	}
	printf("\n Elements After Deleting : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
