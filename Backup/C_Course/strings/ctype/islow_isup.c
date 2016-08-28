/*
   This program uses built in fuctins 'islower','isupper' to check wether 
   given charactor is lower case or upper case 

   Author: Vivek Tiwari

   Usage :int islower(int c);//c is an unsigned char
          int isupper(int c);
         
   Version: 1.0

*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

main()
{
  unsigned char ch;

  printf("Enter an aplhabetic charactor");
  ch=getchar();
  if(islower(ch))
   printf("\n  Charactor is Lower case charactor");
  else
   printf("\n  Charactor is not Lower case charactor");
 
   if(isupper(ch))
      printf("\n Charactor is Upper case charactor");
   else
      printf("\n Charactor is not Upper case charactor");

   
    return 0;
}

