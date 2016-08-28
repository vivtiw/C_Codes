#include <stdio.h>

#define mkstr(s)	#s
int main()
{
	char str[20] = mkstr(Veda Solutions);
	printf(" %s\n",str);
}  
