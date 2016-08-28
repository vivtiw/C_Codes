/*

This Program explains how to define, declare, invoke Variadic Functions

Author 	:  Vivek Tiwari
Usage	:  return_type function_name(fixed arguments,...);
	   in Function definition to access optional arguments we use the following
	   ------------------------------------------------------------------------
	   Data Type: va_list
	   ------------------
   		The type va_list is used for argument pointer variables.
	   Macro: void va_start (va_list ap, last-required)
	   ------------------------------------------------
  		 This macro initializes the argument pointer variable ap to point to the first of                   the optional arguments of the current function.

	   Macro: type va_arg (va_list ap, type)
	   -------------------------------------
		 The va_arg macro returns the value of the next optional argument, and modifies the                 value of ap to  point to the subsequent argument. Thus, successive uses of va_arg                  return successive optional arguments.

	   Macro: void va_end (va_list ap)
	   -------------------------------
 		 This ends the use of ap. You should invoke va_end before returning from the                        function in which va_start was invoked with the same ap argument.

Version	:  1.0

*/
 
#include <stdarg.h>
#include <stdio.h>

int add_em_up (int count,...)
{
	va_list ap;
	int i, sum;

	va_start (ap, count);         /* Initialize the argument list. */
	sum = 0;
	for (i = 0; i < count; i++)
   		 sum += va_arg (ap, int);    /* Get the next argument value. */

  	va_end (ap);                  /* Clean up. */
  	return sum;
}

int main (void)
{
	/* This call prints 16. */
	printf ("%d\n", add_em_up (3, 5, 5, 6));

	/* This call prints 55. */
	printf ("%d\n", add_em_up (10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));

	return 0;
}
