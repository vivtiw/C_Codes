/*

This Program Explains About compound if else statements in C 
This program will execute morethan one statement in if & else called compound if else statements
Use curly braces ({  }) in a compound statement to indicate where the statement begins and ends.	
Author  :  Vivek Tiwari
Useage	:  if (exp) 	     [Format 2]
	   {
    	   	statement1;
    	   	statement2;
		 .  .  .  ;
		 .  .  .  ;
	   }
	   else
	   {
    	   	statement1;
    	   	statement2;
		 .  .  .  ;
		 .  .  .  ;
	   }
		 
	   An exp can be any integer expression
	   A Statement can be any null statement, simple statement, or compound statement. 
	   A statement can itself be another if statement.
	   Remember, a statement ends with a semicolon.
Version :  1.0

*/

#include<stdio.h>
main()
{
	int a=10,b=2,temp;
	
	printf("\n Before if Statement \n a = %d\tb = %d\n",a,b);
	if(a>b)
	{
		a += 1;
		b += 1;
	}
	else
	{
		a += 10;
		b += 20;
	}
				
	printf("\n After if Statement \n a = %d\tb = %d\n",a,b);
}

