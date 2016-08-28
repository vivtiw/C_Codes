/*
   This program explains some truths of string initializations

   Author :Vivek Tiwari
   
   Remarks :if some of elements of an char array are not initialized,they are 
            assumed to be ascii NUL(\0).     
   Version :1.0
   
*/

#include<stdio.h>
int main()
{
   char name[20]={'V','e','d','a'};
   char address[25]={ };//all are set to ascii NUL(\0)    
   int i;
   for(i=0;i<20;i++)
      printf("\n%c=%d",name[i],name[i]);
   for(i=0;i<25;i++)
      printf("%c = %d",address[i],address[i]);
   return 0;
}

