/*

This program explains how to read data from a File character by character.

Author	: Vivek Tiwari
Usage	: FILE *fopen(char *name,char *mode);
	  int gets(FILE *fp)
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
	fp = fopen(name,"r");	// Opening a file in read mode
	if(fp==NULL)
	{
		printf("\n ERROR : Fail to Open %s File\n",name);
		exit(1);
	}
	printf("\n Data in %s File \n",name);
	while((ch = getc(fp))!=EOF)		// Reads form file 
		putchar(ch);		
	fclose(fp);
}
