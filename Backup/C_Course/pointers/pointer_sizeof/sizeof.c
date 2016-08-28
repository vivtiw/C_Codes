/*
 
This program explaing how to find out the size of the different data types
Author	:  Vivek Tiwari
Usage	:  
	   sizeof(expression);
	   sizeof(type);

Version	:  1.0
 
*/

#include <stdio.h>
int main()
{
					/*
					 * int/char   are 'type specifiers'
					 * short/long are 'type qualifiers'
					 */
  int i;

printf("        int * is %2d bytes \n", sizeof(int *));
printf("      float * is %2d bytes \n", sizeof(float *));
printf("     double * is %2d bytes \n", sizeof(double *));
printf("\n");
printf("       char * is %2d bytes \n", sizeof(char *));
printf("       void * is %2d bytes \n", sizeof(void *));
}

