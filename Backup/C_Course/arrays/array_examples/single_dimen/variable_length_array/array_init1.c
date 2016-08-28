
/* This programe shows how to declare an variable lenth array.
 
  Author : Vivek Tiwari

  Usage  : datatype variable=value;   
	   datatype arrayname[value];

  Remarks: No bound checkings are done by compiler i.e if you give more
           values than the 'size', compiler doesn't raise an error or a
           warning.               
  Version:1.0
*/
#include<stdio.h>
 int main()
 {
   int n=5,i;	
   int a[n]={1,2,3,4,5};

   
   	
   for(i=0;i<5;i++)
   	a[i]=i+1;

 
   printf("\n");
   for(i=0;i<5;i++)
   	printf("%d ",a[i]);

   printf("\n\n");
 }

