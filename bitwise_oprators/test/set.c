#include<stdio.h>

void print_bits(unsigned char x)
{
        int i=7;
        for(;i>=0;i--)
                printf("%d ",(x>>i)&1);
}
void set(unsigned char x,int pos)
{
	x=(x|(1<<pos-1));
	print_bits(x);
}
int main()
{
	unsigned char c =0x67;
 	print_bits(c);
	printf("\n");
	set(c,5);	
	printf("\n");
	togglebit(c,6);
}	
void togglebit(unsigned char x,int pos)
{
	x=x^(1<<pos-1);
	print_bits(x);
}
