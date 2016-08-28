/*

This Program implements goto & Lable statements in c

Author	:  Vivek Tiwari
Usage	:  goto lable:
version :  1.0

*/

#include<stdio.h>
int main()
{
	int a=5;
	if(a>1)
	{
	  if(a>2)	
	    if(a>3)	
	      if(a>4)	
	        if(a==10)	
		{
		   printf("\n control is being jumped to specified lable")		;
		   goto flag;
		}
	  printf("\n Exiting normally from if & also executes statements in lable\n");
	}
	flag:
		printf("\n executing from lable\n");
	
}

