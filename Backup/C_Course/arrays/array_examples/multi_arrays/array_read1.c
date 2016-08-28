/*
  This shows how to read values into array 
 
  Author: Vivek Tiwari

  Version:1.0

*/


#include <stdio.h>

main()
{
  /*  Declaration Statements  */
  char month[12][4];
  short units[12];
  double sales[12];
  short i;

  printf(" How to read elements into an array \n");

  /*  Assignment Statements  */
  for (i = 1; i <= 12; i++) {
    printf("\nEnter the month (Jan,Feb,...)   : ");
    scanf("%s",month[i-1]);

    printf("\nEnter number of units sold    : ");
    scanf("%hd", &units[i - 1]);
    printf("\nEnter sales (in million $)    : ");
    scanf("%lg", &sales[i - 1]);
  }  /*  End of For{} loop  */

  return(0);
}
/*  End of Program   */

