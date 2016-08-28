/*

This program expains about automatic storage class variables.

Author	:  Vivek Tiwari
Usage	:  auto datatype variable;
Version	:  1.0

*/

#include<stdio.h>
int main()
{
	int a=1;		// Block 1
	{
		int a=2;	// Block 2
		{
			int a=3;	// Block 3
			{
				printf("\n block 3 : %d ",a);
			}				
		}		
		printf("\n block 2 : %d ",a);
	}
	
	printf("\n block 1 : %d\n",a);
}
