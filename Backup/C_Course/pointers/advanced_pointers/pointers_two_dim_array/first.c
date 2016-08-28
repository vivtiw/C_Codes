#include<stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}},i,j,*p;
	printf("\n Elements in a \n");
/*	
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			printf("\t%d ",a[i][j]);
	
	
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			a[i][j]=i+j;
	printf("\n");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			printf("\t %d ",a[i][j]);
	*/
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			printf("%d ",*(*(a+i)+j));
	printf("\n");
}
