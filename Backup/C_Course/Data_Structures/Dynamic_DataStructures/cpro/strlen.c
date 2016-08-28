main()
{
	stlen("Mohan Reddy");
}
int stlen(char *str)
{
	int count=0;
	while(*str){
		count++;
		str++;
	}
	printf("%d",count);
}


