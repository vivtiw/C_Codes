int main()
{
	char str1[40]="Mohan Reddy";
	char str2[20]="Koppula";
	char *strmycat(char *dest,char *src);
	strmycat(str1,str2);
	printf("%s",str1);
}

char * strmycat(char *dest,char *src)
{
	char *temp=dest;
	while(*temp)
		temp++;
	while(*src)
		*(temp++)=*(src++);
				
	*temp='\0';
}

