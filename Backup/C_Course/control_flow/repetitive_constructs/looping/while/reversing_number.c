/*

This program explains about while looping constructor.
This example will prints the given number in reverse

Author  : Vivek Tiwari
Usage   :
          while(exp)
          {
             statement 1;
             statement 2;
             statement 3;
          }
        Arguments
        ---------
        exp
                Any expression.
        statement
                This statement is executed when the while (exp) is true.

Version : 1.0

*/

#include<stdio.h>
int main()
{
	int num,dig,rev=0;
	printf("\n Enter any Number : ");
	 scanf("%d",&num);
	printf("\n %d --> ",num);
	while(num>0)
	{
	   dig=num%10;
	   rev=rev*10+dig;
	   num/=10;	
	}
	printf("%d\n",rev);
	return 120;
}
