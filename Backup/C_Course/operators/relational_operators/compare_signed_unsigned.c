#include<stdio.h>
int main()
{
//	unsigned int a=10;
	unsigned int a=10;
//	signed int b=-15;
	signed int b=-5;
//	printf(" %d\n",a+b>10);	// Condition is true because a+b result is promoted to unsigned int 
	printf(" %d\n",b>a);	// Condition is true because a+b result is promoted to unsigned int 
}
