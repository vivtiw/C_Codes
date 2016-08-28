/*

This program explains about scope & lifetime of static variables

Author	:  Vivek Tiwari
Usage	:  static datatype variable;
Version :  1.0

*/
#include<stdio.h>
void count();

int main()
{
        count();
        count();
        count();
        count();
}
void count()
{
        static int c=1;
        printf("\n Function called %d time%p",c++,&c);
}
