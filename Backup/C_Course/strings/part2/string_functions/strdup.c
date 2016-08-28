/*
   This program explains use of built in function 'strdup'
   
   Author : Vivek Tiwari

   Usage  :char *strdup(const char *s);
             The  strdup()  function  returns  a  pointer to a new string which
             is a duplicate of the string s.  Memory for the new string is
             obtained  with  malloc, and can be freed with free
   
   Version : 1.0

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()
{
  char str[25];
  char *dup;

  printf("\nEnter a string");
  scanf("%s",str);  
/*allocating  memory for dup*/
  
   dup=(char *)malloc(sizeof(str)+1);
   dup=strdup(str);
   
   str[2]='Z';		
   printf("\nActual string=%s",str);
   printf("\nDuplicate string=%s",dup);

   return 0;
}
   
   
 


