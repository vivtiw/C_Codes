#include<stdio.h>
int main()
{
	int result;
	result=fact(5);
	printf("\n Factorial : %d  ",result);
}
int fact(int x)
{
	if(x==1)
		return 1;
	else
		return x * fact(x-1);
	
}
