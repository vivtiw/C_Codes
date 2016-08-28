/*
  This program explaing about 'strchr & strrchr' library functions  

  Author : Vivek Tiwari
 
  Usage  : char *strchr(const char *s, int c);
	   The strchr() function returns a pointer to the first occurrence of the character c in              the string s.

           char *strrchr(const char *s, int c);	
           The strrchr() function returns a pointer to the last occurrence of the character c in              the string s.
	   	
  Versin:1.0

*/

#include<string.h>
#include<stdio.h>
int main()
{
  char main_str[80]="Returns pointer to first occurence of c in cs or NULL if not present.";
  char sub_char,*result;
  printf("\nMain String : %s",main_str);
  printf("\n\n Enter char to search : ");
  sub_char=getchar();
  		
  result = strchr(main_str,sub_char);// Return pointer to first occurrence of sub_char in main_str
  printf("\n Address of main_str : %u",main_str);
  printf("\nFirst %c found in Main_str at : %u",sub_char,result);
  printf("\nResult  : %s\n",result);
  printf("\nResult  : %d\n",result-main_str);


  result = strrchr(main_str,sub_char);// Return pointer to Last occurrence of sub_char in main_str
  printf("\nLast %c found in Main_str at : %u",sub_char,result);
  printf("\nResult  : %s\n",result);

  
  return 0;
}
