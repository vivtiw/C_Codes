/*
  This Uses 'strlen'library function to find length of  a string

  Author : Vivek Tiwari
  
  Usage  : int strlen(const char *s);
           The  strlen()  function  calculates  the  length  of  the string s,
           not including the terminating ‘\0’ character.
  Version:1.0
*/

#include<stdio.h>
#include<string.h>
int main()
{
  char string[50];
  int len;
  printf("Enter a string");
  gets(string);
  puts(string);	
  len=strlen(string);
  printf("Lenth of the string =%d",len);
  return 0;
}
 
  
 

