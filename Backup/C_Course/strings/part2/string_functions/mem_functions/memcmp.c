/*

This program explains about memcmp

Author	: Vivek Tiwari
Usage	: int  memcmp ( const void * buffer1, const void * buffer2, size_t num ); 
	  Compare two buffers.
	  Compares the fisrt num bytes of two memory blocks pointed by buffer1 and buffer2.
version	: 1.0

*/
#include<stdio.h>
#include<string.h>

int main ()
{
  char str1[256];
  char str2[256];
  int n, len1, len2;
  printf ("Enter a sentence: "); 
  fgets(str1,256,stdin);
  printf ("Enter another sentence: "); 
  fgets(str2,256,stdin);
  len1=strlen(str1);
  len2=strlen(str2);
  n=memcmp ( str1, str2, len1>len2?len1:len2);

  if (n>0) 
	printf ("%s is greater than %s",str1,str2);
  else if (n<0) 
	printf ("%s is less than %s",str1,str2);
  else 
	printf ("%s is the same as %s\n",str1,str2);
  return 0;
}
