/*

This program explains some predefined Standard Macros

Author	: Vivek Tiwari
Version	: 1.0

*/

#include<stdio.h>
//#include<unixio.h>

void disp();

int main()
{
	int a=10,b=-10;
	printf("\n File in Use  :%s \n",__FILE__);
	printf("\n Present Line : %d",__LINE__);
	printf("\n Present Function : %s",__func__); // Specified in C99 
	disp();  
	printf("\n Present Date : %s",__DATE__); 
	printf("\n");	
}

void disp()
{
	printf("\n Present Function : %s",__FUNCTION__); // Specified in GNU  
}
