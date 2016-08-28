/*

This program explains about pointer to const

Author	:  Vivek Tiwari
Usage	:  const datatype *variable; or int const *variable;
Version	:  1.0

*/

#include<stdio.h>
int main()
{
    int a=10,b=30;
    const int *p;  // p can point to any thing, but the thing it points to cannot be changed
    p=&a;
    printf("\n p is pointing to %x ",p);
    ++p;	  // is valid, because p is not a constant pointer 			
    printf("\n p is pointing to %x ",p);

    p=&b;
    printf("\n p is pointing to %x\n",p);
    //(*p)++;	// Not Valid, because value p is pointing to cannot be changed	
    b++;
    printf("\n p is pointing to %d\n",*p);

}
 
