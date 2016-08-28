/*
  This programs explains how to use two dimensional strings or string array

  Author: Vivek Tiwari

  Version:1.0
 
*/

#include<stdio.h>
main()
{
 char stu_names[10][50];
 int n,i;
 printf("\nEnter # of students");
 scanf("%d",&n);
 printf("\nEnter students names");
 for(i=0;i<n;i++)
	 scanf(" %[^\n]",stu_names[i]);
 printf("\nSTUDENT NAMES\n");
 printf("-------------\n");
 for(i=0;i<n;i++)
	 printf("\n%s",stu_names[i]);
}


