/*

This program shows how values can be read from keyboard into an array
  
Author 	: Vivek Tiwari
Usage	: scanf("formatting char",&variable[index]); 
Version:1.0

*/
 
#include<stdio.h>
int main()
{
    int a[5];
    int i;
    printf("Enter 5 values");
    for(i=0;i<8;i++)
       scanf("%d",&a[i]);
    
    for(i=0;i<8;i++)
       printf("  %d",a[i]);

}    
    
