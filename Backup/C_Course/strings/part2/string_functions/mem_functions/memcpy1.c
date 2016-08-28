/*

This progema expalins how to copy a memory area

Author	: Vivek Tiwari
Usage	: void *memcpy(void *dest, const void *src, size_t n); 
	  The  memcpy()  function  copies  n bytes from memory area src to memory area dest.
version	: 1.0

*/
#include<stdio.h>
#include<string.h>

int main()
{
   int a[5]={1,2,3,4,5},i;
   int new[5]={0};
   memcpy(new,a,5*sizeof(int));
   for(i=0;i<5;i++)
	printf("\n New : %d\n",new[i]);
   	
}	 		
