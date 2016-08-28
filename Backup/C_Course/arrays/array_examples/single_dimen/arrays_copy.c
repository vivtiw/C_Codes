/* 
  This demanstrate how to copy elements of an array into another array

  Author:Vivek Tiwari

  Version:1.0

*/
  

   #include <stdio.h>
   int main()
   {
     short age[4]; 
     short same_age[4];
     
     age[0]=23; 
     age[1]=34; 
     age[2]=65;
     age[3]=74;
  
    same_age[0]=age[0];
    same_age[1]=age[1];
    same_age[2]=age[2];
    same_age[3]=age[3];
  
    printf("%d\n", same_age[0]);
    printf("%d\n", same_age[1]);
    printf("%d\n", same_age[2]);
    printf("%d\n", same_age[3]);
    return 0;
  }
