/*

This program explains about formatted input function scanf
This program also explains how to ignore whitespace characters (this includes blank, newline and   tab characters) encountered before the next non-whitespace character.
Author	:  Vivek Tiwari
Usage	:  scanf("char *formated",&arg,.....);
Version	:  1.0

*/

#include<stdio.h>

int main()
{
	char a,b; 
	
	/*printf("\n Enter any two characters : ");
	 scanf("%c%c ",&a,&b);		// Stores newline or whitespace in b  
	printf("\na = %c\tb = %c\n",a,b);*/

	printf("\n Enter any two characters : ");
	 scanf(" %c %c",&a,&b);		// ignores newline or whitespace in b  
	printf("\na = %c\tb = %c\n",a,b);
	
	printf("\n Enter any character : ");
	 scanf(" %c",&a);		// ignores newline or whitespace in b  
	printf("\na = %c\n",a);
	
}
