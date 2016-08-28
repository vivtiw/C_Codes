/*
    This programe explains how to declare a simple array and how it can
    be used
 
Author  :  Vivek Tiwari

Usage   : datatype arrayname[size]
           datatype can be either  primitive or user defined 
           arrayname is a valid variable name
           size denotes size of the array.size must be a 'const'.
Version :  1.0

*/
 #include<stdio.h>
int main(void)
{
   int a[5]; //declaring an array
   a[0]=10; 
   a[1]=20; 
   a[2]=30; 
   a[3]=40; 
   a[4]=50; 
   printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
   return 0;
}

