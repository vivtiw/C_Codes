/*

This program explains how to return function pointers from a function

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

//int(* operation(char))(int,int);
int(* operation(char))(int,int);

int main()
{
	int a=10,b=20,result,(*fp)(int,int);
	char ch;
	
	printf("\n What arithmetic operation to perform : ");
	ch = getchar();
	//fp = operation(ch);
	//result = (*fp)(a,b);
	result = operation(ch)(a,b);
	printf("\n %c Result %d\n",ch,result);
}


int(* operation(char ch))(int,int)
{	
	switch(ch)
        {
                case '+':
                        return add;
                case '-':
                        return sub;
                case '*':
                        return mul;
                case '/':
                        return div;
	}

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
