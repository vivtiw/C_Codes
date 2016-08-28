/*

This program expalins how to declare function pointers as structure members

Author	:  Vivek Tiwari
Usage	:  struct structure_name
	   {
		(*function_pointer)(argument list);	
	   }
Version :  1.0

*/

#include<stdio.h>

struct A
{
	int a, b;
	int (*fun_poi)(int,int);
};

int addition(int x,int y)
{
	return x+y;
}

int subtraction(int x,int y)
{
	return (x>y)?(x-y):(y-x);
}

int main()
{
	struct A add,sub;
	printf("\n Enter any Two Numbers : ");
	 scanf("%d%d",&add.a,&add.b);
	sub=add;

	add.fun_poi=addition;  // Assigns address of addition function to function pointer in                                        structure
	sub.fun_poi=subtraction;
	printf("\n Sum of members of add object : %d",add.fun_poi
	(add.a,add.b));
	
}
