/*

This example explains how to use break statement
This example finds the given number is prime or not

Author  :  Vivek Tiwari
Usage   :  break;
Version :  1.0

*/

#include<stdio.h>
int main()
{
	int num,i=2,flage=0;
	printf("\n Enter any Number : ");
	 scanf("%d",&num);
	while(i++<=num/2)
	{
	   if(num%i==0)
	   {
		flage=1;
		break;			
	   }
	}
	if(flage==0)
	   printf("\n %d is Prime Number \n",num);
	else
	   printf("\n %d is not Prime Number \n",num);
}

