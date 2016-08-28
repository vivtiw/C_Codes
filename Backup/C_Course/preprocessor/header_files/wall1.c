#include<stdio.h>
#define MAX 10
/* This Program Explains  About -Wunused- macros option */ 
int main()
{
	int A=10;
	#if defined MAX 
	printf("\n Veda Solutions %d \n",A);
	#else 
	#endif
	return 0;
}
