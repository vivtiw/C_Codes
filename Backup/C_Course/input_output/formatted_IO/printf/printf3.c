/*

This program explains about formatted output functions printf
This program shows how to specify field width in printf 

Author	:  Vivek Tiwari
Usage 	:  %[flags]
Version	:  1.0

*/


#include<stdio.h>
int main()
{
	int pos=10,neg=-10;
	float f = 111111.11111;
	// Minimum number of characters to be printed. If the value to be printed is shorter than             this number the result is padded with blanks. The value is never truncated even if the             result is larger.
	printf("\n %5d",pos);	// Minimum number of characters to be printed.
	printf("\n %5d",neg);	// Minimum number of characters to be printed.
	printf("\n %3.2f",f);	// Minimum number of characters to be printed.

	// Same as above but filled with 0s instead of blanks
	printf("\n %05d",neg);	// Left align within the given width.

	// The width is not specified in the format string, it is specified by an integer value               preceding the argument that has to be formatted.
	printf("\n %*d",5,neg);	// Left align within the given width.
	printf("\n %*.*f\n",5,2,f);	// Left align within the given width.	
}
