void printBits(int x)
{
        int i,j;
        for(i=31;i>=0;i--)
        {
                j=(x>>i) & 0x01;
                printf("%d",j);
        }
}

int main()
{
	int a = -10;
	unsigned int b = a,c;
	printBits(a);
	printf("\n");
	printBits(b);
	c = a+b;
	printf("\n");
	printBits(c);
	printf("\n %d %u\n",a,b);
	
}
