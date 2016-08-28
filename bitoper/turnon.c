int turnon(unsigned int n,int p)
{
	int i=1;
	i=i<<(p-1);
	n = n|i;	
	return n;				
}
