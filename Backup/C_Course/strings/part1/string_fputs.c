/*
  This progeam explains about line output function 'fputs'
  Author :Vivek Tiwari

  Usage  : char * fputs(char *s,int size,FILE *stream);
 
  Version:1.0

*/

#include<stdio.h>
#define LINE  80
int main()
{ 
	char string[LINE];
	printf("\nEnter a string ");
	fgets(string,8,stdin);
	printf("\nyou have entered\n");
	fputs(string,stderr);
	return 0;
}  
    
           
