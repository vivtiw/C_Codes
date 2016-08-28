/*

This program explains how to define our own data types

Author 	: Vivek Tiwari
Usage	: typedef type new_datatype1,new_datatype2,.....;
Version	: 1.0

*/

#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
typedef int (*function_pointer)(int,int);
int main()
{
	int a=10,b=20;	
	function_pointer add_poi,sub_poi,mul_poi;
	add_poi=add;
	sub_poi=sub;
	mul_poi=mul;	
	printf("\n Sum = %d\n",add_poi(a,b));		
	printf("\n Diff = %d\n",sub_poi(a,b));		
	printf("\n Pro = %d\n",mul_poi(a,b));		

}

int add(int x,int y)
{
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
