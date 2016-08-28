/*

This program explains how to pass function pointers as argument to a function

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

void operation(int,int,int,int (*fun)(int,int));

int main()
{
	int a=10,b=20,result;
	char ch;
	printf("\n What arithmetic operation to perform : ");
	ch = getchar();
	switch(ch)
	{
		case '+':
			operation(ch,a,b,add);
			break;
		case '-':
			operation(ch,a,b,sub);
			break;
		case '*':
			operation(ch,a,b,mul);
			break;
		case '/':
			operation(ch,a,b,div);
			break;
		default:
			printf("\n Invalied choice\n");
	}
}


void operation(int ch,int x,int y, int (*fun)(int,int))
{	
	int result;
	result = fun(x,y);	// C short way to invoke a function using function pointer
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
