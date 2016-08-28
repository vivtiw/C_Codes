/*
  This program explaing about 'strcat & strncat' library functions to concate to strings 

  Author : Vivek Tiwari
 
  Usage  : char *strcat(char *dest, const char *src);
           The  strcat()  function appends the src string to the dest string
           overwriting the ‘\0’ character at the end of dest, and then adds a 
           terminating  ‘\0’  character. The  strings  may  not overlap, and 
           the dest  string must have enough space for the result.
	

	   char *strncat(char *dest, const char *src, size_t n);
	   The strncat() function is similar, except that only the first n characters of  src are             appended to dest.
   
            Boty functions return a pointer to the resulting string	
  Versin:1.0

*/

#include<string.h>
#include<stdio.h>
int main()
{
  char str_source[25]=" Solutions";
  char str_dest[50]="Veda",*result;
  printf("\nsource string : %s",str_source);
  printf("\ndestination string : %s\n",str_dest);
  
  result = strcat(str_dest,str_source);	// Appends str_source to str_dest
  printf("\nNew String    : %s",str_dest);  
  printf("\nResult String : %s\n",str_dest);  
  
  	
  result = strncat(str_dest,str_source,4);	// Appends str_source to str_dest
  printf("\nNew String    : %s",str_dest);  
  printf("\nResult String : %s\n",str_dest);  
  return 0;
}
