int noBitsSet(unsigned int n)
{
	int i=0,c=0;
	for(;i<32;i++)
		if((n>>1)&0x1)
			c++;
	return c;			
}
