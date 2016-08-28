/*

This program explains how to manipulate command line arguments

Author	: Vivek Tiwari
Usage	: int main(int argc,char *argv[])
Version	: 1.0

*/

#include<stdio.h>
int main(int argc,char *argv[])	// argc counts total number of arguments
{				// argv stores all parameters
	int i;
	printf("\n File Name : %s\n",argv[0]);
	printf("\n Total Number of Arguments : %d",argc);
	printf("\n Arguments Passed : ");
	for(i=1;i<argc;i++)
		printf("%s ",argv[i]);
	printf("\n");
}
