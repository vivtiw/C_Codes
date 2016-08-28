/*

This Program Shows the sizes of all premitive datatypes in C

Author  :  Vivek Tiwari
Version :  1.0

*/

#include<stdio.h>
#include<limits.h>
#define __USE_ISOC99
int main()
{
	printf("\nModifiers\t\tType\t\tSize(in Bytes)\t\tMinimum Values\t\tMaximum Values\n");
	printf("------------------------------------------------------------------------------------------------------\n");
	printf("\n%-12s\t\t%-5s\t\t%5d\t\t%20d\t%20d","signed","char",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	printf("\n%-12s\t\t%-5s\t\t%5d\t\t%20d\t%20d\n","unsigned","char",sizeof(unsigned char),0,UCHAR_MAX);
	printf("\n%-12s\t\t%-5s\t\t%5d\t\t%20d\t%20d","signed","int",sizeof(int),INT_MIN,INT_MAX);
	printf("\n%-12s\t\t%-5s\t\t%5d\t\t%20d\t%20lu","unsigned","int",sizeof(unsigned int),0,UINT_MAX);
	printf("\n%-12s\t\t%-5s\t\t%5d\t\t%20d\t%20d","signed short","int",sizeof(signed short int),SHRT_MIN,SHRT_MAX);
	printf("\n%-12s\t\t%-5s\t\t%5d\t\t%20d\t%20lu","unsigned short","int",sizeof(unsigned short int),0,USHRT_MAX);
	printf("\n%-12s\t\t%-5s\t\t%5d\t\t%20d\t%20d","signed long","int",sizeof(signed long int),LONG_MIN,LONG_MAX);
	printf("\n%-12s\t\t%-5s\t\t%5d\t\t%20d\t%20lu","unsigned short","int",sizeof(unsigned long int),LONG_MIN,LONG_MAX);
	printf("\n%-12s\t%-5s\t\t%5d\t\t%20lld\t%20lld","signed long long","int",sizeof(signed long long int),-(9223372036854775807LL-1LL),9223372036854775807LL);
	printf("\n%-12s\t%-5s\t\t%5d\t\t%20d\t%20llu","unsigned long long","int",sizeof(unsigned long long int),0,18446744073709551615ULL);
	printf("\n");
}
