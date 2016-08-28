#include<stdio.h>
int main()
{
	int a[4][7]={1,2,3,4,5,6};
	printf("\n Number of Rows : %d ",sizeof(a)/sizeof(a[0]));
	printf("\n Number of Columns : ");
	printf("%d\n ",sizeof(a[0])/sizeof(int));
}
