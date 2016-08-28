/*

This program explains how to passed options in command line

Author	: Vivek Tiwari
Usage	: int main(int argc,char *argv[])
Version	: 1.0

*/

#include<stdio.h>
int main(int argc,char *argv[])	// argc counts total number of arguments
{				// argv stores all parameters
	int i,n,result;
	if(strcmp(argv[1],"-a")==0)
	{
		result=0;
		for(i=2;i<argc;i++)
		{	
			sscanf(argv[i],"%d",&n);
			result+=n;
		}
		printf("\n Sum : ");
	}
	else if(strcmp(argv[1],"-p")==0)
        {
		result=1;
                for(i=2;i<argc;i++)
                {
                        sscanf(argv[i],"%d",&n);
                        result*=n;
                }
		printf("\n Product : ");
        }
	else
	{
		printf("\n ERROR : Invalied Choice\n");
		exit(1);
	}
	printf(" %d\n",result);
}
