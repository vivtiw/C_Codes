/*

This program explains how to define a function pointers or pointer to a function

Author	: Vivek Tiwari
Usage	: (*fun_poi)(argument list);
Version	: 1.0

*/
#include<stdio.h>
int add(int,int);

int main()
{
	int a=10,b=20,result;
	int (*fun)(int,int);//=&add;	// Function pointer
	fun=add;		// Assign adderss of add function to function pointer
	result = (*fun)(10,20); // Invoking a function using function pointer
	printf("\n Result %d \n",result);	
}

int add(int x,int y)
{
	return x+y;
}
