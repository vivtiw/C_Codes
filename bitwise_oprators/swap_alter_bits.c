#include<stdio.h>

//#define SWAP(c) ((c) >> 1) | ((c) << 1)
void print_bits(unsigned char x)
{
	int i=7;
	printf("\n");
	for(;i>=0;i--)
		printf("%d ",(x>>i)&1);
}

main()
{
	unsigned char x=0xAA,y=0x0;
	int i;	
	print_bits(x);
	printf("\n");
	printf("\n");

	for(i=0;i<8;i+=2)
	{
		y |= (((x>>1)&1 | (x<<1)&2)<<i);	
		
		//printf("\n %d",i);
		//print_bits(x);
		//print_bits(y);
//		y |= ((y>>i)|((x>>1) | (x<<1)))<<i;
		x>>=2;
	}
	printf("\n");
	print_bits(y);
}
