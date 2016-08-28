#include<stdio.h>
void f1(int *,int);
void f2(int *,int);
void(*p[2])(int *,int);
main()
{
	int a;
	int b;
	p[0]=f1;
	p[1]=f2;
	a=3;
	b=5;
	p[0](&a,b);
	printf("%d\t %d\t",a,b);
	p[1](&a,b);
	printf("%d\t %d\t",a,b);
}
void f1(int* p, int q)
{
	int tmp;
	tmp=*p;
	*p=q;
	q=tmp;
}
void f2(int* p,int q)
{
	int tmp;
	tmp=*p;
	*p=q;
	q=tmp;
}
