/*

This program explains how to use typedef for complex declarations

Author 	: Vivek Tiwari
Usage	: typedef type new_datatype1,new_datatype2,.....;
Version	: 1.0

*/

#include<stdio.h>
typedef int (*fun)(int,int);
int add(int,int,fun);	//is equal to int add(int,int,int (*fun)(int,int));
int sub(int,int);

typedef int (*function_pointer)(int,int,fun);
			//is equal to int (*function_pointer)(int,int,(*fun)(int,int))
int main()
{
	int a=10,b=20;	
	function_pointer fun_poi;
	fun_poi=add;
	
	printf("\n Result = %d\n",fun_poi(a,b,sub));		

}

int add(int x,int y,int (*fun)(int,int))
{
	printf("\n Difference = %d ",fun(x,y));
	return x+y;
}

int sub(int x,int y)
{
	return x-y;
}

int mul(int x,int y)
{
	return x*y;
}
