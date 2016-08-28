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
	char result[100];
	printf("\n Enter any Two Numbers : ");
	 scanf("%d%d",&a,&b);
	sprintf(result,"Sum of Two Numbers is : %d",a+b); // prints result into "result" string	
	printf("\n %s\n",result);
}
