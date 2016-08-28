#include<stdio.h>
int main()
{
	
	unsigned short int a = 65530;
	signed short int b=-5;
/*	if(b>a)
		printf("\n yes \n");
	else
		printf("\n no \n");
*/		
	
	if((unsigned short int)b==((65535-5+1)))
		printf("\n true");
	
}
