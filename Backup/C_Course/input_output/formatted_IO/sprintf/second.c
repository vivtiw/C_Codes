/*

This program explains about sprintf used to write the output into a string treminated with '\0'  

Author	: Vivek Tiwari
Usage	: sprintf(char *,char *format,...);
Version	: 1.0

*/


#include<stdio.h>
int main()
{
	int a,b;
	char result[]="%d + %d = %d";
	printf("\n Enter any Two Numbers : ");
	 scanf("%d%d",&a,&b);
	printf("\n %s\n",result);
	sprintf(result,result,a,b,a+b); // prints result into "result" string	
	printf("\n %s\n",result);
}
