/*
  This program explaing about 'strspn' library functions  

  Author : Vivek Tiwari
 
  Usage  : size_t strspn(const char *s1, const char *s2);
	   The strspn function sequentially processes each character in the array referenced by s1.           For each character in the array, it scans s2 looking for a match.  If a match is found,            a counter is incremented and the process continues.  If a match is not found, this                 function ends, returning the value of the counter.
 
           
           char *strrchr(const char *s, int c);	
           The strrchr() function returns a pointer to the last occurrence of the character c in              the string s.
	   	
  Versin:1.0

*/

#include<string.h>
#include<stdio.h>
int main()
{
  char main_str[80]="Returns pointer to first occurence of c in cs or NULL if not present.";
  char sub_str[15];
  int size;
  printf("\nMain String : %s",main_str);
  printf("\n\n Enter Char Set : ");
  fgets(sub_str,15,stdin);
  		
  size = strspn(main_str,sub_str);
  printf("\n size : %d",size);
  
  return 0;
}
