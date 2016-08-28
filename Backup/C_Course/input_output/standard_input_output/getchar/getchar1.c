/*
 
Purpose	: Program to demonstrate the 'getchar' function.
Author	: Team  Veda
Usage 	: variable = getchar(void);
Version	: 1.0
 
*/

#include <stdio.h>


main()
{
  int c;
  puts("Please enter any char.");
					/* Count the letters in the 'stdin'
					   buffer.			*/
  c = getchar();
  printf(" %c ASCII character is %d \n", c,c);
}
