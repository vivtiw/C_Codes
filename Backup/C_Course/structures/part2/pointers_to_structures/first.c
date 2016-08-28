/*
	
This program explains how to declare pointer to structure & assign an address to the pointer to    structure

Author	: Vivek Tiwari
Usage	: struct structure_name *object;
	  structure members can be dereference the pointer by a '->' operator.
				or
	  '*' operator (dereference operator)
Version	: 1.0

*/

#include<stdio.h>
struct A
{
	int a;
	float b;
	char c;
};
int main()
{
	struct A obj={10,13.23,'Z'},*poi;
	poi = &obj;
	printf("\n %d\t%.2f\t%c",poi->a,poi->b,poi->c);
	printf("\n %d\t%.2f\t%c\n",(*poi).a,(*poi).b,(*poi).c);
}


