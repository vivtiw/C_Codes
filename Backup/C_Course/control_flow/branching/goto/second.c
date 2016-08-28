/*

This Program implements goto & Lable statements in c

Author	:  Vivek Tiwari
Usage	:  goto lable:
version :  1.0

*/

#include<stdio.h>
int main()
{
	int a=0;
flag:
	  if(a<10)
	  {
		a++;
		printf("\n %d \n",a);
		goto flag;
	  }
	printf("\n executing from lable\n");
	
}

