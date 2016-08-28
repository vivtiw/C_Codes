/*

This program explains  how can we temporarily change the type of a variable or expression,         temporarily using a cast to force the type of the result. called as casting.

Usage	: (type) expression;
          (type) variable;
Author 	:  Vivek Tiwari
Version : 1.0

*/

#include <stdio.h>

int main()               
{
  float my_float;
  int my_int;
  char my_ch;

  my_float = 75.345;
  my_int = (int) my_float;
  my_ch = (char) my_float;
  printf ("\nConvert from float \"my_float = %f\" --> to --> \"my_int = %d\" --> and --> \"my_ch = %c\"\n",
    my_float, my_int, my_ch);

  my_int = 69;
  my_float = (float) my_int;
  my_ch = (char)my_int;
  printf ("\nConvert from int \"my_int = %d\" --> to --> \"my_float = %f\" --> and --> \"my_ch = %c\"\n",
    my_int, my_float, my_ch);

  my_ch = '*';
  my_int = (int)my_ch;
  my_float = (float) my_ch;
  printf ("\nConvert from int \"my_ch = %c\" --> to --> \"my_int = %d\" --> and --> \"my_float = %f\"\n",
    my_ch, my_int, my_float);
 
}
