/*
  This uses 'gets'library function to read an entire line into a string

  Author :Vivek Tiwari

  Usage  : char * gets(char *s);
           gets() reads a line from stdin into the buffer pointed to by s until
           either  a  terminating newline or EOF, which it replaces with ’\0’.   
  Remarks: No check for buffer overrun is performed
 
  Version:1.0

*/

#include<stdio.h>
#define LINE 10 
int main()
{ 
 char string[LINE];
 printf("\nEnter a string ");
 gets(string);
 printf("\nyou have entered : %s\n",string);
 puts("askjdbaskjbd");
 puts(string);
 //printf("%s",string);
 return 0;
}  
    
           
