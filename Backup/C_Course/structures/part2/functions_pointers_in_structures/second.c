/*

This program expalins how to declare array of function pointers as a structure members

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
	int (*fun_poi[2])(int,int);
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
	struct A add;
	printf("\n Enter any Two Numbers : ");
	 scanf("%d%d",&add.a,&add.b);

	add.fun_poi[0]=addition;  // Assigns address of addition function to function pointer in                                        structure
	add.fun_poi[1]=subtraction;
	printf("\n Sum of members of add object : %d",
	add.fun_poi[0](add.a,add.b));
	printf("\n Difference of members of sub object : %d\n",add.fun_poi[1](add.a,add.b));
	
}
