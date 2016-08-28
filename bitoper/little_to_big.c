#define bswap_32(x) \
		     ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >>  8) |             \
		      (((x) & 0x0000ff00u) <<  8) | (((x) & 0x000000ffu) << 24))

int main()
{
	unsigned int a=4288676078;
	printBits(a);
	a = bswap_32(a);
	printBits(a);

}
