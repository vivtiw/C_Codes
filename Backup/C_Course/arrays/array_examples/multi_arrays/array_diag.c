/*
  This prints  diagnal elements of  a matrix
  
  Author: Vivek Tiwari
  
  Version:1.0

*/
#include<stdio.h>
main()
{
  int a[3][3];
  int i,j;
  printf("\nEnter matrix values(3X3):");
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      scanf("%d",&a[i][j]);

   
  /*printing values im matrix format*/
  printf("\nElements of matrix:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      printf("%3d",a[i][j]);
     printf("\n");	
  }
  		
  /*printing dianal values*/
   
   printf("\nDiagnal of matrix:\n");
   for(i=0;i<3;i++)
   {
     printf("\n");
     for(j=0;j<3;j++)
     {  
       if(i==j)
         printf("%3d",a[i][j]);
       printf("   ");
     }
    }
} 
