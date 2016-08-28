/*
 
Purpose	: Program to demonstrate the 'getchar' function.
Author	: Team  Veda
Usage 	: variable = getchar(void);
Version	: 1.0
 
*/

#include <stdio.h>


main()
{
  int c1,c2,c3;
  puts("Please enter any char.");
					/* Count the letters in the 'stdin'
					   buffer.			*/
	c1 = getchar();
	c2 = getchar();
	c3 = getchar();
printf(" ---- c1 = %c ---- -----c2 = %c ---- c3 = %c\n", c1,c2,c3);
}
