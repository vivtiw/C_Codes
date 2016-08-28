/*

This program explains how to define & use Variadic Macros

Author	: Vivek Tiwari
Usage	: #define macro(...)	Macro_body(arguments list)
Version	: 1.0

*/

#include<stdio.h>
#define SUM_PRINT(...) printf(__VA_ARGS__)
#define ERROR(...)     fprintf(stderr,__VA_ARGS__)	
int main()
{
	int a=10,b=-20;
	float c=10.2,d=12.5;
	if(a<0 || b<0)
		ERROR("ERROR : %d, %d\n",a,b);
	else
		SUM_PRINT("%d + %d = %d\n",a,b,a+b);
	
	SUM_PRINT("%.2f + %.2f = %.2f\n",c,d,c+d);
}
