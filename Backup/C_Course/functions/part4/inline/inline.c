/*
This program expalins how to declare and define line functions.

Author 	:  Vivek Tiwari
Usage	:  inline return_type functions_name(formal arg list)
	   {  function body; }
Version	:  1.0
*/

// Demo
#include<stdio.h>
inline float max(float ,float );
inline float max(float a,float b)
{
    if(a>b)
	return a;
    else
	return b;
}

int main()
{
    float a=10.23,b=30.34,big;
    big=max(a,b);	  	
    printf("\n Big : %3.2f\n",big);
}
