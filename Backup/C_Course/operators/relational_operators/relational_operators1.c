/*

This program explains about all relations operators
	Relational operators evaluates either to 1 (true) or 0 (false).	

Author  :  Vivek Tiwari
Usage	:  exp1 <relational operator> exp2  	eg:- exp1>exp2;
	   exp1 & exp2 can be any expression
Version	:  1.0

*/

#include<stdio.h>
main()
{
	int a=0, b=1, c=-1,result;
	float x=2.5, y=0.0;
 
	printf("\na = %d , b = %d , a>b = %d\n",a,b,a>b);
	printf("\nb = %d , c = %d , x = %.2f, (b/c)<x = %d\n",b,c,x,(b/c)<x); 
							  	//(b/c)<x == b/c>x
	printf("\na = %d , b = %d , c = %d, a <= b >= c = %d\n",a,b,c,a<=b>=c); 
								//a<=b>=c == (a<=b)>=c
	printf("\na = %d , x = %.2f , b = %d, a <= x == b = %d\n",a,x,b,a<=x==b); 
								//a<=x==b == (a<=x)==b

	result = -x+a==y>c>=b;	// ((-x) + a) == ((y > c) >= b)		
	printf("\na = %d , x = %.2f , b = %d, c = %d, y = %.2f, -x+a==y>c>=b = %f\n",a,x,b,c,y,-x+a==y>c>=b,result); 
	
	printf("\nx = %.2f , y = %.2f , c = %d,  x+=(y>=c) = %.2f\n",x,y,c,x+(y>=c)); 
}

