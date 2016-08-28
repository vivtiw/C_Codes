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

void operation(int,int,int (*fun)(int,int));

int main()
{
	int a=10,b=20,result;
	char ch;
	printf("\n What arithmetic operation to perform : ");
	ch = getchar();
	switch(ch)
	{
		case '+':
			operation(a,b,add);
			break;
		case '-':
			operation(a,b,sub);
			break;
		case '*':
			operation(a,b,mul);
			break;
		case '/':
			operation(a,b,div);
			break;
		default:
			printf("\n Invalied choice\n");
	}
}


void operation(int x,int y, int (*fun)(int,int))
{	
	int result;
	if(fun==add)
		printf("\n Addition ");
	else if(fun==sub)
		printf("\n Subtration ");
	else if(fun==mul)
		printf("\n Multipltcation ");
	else if(fun==div)
		printf("\n Division ");

	result = (*fun)(x,y);	// C short way to invoke a function using function pointer
	printf(" Result : %d \n",result);	
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

