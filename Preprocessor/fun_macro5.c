#include <stdio.h>

#define isdigit(a) ((unsigned)((a) - '0') <= 9)
int main()
{
	char c = 'a';
	printf(" %d\n",isdigit(c));			
}
