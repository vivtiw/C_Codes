#include<stdio.h>
int main()
{
	int **a,i,j;
	
	a=malloc(2*4);
	a[0]=malloc(2*4);
	a[1]=malloc(2*4);
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
