#include<stdio.h>
int main()
{
	int a=10,b=20;
	float c=100;
	printf("\n Main Block \n");
	printf("\n %d %d \n",a,b);
	{
		float c =120.5;
		printf("\n Child Block 1\n");
		printf("\n %f ",c);
	}

	printf("\n Back To Main Block  %f \n",c);

	{
		char  x ='A';
		printf("\n Child Block 2\n");
		printf("\n %c ",x);
	}

	
}
