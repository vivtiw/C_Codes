/*

This program explains about formatted input function scanf
This program also explains modifiers 
Author	:  Vivek Tiwari
Usage	:  scanf("char *formated",&arg,.....);
Version	:  1.0

*/

#include<stdio.h>

int main()
{
	short int s;
	long int l;
	double d;
	long double ld;
	
	printf("\n Enter shore int : ");
	 scanf("%hd",&s);		// Expects short integer as input should be in b/n 
	printf("\n s = %hd",s);		// -32768 to 32767 
	
	printf("\n Enter long integer : ");
	 scanf("%ld",&l);		// Expects long integer as input
	printf("\n l = %ld",l);


	printf("\n Enter Double value : ");
	 scanf("%lf",&d);		// Expects double value as input
	printf("\n d = %f",d);


	printf("\n Enter long double : ");
	 scanf("%Lf",&ld);		// Expects long double as input
	printf("\n ld = %Lf",ld);
	
}
