/*

This progema expalins how to copy a memory area

Author	: Vivek Tiwari
Usage	: void *memmove(void *dest, const void *src, size_t n); 
	  The  memmove()  function  copies  n bytes from memory area src to memory area dest even 
	  if the object overlap.
version	: 1.0

*/

#include <stdio.h>
#include <string.h>

int main ()
{
  char str[100] = "memmove can be very useful in ANCI C...........";
  char str1[100] = "memmove can be very useful in ANCI C...........";
  memcpy (str+20,str+15,15);
  puts (str);
  memmove (str1+20,str1+15,15);
  puts(str1);

  return 0;
}
