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
   char main[]="This is a example for memset which fills first n bytes of main string with specified character" ;
   printf("\nold : \n  %s",main);
   memset(&main[10],'*',4);
   printf("\nnew : \n  %s\n",main);
   	
}	 		
