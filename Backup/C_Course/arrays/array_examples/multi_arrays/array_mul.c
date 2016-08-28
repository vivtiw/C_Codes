/*
   This program explians how to multiply two matrices
  
   Author :Vivek Tiwari
  
   Version:1.0

*/

#include<stdio.h>
#include<stdlib.h>
#define COLS 5
#define ROWS 5 
main()
{
  int a[ROWS][COLS],b[ROWS][COLS],c[ROWS][COLS];
  int i,j,k;
  int r1,r2,c1,c2;
  printf("\nEnter number of rows for 'a'");
  scanf("%d",&r1);
  printf("\nEnter number of cols for 'a'");
  scanf("%d",&c1);
  printf("\nEnter number of rows for 'b'");
  scanf("%d",&r2);
  printf("\nEnter number of cols for 'b'");
  scanf("%d",&c2);
  if(c1!=r2){
   printf("Multipication is not posible");
   exit(1);
  }
  printf("\nEnter A  matrix values:");  
  for(i=0;i<r1;i++)
    for(j=0;j<c1;j++)
      scanf("%d",&a[i][j]);
       
  printf("\nEnter B  matrix values:");  
  for(i=0;i<r2;i++)
    for(j=0;j<c2;j++)
      scanf("%d",&b[i][j]);
  
  /*multiplication starts here */
    for(i=0;i<r1;i++){
      for(j=0;j<c1;j++){
        c[i][j]=0;
        for(k=0;k<c1;k++)
          c[i][j]+=a[j][k]*b[k][j];
      }
    }

  /*displaying matrices*/     
         
  printf("\nA matrix:\n");  
  for(i=0;i<r1;i++){
    printf("\n");
    for(j=0;j<c1;j++)
      printf("%3d",a[i][j]);
  }
 
  printf("\nB matrix:\n");  
  for(i=0;i<r2;i++){
    printf("\n");
    for(j=0;j<c2;j++)
      printf("%3d",b[i][j]);
  }
  printf("\nC matrix:\n");
  for(i=0;i<r1;i++){
    printf("\n");
    for(j=0;j<c2;j++)
      printf("%3d",c[i][j]);
  }
}

