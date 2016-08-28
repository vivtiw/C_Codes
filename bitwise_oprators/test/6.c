#include<stdio.h>
void foo(int ,int ,...);
main()
{
	foo(1,5);
	foo(2,5,6);

}
void foo(int a,int b,...)
{
	int j;
	int *ptr=&b;
	j=0;
	while(j<a)
	{
		printf("\n %d \n",*ptr);
		j++;
		ptr++;
	}
}
