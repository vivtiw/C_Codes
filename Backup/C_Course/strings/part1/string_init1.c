/*
  This program explains how to initialize a string 
  
  Author : Vivek Tiwari
 
  Usage  : char array_name[Size]={' ', ' ',' ',' ',' ',. . .'\0'};
                        (or)
           char array_name[Size]="string";      
                        (or)
           char array_name[]="string";

  Remark :In the second way of decleration 'Size' must be more than the number 
          of charecters in the 'string'
 
  Version: 1.0

*/

#include<stdio.h>
int main()
{
  char name[25]={'V','e','d','a',' ','S','o','l','u','t','i','o','n','s','\0'};
   
  char address[20]="Hyderabad";
  
  printf("\n%s",name);
  printf("\n%s",address);
  
  return 0;
}
