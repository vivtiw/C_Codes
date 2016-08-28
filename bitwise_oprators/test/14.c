#include<stdio.h>
void string(char*);
main()
{
	char *p="tit for tat";
	string(p);
	printf("\n %s\n",p);
}
void string(char *q)
{
	char *r=q+strlen(q)-1;
	for(;q<r;q++,r--)
	{
		*q=*q ^*r;
		*r=*r^*q;
		*q=*q^*r;
	}
}
		
