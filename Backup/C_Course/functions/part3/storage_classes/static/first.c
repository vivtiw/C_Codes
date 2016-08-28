/*

This program explains about scope & lifetime of static variables

Author	:  Vivek Tiwari
Usage	:  static datatype variable;
Version :  1.0

*/

#include<stdio.h>
int main() 
{
   static int a=1;
   {
	static int a=2;
	{
	     static int a=3;
	     {
	          printf("\n a = %d",a);
	     }
	}
	printf("\n a = %d",a);
   }
   printf("\n a = %d\n",a);	 
}
