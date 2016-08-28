/*

This program explains about strtol which converts string to long integer

Auhor	: Vivek Tiwari
Usage	: long int strtol(const char *s, char **p, int base);
	  Agruments
	  ----------
             const char *s;  
 		 is the string to be converted into a long integer. This string may consist of any                  number of blanks and/or tabs, possibly followed by a sign, followed by a string of 		       digits.  
             char **p;  
		points to a pointer that will be set to the character immediately following the                    long integer in the string "s". If no integer can be formed from "s", "strtol"                     makes "*p" point to the first character of "s". If "p" is the NULL pointer,                        this sort of action does not take place.  
	     int base;  
		is the base for the number represented in the string. A "base" of zero indicates                   that the base should be determined from the leading digits of "s". The default is                  decimal, a leading '0' indicates octal, and a leading '0x' or '0X' indicates                       hexadecimal.

Version	: 1.0

*/


#include <stdlib.h>
#include<stdio.h>   
int main()
{
char *s="20sd10", *p=NULL,*ZZ="12.34eeeee";
long int a;
double x;

printf("\n Intial Value of P : %x",p);
printf("\n Starting address of s : %x",s);

a = strtol(s,&p,10); 	// Converting to Decimal number
printf("\n Value of P : %x",p);

/*
 * At this point, "p" will point at the character 'y'
 * in the string constant, and "li" would have the
 * value 20
 */

printf("\n To base 10 : %ld\n",a);

a = strtol(s,NULL,8);   // Converting to Octal number
printf("\n To base 8 : %ld\n",a);


a = strtol(s,NULL,16);   // Converting to Hexadecimal number
printf("\n To base 16 : %ld\n",a);

x = strtod(ZZ,&p);	// Converting to double
printf("\n %lf\n",x);

}



/* 			TRY

        float strtof(const char *nptr, char **endptr);
        long double strtold(const char *nptr, char **endptr);
*/


