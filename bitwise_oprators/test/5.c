#include<stdio.h>
main()
{
	unsigned char c;
	typedef struct name{
		long a;
		int b;
		long c;
	}r;
	r re={3,6,5};
	r *na=&re;
	printf("\n %d \n",*(int*) ((char*)na +(unsigned int)&((struct name *)0)->b));
}
