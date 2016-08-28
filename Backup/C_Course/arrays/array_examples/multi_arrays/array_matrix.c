/*
  This programme addition of two matrices
  
  Author : Vivek Tiwari
  
  Version:1.0
  

*/

#include<stdio.h>
int main()
{
  int a[3][3],b[3][3];
  int c[3][3];
  int i,j;
  printf("\nEnter A matrix values");
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      scanf("%d",&a[i][j]);
     
  printf("\nEnter B matrix values");
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      scanf("%d",&b[i][j]);
  
   /*adding*/

    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
         c[i][j]=a[i][j]+b[i][j];    


   printf("\nA matrix:\n");
   for(i=0;i<3;i++){
       printf("\n"); 
     for(j=0;j<3;j++)
        printf("  %d",a[i][j]);
   }
  
   
   printf("\nB matrix:\n");
   for(i=0;i<3;i++){
       printf("\n"); 
     for(j=0;j<3;j++)
        printf("  %d",b[i][j]);
   }

   printf("\nA+B:\n");
   for(i=0;i<3;i++){
       printf("\n"); 
     for(j=0;j<3;j++)
        printf("  %d",c[i][j]);
   }
 
   return 0; 
}  
