/*

This program explains how to define a pointer variable as one of the member in a structure.

Author	: Vivek Tiwari
Usage	: struct structure_name
	  {
		fields....;
	  }variable;
Version	: 1.0

*/

#include<stdio.h>
#include<string.h>
struct mystruct		// Structure Definition
{
	int a,b;
	int const *p;
}; 

int main()
{
	int result;
	struct mystruct s;		//declaring Structure
	s.a=10;
	s.b=20;
	result = s.a+s.b;
	s.p = &result;
	printf("\n %3d\t%3d\t%3d\n",s.a,s.b,*s.p);
} 
