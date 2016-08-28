/*
  This program explaing about 'strpbrk' library functions  

  Author : Vivek Tiwari
 
  Usage  : char *strpbrk(const char *s1, const char *s2);
	   The function strpbrk() returns a pointer to the first ocurrence in str1 of any character           in str2, or NULL if none are present. 
           
	   	
  Versin:1.0

*/

#include<string.h>
#include<stdio.h>
int main()
{
  char main_str[80]="Returns pointer to first occurence of c in cs or NULL if not present.";
  char sub_str[15],*poi;
  printf("\nMain String : %s",main_str);
  printf("\n\n Enter Char Set : ");
  fgets(sub_str,15,stdin);
  		
  printf("\n Starting Address : %u",main_str);
  poi = strpbrk(main_str,sub_str);
  printf("\n poi : %u\n",poi);
  printf("\n poi : %s\n",poi);
	  
  return 0;
}
