/*
   This shows how a string can be read throw input device 
 
   Author : Vivek Tiwari
  
   Usage  : scanf(formate specifiers,array_name)

   Version: 1.0

*/

#include<stdio.h>
int main()
{
  char name[20];
  printf("Enter a name ");
  scanf("%[^|]",name);
  printf("Name is :%s",name);
  
   return 0;
}

