/*
 
Purpose	: Program to demonstrate the 'getchar' function.
  	    The prog will read data entered via the keyboard. And return the number of characters 
	    entered. 
Author	: Team  Veda
Usage 	: variable = getchar(void);
Version	: 1.0
 
*/

#include <stdio.h>


main()
{
  int count=0;
  puts("Please enter some text.");
					/* Count the letters in the 'stdin'
					   buffer.			*/
  while ( getchar() != '\n') count++;	// \n == return char in Linux

  printf("You entered %d characters\n", count);
}
