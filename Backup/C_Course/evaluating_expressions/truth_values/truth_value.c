/*

This Program explains about truth values Evaluvated in C language
The following program prints `truth value' for three times & 'false value' for two times.
Author	:  Vivek Tiwari
Usage	:  Many programming languages have a special representation for the concepts of “true” and            “false.” In C, any nonzero numeric value or any nonempty string value is true. Any other           value (zero or the null string "") is false.
	
Version	:  1.0

*/

#include<stdio.h>
int main()
{
    float j;
    char *str=NULL;
    if(12)
	printf("\n True");
    if("Veda Solutions")
	printf("\n True");
    if(j=-30.123)
	printf("\n True");
    if(str)
    	printf("\n True ");
    else
    	printf("\n False ");

    if(0)
	printf("\n True\n");
    else
    	printf("\n False \n");
	
} 
 
