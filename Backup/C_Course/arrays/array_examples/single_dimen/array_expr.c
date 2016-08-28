/*
   This program explains how an array can be used in some expressions
   
   Author : Vivek Tiwari
   
   Version:1.0

 */
 #include<stdio.h>
 #define SIZE 10
 int main()
 {
   long a[SIZE];
   long sum=0; 
   int i;
   for(i=0;i<SIZE;i++)
   {   
      printf("\nEnter a[%d] value",i);
      scanf("%ld",&a[i]); 
   } 
   for(i=0;i<SIZE;i++)
   {
	   sum+=a[i];
   }
   printf("sum of the numbers=%ld",sum);   
   return 0;
 }  
     
 
     

