/*

This Program finds the average of n numbers & stores the result in avg of main

Author 	:  Vivek Tiwari

Version	:  1.0

*/
 
#include <stdarg.h>
#include <stdio.h>

void average(double *,...);

void average(double *p,...)
{
	va_list ap;
	int i, sum,count=0;

	va_start (ap,p);         /* Initialize the argument list. */
	sum = 0;
	for (i = 0; i!=-1 ;)
	{
   		 
		i = va_arg (ap, int);    /* Get the next argument value. */
		if(i!=-1)
		sum+=i;
		count++;
	}

  	va_end (ap);                  /* Clean up. */
  	*p = (double)sum/(count-1);
}

int main (void)
{
	double avg; 
	
	average(&avg,3,5,6,7,-1);
	printf("\n Average : %.2lf\n",avg);

	average(&avg,1,2,3,4,5,6,7,8,9,10,13,-1);
	printf("\n Average : %lf\n",avg);
	return 0;
}
