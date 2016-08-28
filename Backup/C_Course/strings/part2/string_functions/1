/*
This program expalins about 'strcpy & strncpy' library function

  Author : Vivek Tiwari
 
  Usage  : char *strcpy(char *dest, const char *src);
         The strcpy() function copies the string pointed to by src(including the terminating ‘\0’)          to the array pointed to by dest.  The strings may not overlap, and the destination string          dest must be large enough to receive the copy.

	   char *strncpy(char *dest, const char *src, size_t n); 
	 The  strncpy()  function  is similar, except that not more than n bytes of src are
         copied. Thus, if there is no null byte among the first n bytes of src, the  result
         will not be null-terminated.

         In  the case where the length of src is less than that of n, the remainder of dest
         will be padded with nulls.
	

  Versin:1.0

*/

#include<string.h>
#include<stdio.h>
int main()
{

  char str_source[25]="Veda Solutions";
  char str_dest[25],str_dest1[5];
  char *result;

  printf("\nsource string : %s",str_source);
  result = strcpy(str_dest,str_source);		// Copies src to dest

  printf("\nDestination string : %s\n",str_dest);  
  printf("\nResult string : %s\n",result);  


  result = strncpy(str_dest1,str_source,4);	// Copies n bytes of src to dest

  str_dest1[4]='\0';		
  printf("\nDestination string : %s\n",str_dest1);  
  printf("\nResult string : %s\n",result);  
		
  return 0;

}
