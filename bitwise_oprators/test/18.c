#include<stdio.h>
#include<stdlib.h>
main()
{
	char *pt,*ptr;
	pt=(char *) malloc(5);
	strcpy(pt,"abcd");
	ptr=(char *) realloc(pt,10);
	ptr=pt;
	ptr=pt+strlen(pt);
	strcpy(ptr,"ef");
	printf("%s",pt);
	printf("%s",ptr);
}
