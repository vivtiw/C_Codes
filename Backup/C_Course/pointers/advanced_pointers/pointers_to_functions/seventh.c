/*

This program explains how to define array of function pointers


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

//typedef int (*fun)(int,int);
int (*fun[4])(int,int)={NULL};
int main()
{
	int a=10,b=20,result;
	char ch;
	fun[0]=&add;
	fun[1]=&sub;
	fun[2]=&mul;
	fun[3]=&div;
	printf("\n What arithmetic operation to perform : ");
	ch = getchar();
	switch(ch)
        {
                case '+':
                   	result = fun[0](a,b);
                	break;
		case '-':
                        result = (*fun[1])(a,b);
                	break;
                case '*':
                        result = fun[2](a,b);
                	break;
                case '/':
                        result = fun[3](a,b);
                	break;
		default:
			printf("\n Invalied Argument\n");
	}
	printf("\n %c Result : %d\n",ch,result);

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
