/*

This program explains who to make the pointeritself as const

Author	:  Vivek Tiwari
Usage	:  const datatype *variable; or int const *variable;
Version	:  1.0

*/

#include<stdio.h>
int main()
{
    const int a=10;
    int * const p = &a;  // p is a pointer which cannot be changed
    
    printf("\n p is pointing to %x ",p);
  //++p;	  // is not valid, because p is a constant pointer 			

    
    printf("\n Value p is pointing to %d\n",*p);
    (*p)++;	// is Valid, because value p is pointing to is not a const	
    printf("\n Value p is pointing to %d\n",*p);
}
 
