/*

This program explains how to write & read data from a File character by character.

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
	fp = fopen(name,"w+");	// Opening a file in write mode & read mode
	if(fp==NULL)
	{
		printf("\n Fail to Create A File\n");
		exit(1);
	}
	printf("\n File Created \n");
	printf("\n Enter data into File & Press \"clte+d\" to end\n");
	while((ch = getchar())!=EOF)
		putc(ch,fp);		// Writes ch into file pointed by file pointer
	fseek(fp,-10,SEEK_CUR);
	
	printf("\n\n Data in File \n");
	while((ch = getc(fp))!=EOF)	// Reads data from file
		putchar(ch);			

	fclose(fp);
}
