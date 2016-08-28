/*

This program explains about formatted output functions printf
This program shows how to use various Constant Escape characters

Author	:  Vivek Tiwari
Usage 	:  \escape char
Version	:  1.0

*/


#include<stdio.h>
int main()
{
	char c;
	printf("\n'Veda Solution'");		// Single quote
	printf("\n\"Veda Solution\"");		// Double quote
	printf("\n %d\\0%d\\%d",10,6,2006);	// Backslash 
	c = '\0';				// Null character
	printf("\n NULL = %c",c);	 	
 	c = '\113';				// Hexadecimal number ( \xhh )
	printf("\n NULL = %c",c);		
	printf("\n \a ");	 		// Audible Bell
	printf("\n Veda Solutionss\b ");	// Backspace 
	printf("\n Veda\tSolutions ");	 	// Horizontal Tab
	printf("\n Veda\vSolutions\n");	 	// Vertical Tab
	
}
