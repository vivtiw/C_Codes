#include <stdio.h>
//#define GCC 1
int main()
{
	#ifdef GCC
		long long int a;
	#else
		long int a;
	#endif

	printf("\n %d \n",sizeof(a));
}
