/*

This program expalins about memchr 

Author	: Vivek Tiwari
Usage	: void *  memchr ( const void * buffer, int c, size_t num ); 
	  Search buffer for a character.
	  Searches the first num bytes of memory block pointed by buffer for character c.	
version	: 1.0

*/
#include<stdio.h>
#include<string.h>

int main()
{
  char * position;
  char main[] = "Example string";
  position = (char*) memchr (main, 'l', strlen(main));
  if (position!=NULL)
    printf ("Character l was at position %d.\n", position-main+1);
  else
    printf ("Character l was not found");
  return 0;   
	
}	 		
