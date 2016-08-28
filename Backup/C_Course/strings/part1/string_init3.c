/*
   This will explians what happens if array overflows
  
   Author : Vivek Tiwari

   Remarks:
   
   Version :1.0

*/

#include<stdio.h>
int main()
{
  char name[30]="Veda Solutions";//excess 
  int i;
  //for(i=0;i<10;i++)
   // printf("\n%c =%d",name[i],name[i]);
   name[6]='\0';	

    printf("\n%s",name);
}
 

   
   
