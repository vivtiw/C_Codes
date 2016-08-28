/*

This program explains the danger of assinging the address of const variable to non const pointer 

Author	:  Vivek Tiwari
Usage	:  const datatype *variable; or int const *variable;
Version	:  1.0

*/

#include<stdio.h>
int main()
{
    const int a=10;
    int *p = &a;  // Very dangerous, because compiler will discards qualifiers from pointer target                      type as pointer is not const 
    a++;	  // ERROR: Cannot increment const
    printf("\n Value of a is %d ",a);
    (*p)++;	// is Valid, because compiler discards const qualifier for a as its address is                        assigned to not const pointer	
    printf("\n Value of a is %d\n",a);
}
 
