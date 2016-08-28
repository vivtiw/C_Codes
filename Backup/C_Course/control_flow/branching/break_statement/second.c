/*

This example explains how to use break statement
This example asks the user to enter any 10 integets & if any -ve value is entered loop will be treminated

Author  :  Vivek Tiwari
Usage   :  break;
Version :  1.0

*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<5;i++)
    {
	for(j=1;j<10;j++)
        {
 		if(j==5)
		   break;	
		printf("\n %d\t%d",i,j);
	}
	printf("\n");
    }
}

