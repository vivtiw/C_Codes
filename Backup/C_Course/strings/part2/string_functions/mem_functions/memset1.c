/*

This progema explains about memset

Author	: Vivek Tiwari
Usage	: void *  memset ( void * buffer, int c, size_t num ); 
	  Fill buffer with specified character.
	  Sets the first num bytes pointed by buffer to the value specified by c parameter.	
version	: 1.0

*/
#include<stdio.h>
#include<string.h>

int main()
{
   int a[5],i;
   memset(a,'1',20);
   for(i=0;i<5;i++)
   	printf("\n%c \n",a[i]);
   	
}	 		
