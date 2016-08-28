#include<stdio.h>
#include <stdlib.h>

struct sample {
	short i,j;
	float f;
	char c;
	double d;
};
int main()
{
	struct sample obj;
	printf("\n offset of c %d\n",(unsigned int)(&obj.c)-(unsigned int )(&obj));
}
