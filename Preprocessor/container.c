#include <stdio.h>

#define offsetof(TYPE, MEMBER)   (unsigned int) &((TYPE *)0)->MEMBER






#define container_of(ptr, type, member)  
	  (type *) ( (char *)ptr - offsetof(type,member) )








struct A {
	int i;
	char c;
	float f;
};

int main()
{
	struct A obj;
	struct A *ptr;

	ptr = container_of(&obj.c,struct A,c);
	printf(" %u %u\n",&obj,ptr);
}
