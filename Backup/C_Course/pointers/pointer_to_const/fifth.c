/*

This program explains how to make a const pointer to a const object 

Author	:  Vivek Tiwari
Usage	:  const datatype *variable; or int const *variable;
Version	:  1.0

*/

#include<stdio.h>
int main()
{
    const int a=10;
    int const *const p = &a;  // p is a pointer & also object is a pointer to which p is pointing                                   to.
 
    p++;	  // ERROR: Cannot increment const pointer
    printf("\n Value of a is %d ",a);
    (*p)++;	  // ERROR: Cannot increment the object to which p is pointing to. 	
    printf("\n Value of a is %d\n",a);
}
 
