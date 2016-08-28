/*

This program explains about for looping constructor.
This example will reverse the given string

Author  : Vivek Tiwari
Usage   :
	for ([expression1](opt); [expression2](opt); [expression3](opt))   [opt - optional]
	{
	    statement;
	    .........;
	    .........;
	    .........;
	}
	Arguments 
		expression1    
 			 Expression1 is the initialization expression that typically specifies the                          initial values of variables. It is evaluated only once before the first
                         iteration of the loop.
  		expression2    
  			Expression2 is the controlling expression that determines whether or not to                        terminate the loop. It is evaluated before each iteration of the loop.                             If expression2 evaluates to a nonzero value, the loop body is executed.                            If it evaluates to 0, execution of the loop body is terminated and control                         passes to the first statement after the loop body. This means that if the                          initial value of expression2 evaluates to zero, the loop body is never                             executed.
  		expression3   
                        Expression3 is the increment expression that typically increments the                              variables initialized in expression1. It is evaluated after each iteration                         of the loop body and before the next evaluation of the controlling                                 expression.

version : 1.0

*/

#include <stdio.h>
#include <string.h>

int main()
{
	char str[20]="Veda Solutions";
	int i,j,c;
	i=0,j=0;
	printf("\n str = %s\n",str);
	for(i=0,j=strlen(str)-1;i<=j/2 ;i++,j-- ) 
		c=str[i],str[i]=str[j],str[j]=c;
        
	printf("\n str = %s\n",str);
}

