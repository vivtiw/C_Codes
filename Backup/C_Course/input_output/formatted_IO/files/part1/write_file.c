/*

This program explains how to write data in to a File character by character.

Author	: Vivek Tiwari
Usage	: FILE *fopen(char *name,char *mode);
	  int puts(int c,FILE *fp)
Version	: 1.0

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[20],ch;
	FILE *fp;	// Declaring File Pointer
	printf("\n Enter new File Name : ");
	 scanf("%[^\n]",name);
	fp = fopen(name,"w");	// Opening a file in write mode
	if(fp==NULL)
	{
		printf("\n Fail to Create A File\n");
		exit(1);
	}
	printf("\n File Created \n");
	printf("\n Enter data into File & Press \"clrl+d\" to end\n");
	while((ch = getchar())!=EOF)
		fputc(ch,fp);		// Writes ch into file pointed by file pointer
	fclose(fp);
}
