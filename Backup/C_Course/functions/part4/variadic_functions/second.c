/*

This Program explains how to define, declare, invoke Variadic Functions

Author  :  Vivek Tiwari
Usage   :  return_type function_name(fixed arguments,...);
           in Function definition to access optional arguments we use the following
           ------------------------------------------------------------------------
           Data Type: va_list
           ------------------
                The type va_list is used for argument pointer variables.
           Macro: void va_start (va_list ap, last-required)
           ------------------------------------------------
                 This macro initializes the argument pointer variable ap to point to the first of
                 the optional arguments of the current function.

           Macro: type va_arg (va_list ap, type)
           -------------------------------------
                 The va_arg macro returns the value of the next optional argument, and modifies the
                 value of ap to  point to the subsequent argument. Thus, successive uses of va_arg
                 return successive optional arguments.

           Macro: void va_end (va_list ap)
           -------------------------------
                 This ends the use of ap. You should invoke va_end before returning from the
                 function in which va_start was invoked with the same ap argument.

Version :  1.0

*/


#include <stdarg.h>
#include <stdio.h>
#include <string.h>

char *concat(char *bf, ...)
{
	va_list ap;
	char *p;
	va_start(ap, bf);        /* bf being the last argument before '...' */
	while ((p= va_arg(ap, char *)) !="NULL")
	{
		strcat(bf,p);
		printf("\n %s ",p);
	}
	va_end(ap);
     	return bf;
}


int main()
{
	static char *a="Veda ",*b=" Solutions",z[30]=" Hari Prasad",c[40];
	concat(c,a,b,z,"sdsd ","sajd as ","NULL"); 
	printf("\n %s",c); 
}
