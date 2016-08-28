#include<stdio.h>
int main()
{
	int (*a)[2],i,j;
	a = (char (*)[2]) malloc(sizeof(int) * 2 * 2);	
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			a[i][j]=1;
	printf("\n");	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf(" %d ",a[i][j]);
		printf("\n");
	}
}
