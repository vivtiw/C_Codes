/*

Prog explains about switch caveats 

Author  : Vivek Tiwari

*/

#include<stdio.h>
int main()
{
  char grade;
  printf("\n Enter Grade :");
  grade = getchar();
  switch ( grade )
  {
    case 'A':
      printf( "Excellent!\n");
    case 'B':
      printf("Good.\n");
    case 'C':
      printf("Fair - just passed.\n");
    case 'D':
      printf( "Poor - See you next quarter.\n");
    case 'F':
      printf( "Failed - off to OCC.\n");
    defaut:
      printf( "Invalid Grade \n" );
  }

}
