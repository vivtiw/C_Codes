/*
  This finds length of a string without using any library function
 
  Author :Vivek Tiwari
 
  Version:1.0

*/

#include<stdio.h>
main()
{
  char string[80];
  int len=0,i;
  printf("\nenter a string");
  scanf(" %s",string);
  printf("\n%s",string);
  i=0;
  while(string[i])
  {
    ++len;
    i++;
  }

  printf("\nstring len=%d",len);

}
  
