/*
  This progeam explains about line input function 'fgets'
  Author :Vivek Tiwari

  Usage  : char * fgets(char *s,int size,FILE *stream);
           gets() reads a line from stdin into the buffer pointed to by s until
           either  a  terminating newline or EOF, which it replaces with ’\0’.   
  Remarks: No check for buffer overrun is performed
 
  Version:1.0

*/

#include<stdio.h>
#define LINE  8
int main()
{ 
	char string[LINE];
	printf("\nEnter a string ");
	fgets(string,8,stdin);
	printf("\nyou have entered\n");
	printf("%s",string);
	fflush(stdin);
	return 0;
}  
    
           
