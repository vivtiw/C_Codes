int copy(int *d,int *s,int n)
{
	register int *p = d;
	int bytes = n*sizeof(int);
	while(n) 
		*p++ = *s++;
	return bytes;
}
