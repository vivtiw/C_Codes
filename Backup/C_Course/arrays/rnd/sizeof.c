#include<stdio.h>
int main()
{
	int a = 100;
	int b = sizeof(a++); // Compile time operator & resolved at compile time
	printf("\n %d \t %d\n",a,b)   ;
}
