int i=10;
main()
{
	extern int i;
	{
		int i=20;
		printf("%d",20);
	}
	printf("%d",i);
}
