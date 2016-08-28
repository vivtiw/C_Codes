/*
This program  counts bits set to 1 in an a number
*/


#include<stdio.h>
int main()
{ 
	int x=10,count;
	for (count=0; x != 0; x>>=1)
		if ( x & 01)
        		count++;
	printf("\n count : %d\n",count);
}
