/*

This program expains about automatic storage class variables.

Author	:  Vivek Tiwari
Usage	:  auto datatype variable;
Version	:  1.0

*/

#include<stdio.h>
int main()
{
	int a=1,b=-1;				// Main Block 1
	if(a>b)					// If Block
	{
	   int temp=a;				// Local to if Block
	   a=b;
	   b=temp;	
	}
	printf("\n a: %d \t b: %d\n",a,b);	
      //printf("\n temp: %d \n",temp);//       	ERROR : Temp is local to if block
}
