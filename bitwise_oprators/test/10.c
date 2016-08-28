#include<stdio.h>
void process(char **);
main()
{
	static char *table[]={"satyam:truth=t ","shivam:shiv=s","sundaram:beauty=b",(char*)0};
	int j;
	process(table);
	for(j=0;table[j];j++)
	printf("%s\n",table[j]);
}
void process(char ** table)
{
	char *p;
	while(p= *table++)
	{
		while(*p++!=':');
		*p='\0';
	}
}
