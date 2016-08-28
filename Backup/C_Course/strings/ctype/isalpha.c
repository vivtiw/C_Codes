/* 
  This explains use of charector functions 'isalpha','isalnum'.
  
  Author : Vivek Tiwari

  Usage  : int isalnum(int c);
           int isalpha(int c);
         :isalnum()
              checks for an alphanumeric character; it is equivalent to (isal-
              pha(c) || isdigit(c)).

         :isalpha()
              checks for an alphabetic character; in the standard "C" 
              it  is  equivalent  to  (isupper(c)  ||  islower(c)).   In  some
              locales, there may be additional characters for which  isalpha()
              is true--letters which are neither upper case nor lower case.
   
  Versoin: 1.0

*/

#include<ctype.h>
#include<stdio.h>
main()
{
   unsigned char ch='*'; 
   unsigned char ch1='a';

/*checking whether given charector is alpha numeric or not*/
   if(isalnum(ch))
     printf("\nGiven charactor  '%c' is alpha numeric",ch);
   else
     printf("\nGiven charector '%c' is not alpha numeric",ch);

/*checking for whether given charactor is alphabetic charactor */
   if(isalpha(ch1))
     printf("\nGiven charactor  '%c' is alphabetic charactor",ch1);
   else
     printf("\nGiven charector '%c' is not alphabetic charactor",ch1);

  return 0;
}
     
      

 
