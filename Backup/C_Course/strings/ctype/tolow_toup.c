/*
   This program uses built in functions 'tolower','toupper' to convert a given 
   charactor to lower case from upper and vice versa

   Author :Vivek Tiwari

   Usage  :int islower(int c);
           int isupper(int c);
 
   Version: 1.0


*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

main()
{
  char string[20],string1[20];
  int i;
  printf("\nEnter a string in capitals");
  scanf("%s",string);
  printf("\nBefor conversion string:%s",string);
  /*converting charactor by charactor*/
  for(i=0;string[i];i++)
     string[i]=tolower(string[i]);
  
  printf("\nAfter conversion string:%s",string);
    
  printf("\nEnter a string in lowercase");
  scanf("%s",string1);
  printf("\nBefor conversion string1:%s",string1);
 /*converting charactor by charactor */
  for(i=0;string1[i];i++)
     string1[i]=toupper(string1[i]);

   printf("\nAfter conversion string1:%s",string1);

  return 0;

}
 
  

           
