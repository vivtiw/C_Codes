/*

This program expains about automatic storage class variables.

Author	:  Vivek Tiwari
Usage	:  auto datatype variable;
Version	:  1.0

*/

#include<stdio.h>
void count();
int main()
{
	count();
	count();
	count();
	count();	
}
void count()
{
	int c=1;
	printf("\n Function called %d time\n",c++);
	printf("\n Function called %p time\n",&c);
}
