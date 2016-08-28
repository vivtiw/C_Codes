#include<stdio.h>
main()
{
	unsigned char a=0xD2,b,c;
	c=((a>>4)>>2)|((a>>4)/*<<2*/);
	b=(c<<4)|(((a&0x0f)>>2))|((a&0x0f)<<2);
	print_bits(a);
	printf("\n");
	//printf("\n %x",a);
	//printf("\n %x",b);
	//printf("\n %x",c);
	printf("\n");
	print_bits(c);
}
