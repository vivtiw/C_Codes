#include<stdio.h>
int main()
{
	int a,b,sum, carry;
	scanf("%d %d",&a,&b);
	sum = a ^ b;
	carry = a & b;
	while (carry != 0)
	{
		carry <<= 1;
		a = sum;
		b = carry;
		sum = a ^ b;
		carry = a & b;
	}	
	printf("%d",sum);
}
