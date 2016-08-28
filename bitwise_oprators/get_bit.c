#include<stdio.h>
#define GET(x,pos) (x>>(pos-1))&1
main()
{
	unsigned char x=0xF0;
	x=GET(x,8);
	printf("\n %d \n",x);
}
