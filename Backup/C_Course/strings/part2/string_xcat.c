/*
  This this concates two strings without any library functions
  
  Author : Vivek Tiwari
 
  Version:1.0

*/

#include<stdio.h>
main()
{ 
  char str1[50];
  char str2[20];
  int i,j=0;
  printf("\n Enter first string:<30");
  scanf("%s",str1);
  printf("\n Enter second string:<20");
  scanf("%s",str2);

  while(str1[j])//reaching end of the string
  j++;

  for(i=0;str2[i];i++)
    str1[j++]=str2[i];//appending str2 to str1
    str1[j]='\0';    

  printf("\nResultent string:\n%s",str1);
}
