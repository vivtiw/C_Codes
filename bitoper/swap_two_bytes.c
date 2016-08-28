#define bswap_16(x) \
		     x>>8 | x << 8              

int main()
{
	unsigned short int a=65234;
	printBits(a);
	a = bswap_16(a);
	printBits(a);

}
