/*
   This programme finds whether a given string is polyndrom or not

   Author: Vivek Tiwari
 
   Version: 1.0


*/

#include<stdio.h>
#include<string.h>
int main()
{
  char string[25];
  char dummy[25];
  int len; //length of the string
  int i=0,j;
 
  printf("\nEnter a string(<25 chare)");
  scanf("%s",string);
  len=strlen(string);
  dummy[len--];  
  for(j=0;j<strlen(string);j++,len--)
	{
   	dummy[j]=string[len];
	}
 	
      dummy[j]='\0';

   if(strcmp(string,dummy))
     printf("\nGiven string is not  polyndrom");
   else
     printf("\nGiven string is  polyndrom");

    return 0;
} 
 
  
 
