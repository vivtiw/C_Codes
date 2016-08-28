#include <stdio.h>

#define mult_by_pow_2(n,p)	n<<p /* n * (p power 2) */

int main()
{
	int a=10,b=20;
	a=mult_by_pow_2(a,2);		
	b=mult_by_pow_2(b,5);		
	printf(" %d %d\n",a,b);
}
