int flip_bits(int n,int p)
{
    n = n ^ 1<<(p-1);
    return n;	
}

int main()
{
	int a=10;
	printBits(a);
	a = flip_bits(a,3);
	printBits(a);
}
