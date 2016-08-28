/*

This program expains how to declare pointer variables & assing address to pointer variables.
This program also explains how to refer to the value of that which pointer is pointing to, not the value of the pointer itself

Authoer	:  Vivek Tiwari
Usage	:  datatype *variable;
Version	:  1.0

*/

#include<stdio.h>
int main()
{
	int a=10,b;
	int *p;				// p is declaring to be a pointer to integer

	//*p = 100;		// is not valied, cannot assign constants to pointer variables
				// not a compile error

	// We can assign three values to any pointer 
	// 1. Address of a variable of type pointer declared
	// 2. 0
	// 3. NULL	( NULL is a symbolic constant defined in many header files which is 0)

	p = &a;					// p is assigned the address of a
	printf("\n Address of a = %p",p);	// Address are defined in hexadecimal
	printf("\n Address of a = %x\n",p);
	
	
	p = NULL;				// p is assigned to NULL
	printf("\n Value of p   = %p",p);	
	printf("\n Value of p   = %x\n",p);


	p = 0;					// p is assigned to NULL
	printf("\n Value of p   = %p",p);	
	printf("\n Value of p   = %x\n",p);
	  
       //referring to the value of that which p is pointing to, not the value of the pointer itself
        p = &a;	
	b = *p;			// Stored value of p is pointing to	
	printf("\n b = %d \n",b);

	(*p)++;			// increments the value ot that which p is pointing to
	printf("\n a = %d\n",a);
	
}
