/*

This program explains how to add all numbers passed from command line

Author	: Vivek Tiwari
Usage	: int main(int argc,char *argv[])
Version	: 1.0

*/

#include<stdio.h>
int main(int argc,char *argv[])	// argc counts total number of arguments
{				// argv stores all parameters
	int i,n,sum=0;
	
	for(i=1;i<argc;i++)
	{
		sscanf(argv[i],"%d",&n);
		sum+=n;
	}
	printf("\n Sum of all given num : %d\n",sum);
}
