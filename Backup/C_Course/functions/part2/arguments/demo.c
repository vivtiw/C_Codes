#include <stdio.h>

int main()
{
	int a=10,b=20,temp;
	printf("\n Before Function Call : %d \n",temp);
	temp=add(a);
	printf("\n After Function Call : %d \n",temp);
}

	void add(int x,int y)
	{
		printf("\n In add function\n");
	}
