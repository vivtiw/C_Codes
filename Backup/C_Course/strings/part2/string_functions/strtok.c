/*
  This program explaing about 'strtok' library functions  

  Author : Vivek Tiwari
 
  Usage  : char *strtok(char *s, const char *delim)
	   chartrtok() function can be used to parse the string s  into  tokens.  The  first
       	   call to strtok() should have s as its first argument. Subsequent calls should have
           the first argument set to NULL. Each call returns a pointer to the next token,  or
           NULL when no more tokens are found.*strrchr(const char *s, int c);	
	   	
  Versin:1.0

*/

#include<string.h>
#include<stdio.h>
int main()
{
  char main_str[80]="100	Hari Prasad.D	M	27";
  char *sub;
  printf("\nMain String : %s",main_str);
	
  for(sub = strtok(main_str,"\t");sub!=NULL
		;sub=strtok(NULL,"\t"))	
  	printf("\n %s\n",sub);
  
  return 0;
}
