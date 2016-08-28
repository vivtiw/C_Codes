/* this program is to swap the nibble*/
#include<stdio.h>

#define SWAP(ch) (ch >> 4) | (ch << 4)
void print_bits(unsigned char x)
{
	int i=7;
	for(;i>=0;i--)
		printf("%d ",(x>>i)&1);
}
void print_reverse_bits(unsigned char x)
{
	int i=0,y=0;
	for(;i<=7;i++)
	{	y=(x>>i)&1;
		if(y==1)
		{
			printf("\n %d ",i);
			return;
		}
		printf("%d ",(x>>i)&1);
	}
}
main()
{
	unsigned char ch = 0xA2,x;
	x=SWAP(ch);
	print_bits(ch);
	 printf("\nreverse");
	print_reverse_bits(ch);
//	printf("\n %x \n",SWAP(ch));
	printf("\n");
	print_bits(x);
}
