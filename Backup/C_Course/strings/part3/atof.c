
 /* convert a string to a float  */


#include <stdio.h>
#include <stdlib.h>

char string[] = "2.21ased";

int main()
{
	float sum;
        sum = atof( string );
        printf("Sum = %f\n", sum );
}

