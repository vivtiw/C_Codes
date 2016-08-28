/*

This program explains about Line Oriented file input functions getline

Author	: Vivek Tiwari
Usage	: getline(char **str,int *size,FILE *fp);
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
	while((getline(&str,&size,fp))!=EOF)
		printf("\nSize of : %d %s",strlen(str),str);
	printf("\n");
	fclose(fp);
}
