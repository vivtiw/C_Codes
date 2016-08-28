/*
  This program explains about 'strncmp' library functions to compare two strings
 
  Author : Vivek Tiwari

  Usage  : int strncmp(const char *s1, const char *s2, size_t n);
	   
	   The  strncmp()  function is similar, except it only compares the first  n characters of            s1 and s2.	   
	 	  


  Version: 1.0

    
*/
#include<string.h>
#include<stdio.h>
int main()
{
  char str1[25];
  char str2[25];
  printf("\nEnter first string");
  scanf("%s",str1);
  printf("\nEnter second string");
  scanf("%s",str2);

  if(strncmp(str1,str2,5)==0)
     printf("\nBoth are equal");
  else
     printf("\nBoth are not equal\n");


}




