#include<stdio.h>
char i;
void try1();
void try2(char *);
main()
{
	try1();
}
void try1()
{
	static char *ptr="abcde";
	i=*ptr;
	printf("\n %c \n",i);
	try2(++ptr);
}
void try2(char *t)
{
	static char *pt;
	printf("\n %s \n",t);
	pt=t+strlen(t)-1;
	if(i!=*pt--)
	if(t!=pt)
		try1();
}
