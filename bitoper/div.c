#include <stdio.h>

#define div_by_pow_2(n,p)	n>>p /* n / (p power 2) */
int main()
{
	int a=20,b=128;
	a=div_by_pow_2(a,2);		
	b=div_by_pow_2(b,4);		
	printf(" %d %d\n",a,b);
}
