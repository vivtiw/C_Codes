/*

This example explains about conditional operator also called as "ternary operator" 

Author	:  Vivek Tiwari
Usage	:
	   exp1 ? exp2 : exp3

           Arguments 
 	   exp1   
		Any expression.
	   exp2   
		Any expression.
	   exp3   
 		Any expression.

Version	:  1.0

*/

#include<stdio.h>
main()
{
	int a=10;
	int b;
	double c;
	//printf("\n  %d  \n",sizeof((a%5==0)?b:c));
	printf("\n  %d  \n",sizeof((a%5==0)?b:c));
}
