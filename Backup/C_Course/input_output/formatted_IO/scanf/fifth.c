/*

This program explains about formatted input function scanf
This program also explains how to define "scanset" for validations.
Author	:  Vivek Tiwari
Usage	:  scanf("char *formated",&arg,.....);
Version	:  1.0

*/

#include<stdio.h>

int main()
{
	char str[200]; 
	
	printf("\n Enter date in dd/mm/yy format : ");
	 scanf("%11[0-9/0-9/0-9]",str);// Reads string in the specified format
	printf("\nstr = %s",str);			  // Ignores illeagal values

	printf("\n Enter Your name & press Enter key to end : ");
	 scanf(" %[^\n]",str);			 // Reads string untill enter key is pressed
	printf("\nstr = %s",str);
}
