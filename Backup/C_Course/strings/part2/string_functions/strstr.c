/*
  This program explaing about 'strstr' library functions  

  Author : Vivek Tiwari
 
  Usage  : char *strstr(const char *s1, const char *s2);
	   The  strstr()  function  finds the first occurrence of the substring s2 in the
           string s1.
		   
	   	
  Versin:1.0

*/

#include<string.h>
#include<stdio.h>
int main()
{
  char main_str[100]="Returns pointer to first occurence of sub_str in main_str or NULL if not present.";
  char sub_str[15],*poi;
  printf("\nMain String : %s",main_str);
  printf("\n\n Enter Substring : ");
  scanf("%s",sub_str);		
  
  printf("\n %s\n",sub_str);
  printf("\n Starting Address : %u",main_str);
  poi = strstr(main_str,sub_str);
  printf("\n poi : %u\n",poi);

  printf("\n Sub String : %s\n",poi);
	  
  return 0;
}
