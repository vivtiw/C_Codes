#include <stdio.h>

int main()
{
	int a =10,b=-10;
	printBits(a);
	printBits(b);

	a = ~a;
	a = a+1;
	
	printBits(a);
	printBits(b);
}

