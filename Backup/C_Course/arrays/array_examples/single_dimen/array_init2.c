/*

This program explians how 'char' array can be initialized in different ways

Author : Vivek Tiwari
 
Usage  :  char arrayname[size]={' ', ' ', ' ',};
           in this case 'size' must be more than the number ofvalues initialized
                            (or)
           char arrayname[size]="value";
           in this case also 'size' must be  more than the number of values 
           initialized. 
                            (or)
           char arrayname[]="value"; or char arrayname[]={' ', ' ', ' '};
             
 Version :1.0
*/

#include<stdio.h>
int main()
{
   char name[5]={'V','e','d','a'};
   char address[20]="Hyderabad";
   char phoneno[]="999999999";
    
   /*accesing by charector by charector*/ 
   printf("name= %c%c%c%c",name[0],name[1],name[2],name[3]);
   printf("\naddress= %s",address);
   printf("\nphoneno= %s",phoneno);
}  
