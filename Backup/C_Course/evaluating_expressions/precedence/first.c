/*

This program explains how expressions are evaluated (operator precedence)

Author 	:  Vivek Tiwari
Version	:  1.0

*/

#include<stdio.h>
int main()
{
     int a=10,b=5,c=10;
     printf("\n %d-%d*%d        : %d",a,b,c,a-b*c);
     printf("\n (%d-%d)*%d      : %d",a,b,c,(a-b)*c);
     printf("\n %d-%d+%d++      : %d",a,b,c
		     		,a-(b+c++));
     printf("\n");

}
