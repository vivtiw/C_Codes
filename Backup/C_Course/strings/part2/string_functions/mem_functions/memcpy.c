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
   int a[10]={1,2,3,4,5,6,7,8,9,10},b[5],i;	
   char main[]="This is a example from memcpy which copies n bytes from one mem to another mem" ;
   char new[20]={0};
   memcpy(new,main,10);
   printf("\n New String : %s\n",new);
   memcpy(b,a,20);
   for(i=0;i<5;i++)
	printf("\n %d \n",b[i]);		
   	
}	 		
