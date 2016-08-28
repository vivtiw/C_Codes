/*

This program expains about pointer arithmetic.

Authoer	:  Vivek Tiwari
Version	:  1.0

*/

#include<stdio.h>
int main()
{
	int a=10;
	int *p,*q;				// p is declaring to be a pointer to integer

	
	p = &a;					// p is assigned the address of a
	printf("\n Value of p     = %u",p);	// prints address of a	
	printf("\n Value of ++p   = %u\n",++p); // increments p by 4 bytes
						// increments p by one block of memory 

	printf("\n Value of p     = %u",p);		
	printf("\n Value of --p   = %u\n",--p); 

	printf("\n Value of p     = %u",p);		
	printf("\n Value of p+2   = %u\n",p+2); // increments p by two blocks of memory

	 
	printf("\n Value of p     = %u",p);		
	printf("\n Value of p-2   = %u\n",p-2); // increments p by two blocks of memory

	q=p;					// assigns address p pointing to, to q; 
	
	if(p==q)
	    printf("\n Both pointers are reffering to same address\n");
	else
	    printf("\n Both pointers are reffering to different address\n");
	  
	
}
