/*

This program explains how to declare enumerated type withiout tag name;

Author 	: Vivek Tiwari
Usage	: enum tag-name {enumeration-list} variable-list;
Version	: 1.0

*/

#include<stdio.h>

int main()
{
	int a,b,cho;
	enum {Add, Sub, Mul, Div, Square };
	// Declaring enumeration-list, without tag name

	printf("\n Menu\n");
	printf("0. Add\n");
	printf("1. Sub\n");
	printf("2. Mul\n");
	printf("3. Div\n");
	printf("4. Square\n");
	printf("\n Enter Your Choice : ");
	 scanf("%d",&cho);
	printf("\n Enter Any Two Numbers : ");
 	 scanf("%d%d",&a,&b);
	switch(cho)
	{
		case Add:
			printf("\n Sum : %d\n",a+b);
			break;
		case Sub:
			printf("\n Difference : %d\n",a-b);
			break;
		case Mul:
			printf("\n Product : %d\n",a*b);
			break;
		case Div:
			printf("\n Division : %.2f\n",(float)a/b);
			break;
		case Square:
			printf("\n Square of a : %d\t Square of b : %d\n",a*a,b*b);
			break;
		default:
			printf("\n Invalied Choice\n");	
	}
	
}
