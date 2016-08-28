/*
  This program explaing about 'strspn' library functions  

  Author : Vivek Tiwari
 
  Usage  : size_t strcspn(const char *s1, const char *s2);
	   The strspn function sequentially processes each character in the array referenced by s1.           For each character in the array, it scans s2 looking for a match.  If a match is not               found, a counter is incremented and the process continues.  If a match is found, this              function ends, returning the value of the counter.
 
           
	   	
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
  		
  size = strcspn(main_str,sub_str);
  printf("\n size : %d\n",size);
  
  return 0;
}
