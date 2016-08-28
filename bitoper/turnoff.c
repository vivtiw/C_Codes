#define turnoff(n,p)	(~(1<<(p-1)))&n
/*
int turnoff(unsigned int n,int p)
{
       	int i=1;
       	i=i<<(p-1);
       	i = ~i;
       	n = n&i;
       	return n;
}
*/

int main()
{
	int a=125;
	printBits(a);
	a = turnoff(a,4);
	printBits(a);
}
