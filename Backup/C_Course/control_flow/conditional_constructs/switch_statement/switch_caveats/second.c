/*

Prog explains about switch caveats 

Author  : Vivek Tiwari

*/

#include<stdio.h>
int main()
{
  char digit;
  printf("\n Enter digit :");
  digit = getchar();
  switch ( digit )
  {
    case '1'-'9':	// will subtract '9' from '1'
      printf( "Digit!\n");
      break;
    default:
      printf( "Invalid Grade \n" );
  }

}
