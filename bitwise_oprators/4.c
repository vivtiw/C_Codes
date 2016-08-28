#include<stdio.h>
#define ENDIAN(ch) (char)ch&1 ? printf("\n Little"):printf("\n Big");

main()
{
	unsigned int i=1;
	ENDIAN(1)
}



