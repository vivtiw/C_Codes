/*

This program explains how to Create a  Files 

Author	: Vivek Tiwari
Usage	: FILE *fopen(char *name,char *mode);
Version	: 1.0

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[30];
	FILE *fp;	// Declaring File Pointer
	printf("\n Enter new File Name : ");
	 scanf("%[^\n]",name);
	fp = fopen(name,"w");
	if(fp==NULL)
	{
		printf("\n Fail to Create A File\n");
		exit(1);
	}
	printf("\n File Created \n");
}
