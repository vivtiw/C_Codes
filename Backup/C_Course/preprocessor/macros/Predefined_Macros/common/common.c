/*

This program explains some Commom Predefined Macros, which are extension of GNU C 

Author	: Vivek Tiwari
Version	: 1.0

*/

#include<stdio.h>
#define ERROR printf("\n ERROR: Cannot use variable length array\n")
int main()
{
	int a=5,b=-10,i;
/*//------------------------------------*/
	#ifndef __STRICT_ANSI__
	int c[a];
	for(i=0;i<5;i++)
		c[i]=i+1;
	for(i=0;i<5;i++)
		printf("%d ",c[i]);
	#else
		ERROR;
	#endif






















#define xx
/*//---------------------------------------*/
printf("\n Major Number of GCC Version  :%d \n",__GNUC__);
printf("\n Minor Number of GCC Version  :%d \n",__GNUC_MINOR__);
printf("\n Patch Level  :%d \n",__GNUC_PATCHLEVEL__);
printf("\n Compiler Version  :%s \n",__VERSION__);
	printf("\n");	
#endif
}
