/*
  This program explains about 'strcmp & strncmp' library functions to compare two strings
 
  Author : Vivek Tiwari

  Usage  : int strcmp(const char *s1, const char *s2);
           The  strcmp()  function compares the two strings s1 and s2.It returns
           an integer less than,equal to, or greater than zero if  s1  is  found,
           respectively, to be less than, to match, or be greater than s2.

 	   int strncmp(const char *s1, const char *s2, size_t n);
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

  if(strcmp(str1,str2)==0)
     printf("\nBoth are equal");
  else  if(strcmp(str1,str2)>0)
     printf("\nFirst String is Greater than second String");
  else
     printf("\nFirst String is Less than second String");

}




