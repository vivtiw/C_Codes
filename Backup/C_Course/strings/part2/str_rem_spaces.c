/*
  This programs removes extra spaces between words
   
  Author : Vivek Tiwari
 
  Version:1.0

*/

#include<string.h>
#include<stdio.h>
#define LINE 80
int main()
{
  char string[LINE];
  int i=0,j;
  printf("\nEnter a sentence ");
  fgets(string,80,stdin);
  printf("\n string : %s",string);
  for(i=0;string[i]!='\0';i++)
  {
        if((string[i]==' ' && string[i+1]==' ') || string[0]==' ')
	{
	   for(j=i;string[j]!='\0';j++)
	   	string[j]=string[j+1];
	   i--;
	}
  }		
  printf("\n string : %s\n",string);

}        
  
 

  
