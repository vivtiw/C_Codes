/*
This program expalins how to declare and define line functions.

Author 	:  Vivek Tiwari
Usage	:  inline return_type functions_name(formal arg list)
	   {  function body; }
Version	:  1.0
*/

// Demo
#include<stdio.h>

inline float * max(float ,float );

void add()
{
	int a=10,b=20,c=30;
	printf("\n %u %u \n", __builtin_return_address (0),__builtin_return_address (1));
}	

void sub()
{
	int a=100,b=300,c=400;
	printf("\n %d %d %d\n",a,b,c);
}	

inline float * max(float a,float b)
{
	float result=a+b;
	return &result;
}

int main()
{
    float *ptr ;
    ptr=max(10.5,20.1);	  	
	add();
	sub();
    printf("\n Big : %3.2f\n",*ptr);
}
