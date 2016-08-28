/*
  This program is to sort strings
  
  Author:Vivek Tiwari
  
  Version:1.0

*/

#include<stdio.h>
#include<string.h>
main()
{
 char stu_names[10][50],temp[50];
 int n,i,j;
 printf("\nEnter # of students");
 scanf("%d",&n);
 printf("\nEnter students names");
 for(i=0;i<n;i++)
 scanf(" %[^\n]",stu_names[i]);

 printf("\nBefore sorting\n");
 
 for(i=0;i<n;i++)
 printf("\n     %s",stu_names[i]);

 /*sorting starts here...*/
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
       if( (strcmp(stu_names[i],stu_names[j]))>0)
       {
         strcpy(temp,stu_names[i]);
         strcpy(stu_names[i],stu_names[j]);
         strcpy(stu_names[j],temp);
       } 
    }
   } 
 /*printing sorted strings */
 printf("\nAfter sorting:\n");
 for(i=0;i<n;i++)
   printf("\n      %s",stu_names[i]);
 return(0);
} 


      

                               
