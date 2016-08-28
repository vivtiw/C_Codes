int copy(int *d,const int *s,int n)
{
	register int *p = d;
	int bytes = n*sizeof(int);
	while(n--) 
		*s++ = *p++;
	return bytes;
}	
