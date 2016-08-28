#include<stdio.h>
main(int argc,char*argv[])
{
	printf("\n %c",*(argv[1]+1));
	printf("\n %c",(*(argv+1))[2]);		
	printf("\n %c",argv[1][2]);
}

