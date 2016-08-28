/*

This program explains about Line Oriented file input functions getdelim

Author	: Vivek Tiwari
Usage	: getdelim(char **str,int *size,int delimiter,FILE *fp);
Version : 1.0

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int size=80;
	char *str;	
	FILE *fp;
	str = (char *)malloc(sizeof(char)*size);
	fp = fopen("Student.dat","r");
	printf("\n Student Details\n");
	while((getdelim(&str,&size,'|',fp))!=EOF)
		printf("\n%s",str);
	printf("\n");
	fclose(fp);
}
