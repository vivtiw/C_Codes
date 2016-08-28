/*

This program explains about formatted input function scanf
This program also explains various conversion specifiers
Author	:  Vivek Tiwari
Usage	:  scanf("char *formated",&arg,.....);
Version	:  1.0

*/

#include<stdio.h>

int main()
{
	unsigned int un;
	int i;
	float f;
	char c, name[20];
	
/*	printf("\n Enter Unsigned integer : ");
	 scanf("%u",&un);		// Expects unsigned integer as input
	printf("\n un = %u",un);
	
	printf("\n Enter Any integer : ");
	 scanf("%d",&i);		// Expects integer as input
	printf("\n i = %d",i);


	printf("\n Enter Any float : ");
	 scanf("%f",&f);		// Expects floting value as input
	printf("\n f = %f",f);


	printf("\n Enter Any char : ");
	 scanf(" %c",&c);		// Expects character as input
	printf("\n c = %c",c);*/
	
	
	/*printf("\n Enter Your Name without space : ");
	 scanf("%s",name);		// Expects string as input
	printf("\n name = %s",name);*/

/*	printf("\n Enter any Octal Number : ");
	 scanf("%o",&i);		// Expects octal as input
	printf("\n i = %o(octal)\t i = %d(decimal)",i,i);
	
	printf("\n Enter any Hexadecimal Number : ");
	 scanf("%x",&i);		// Expects Hexadecimal as input
	printf("\n i = %x(hexadecimal)\t i = %d(decimal)\n",i,i);

	gets(stdin);*/
	
	printf("\n Enter any string with contains a-f, no space : ");
	 scanf("%[a-f]",name);	// Expects string with a-f 
	printf("\n name = %s",name);
}
