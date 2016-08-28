/*

This program explains about Line Oriented file input functions

Author	: Vivek Tiwari
Usage	: fgets(char *,int size,FILE *fp);
Version : 1.0

*/

#include<stdio.h>

int main()
{
	char str[80];	
	FILE *fp;
	fp = fopen("Student.dat","r");
	printf("\n Student Details\n");
	while((fgets(str,80,fp))!=NULL)
		printf("\n%s",str);
	printf("\n");
	fclose(fp);
}
