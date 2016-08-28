#include <stdio.h>




#define offsetof(TYPE, MEMBER)  
 (unsigned int) &( (TYPE *)0 )->MEMBER;









struct A {
	int i;
	char c;
	float f;
};















int main()
{
	unsigned int offset;
	offset = offsetof(struct A,f)
	printf(" %u\n",offset
);
}
