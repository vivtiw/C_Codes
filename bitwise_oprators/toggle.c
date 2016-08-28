#include<stdio.h>
#define TOGGLE(n,pos) (n=n^(1<<pos-1))
main()
{
	unsigned char n=0x65,x=0x00;
	x=TOGGLE(n,7);
	printf("\n %x",x);
}
	
