/*
   This program uses built in functions 'isdigit','isspace' 'isxdigit'to convert a given 
   charactor to lower case from upper and vice versa

   Author :Vivek Tiwari

   Usage  :int isdigit(int c);
           int isspace(int c);
   	   int isxdigit(int c);
 
   Version: 1.0


*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char a = '1', b = '	',c = '0xa';
	if(isdigit(a))
		printf("\n a is digit\n");
	if(isspace(b))
		printf("\n b is space\n");
	if(isxdigit(c))
		printf("\n c is xdigit \n");
	
		
}
 
