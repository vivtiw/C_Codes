int main()
{
	char str1[40]="Mohan Reddy";
	char str2[20]="Koppula";
	int strmycat(char *src,char *str);
	int ret=strmycmp(str1,"Mohan ReddY");
	printf("%d",ret);

}

int  strmycmp(char *src,char *str)
{
	unsigned char *str1=(unsigned char*)src;
	unsigned char *str2=(unsigned char *)str;
	unsigned char c1,c2;
	do{
		 c1=(unsigned char)*str1++;
		 c2=(unsigned char)*str2++;
		if(c1=='\0')
			return c1-c2;
	}while(c1==c2);
	return c1-c2;
}

