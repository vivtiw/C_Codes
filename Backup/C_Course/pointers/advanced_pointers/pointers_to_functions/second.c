/*

This program explains how to define a function pointers or pointer to a function

Author	: Vivek Tiwari
Usage	: (*fun_poi)(argument list);
Version	: 1.0

*/
#include<stdio.h>
int add(int ,int );
int sub(int ,int );
int mul(int ,int );
int div(int ,int );
int rem(int ,int );
 
int main()
{
	int a=10,b=20,result;
	char ch;
	int (*fun)(int,int) = NULL;	// Function pointer
	printf("\n What arithmetic operation to perform : ");
	ch = getchar();
	switch(ch)		//State Machines
	{
		case '+':
			fun = &add;
			break;
		case '-':
			fun = &sub;
			break;
		case '*':
			fun = mul;
			break;
		case '/':
			fun = div;
			break;
		default:
			printf("\n Invalied choice\n");
	}
	result = (*fun)(10,20); // Invoking a function using function pointer
	printf("\n %c Result : %d \n",ch,result);	
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
int div(int x,int y)
{
	return x/y;
}
