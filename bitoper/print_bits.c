void printBits(unsigned int a)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d",a>>i&0x1);
	printf("\n");
}

