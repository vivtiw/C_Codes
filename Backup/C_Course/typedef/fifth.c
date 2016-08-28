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
	function_pointer fun_poi[3];
	fun_poi[0]=add;
	fun_poi[1]=sub;
	fun_poi[2]=mul;	
	printf("\n Sum = %d\n",fun_poi[0](a,b));		
	printf("\n Diff = %d\n",fun_poi[1](a,b));		
	printf("\n Pro = %d\n",fun_poi[2](a,b));		

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
