/*

This program explains about formatted output functions printf
This program shows how to use various conversion characters

Author	:  Vivek Tiwari
Usage 	:  %char
Version	:  1.0

*/


#include<stdio.h>
int main()
{
	char c = 'Z';
	int a=10,b=20,r=-2;
	float d = 10.23,z=10.20e2,y=10.20E-2;
	printf("\n---------------------------");
	//---------------
	printf("\n Welcome to \"C\"");	// prints formatted string
	//---------------
	printf("\n---------------------------");
	printf("\n c    = %c",c);	// prints formatted string and substituting %c by the value
	//----------------------
	printf("\n---------------------------");
	printf("\n %d -> %i",a,b); 	// prints Integers		
	//----------------------
	printf("\n---------------------------");
	printf("\n 10.23 = %e ",d);	// Scientific notation (mantise/exponent) using e
	printf("\n 10.23 = %E ",d);	// Scientific notation (mantise/exponent) using E
	printf("\n---------------------------");
	printf("\n z     = %g ",z);	// pring using shorter %e or %f
	// 10.20e2 = 10.20*10*10	
	printf("\n y     = %G ",y);	// pring using shorter %e or %f
	// 10.20e-2 = 10.20/10*10
	printf("\n---------------------------");
	//----------------------
	printf("\n d     = %f ",d);	// prints floting points	
	printf("\n d     = %g ",d);	// prints using shorter %f 	
	printf("\n d     = %G ",d);	// prints using shorter %f 	
	//----------------------
	printf("\n---------------------------");
	printf("\n b     = %o ",b);	// single octal
	//----------------------
	printf("\n---------------------------");
	printf("\n %s ","Veda Solution");// string 
 	//----------------------
	printf("\n---------------------------");
	printf("\n r    = %d ",r);	// prints unsigned integers
	printf("\n r    = %u ",r);	// prints unsigned integers
	//-----------------------
	printf("\n---------------------------");
	printf("\n 15    = %x ",15);	// prints unsigned hexadecimals 		
	printf("\n 15    = %X ",15);	// prints unsigned hexadecimals 		
 	//---------------------------------------
	printf("\n");
	fprintf(stderr,"This is an error Message\n");
}
