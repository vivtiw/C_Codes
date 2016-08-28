#include<stdio.h>
int main()
{
	unsigned char v=0x3F;     // input bits to be reversed
	unsigned char r = v; // r will be reversed bits of v; first get LSB of v
	unsigned char s = 7 ; // extra shift needed at end
	printf("\n before reversing %x\n",r);
	print_bits(v);
	for (v >>= 1; v; v >>= 1)
	{   
 		r <<= 1;
  		r |= v & 1;
  		s--;
	}	
	printf("\n%d \n",s);
	r <<= s; // shift when v's highest bits are zero
	printf("\n");
	print_bits(r);
}

