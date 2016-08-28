/*

This program explains about formatted output functions printf
This program shows how to use various flags in printf 

Author	:  Vivek Tiwari
Usage 	:  %[flags]
Version	:  1.0

*/


#include<stdio.h>
int main()
{
	int pos=10,neg=-10;

	printf("\n %-5d",pos);		// Left align within the given width.
	printf("\n %5d",pos);		// right align is the default.
	printf("\n %+d \t %+d",pos,neg);// Forces to preceed the result with a sign (+ or -)
	printf("\n % d% d",pos,neg);	// If the argument is a positive, a blank is inserted      					      before the number.
	printf("\n %#o",pos);		// Used with o, value is preceeded with 0
	printf("\n %#x",pos);		// Used with x, value is preceeded with 0x
	printf("\n %#X\n",pos);		// Used with x, value is preceeded with 0X
	
	printf("\n %f\n",(float)pos);  //Used with f forces the output value to contain a decimal                                           point even if only zeros follow.
	printf("\n %e\n",(float)pos);	//Used with e forces the output value to contain a decimal                                           point even if only zeros follow.
	printf("\n %E\n",(float)pos);	//Used with E forces the output value to contain a decimal                                           point even if only zeros follow.
}
