
/* This programe shows how to initialize an array in different way.
 
  Author : Vivek Tiwari

  Usage  :  datatype arrayname[size]={ , , , , ,.......};
                        or
            datatype arrayname[]    ={ , , , , ,  ,......};

  Remarks: No bound checkings are done by compiler i.e if you give more
           values than the 'size', compiler doesn't raise an error but 
           warning.               
  Version:1.0
*/
#include<stdio.h>
 int main()
 {
   int a[5]={20,30,40,50,40}; //you can give only five values

   float b[]={1.5,3.4,2.6};   //you can give as many values as you want

   	printf("%d %d %d %d %d ",a[0],a[1],a[2],a[3],a[4]);
  	printf("\n%.2f %.2f %.2f",0[b],1[b],2[b]);    
   	printf("%d %d %d %d %d ",*(a+0),*(a+1),*(a+2),*(a+3),*(a+4));
	
 }

