/*

This Program Explains About compound if statements in C 
This program will execute morethan one statement in if called compound if statements
Use curly braces ({  }) in a compound statement to indicate where the statement begins and ends.	
Author  :  Vivek Tiwari
Useage	:  if (exp) 	     [Format 2]
	   {
    	   	statement1;
    	   	statement2;
    	   	statement3;
		 .  .  .  ;
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
	int a=10,b=2;
	
	printf("\n Before if Statement \n a = %d\tb = %d\n",a,b);
	if(a>b)
		{int temp = a;
		b = a;
		b = temp;
		}
	printf("\n After if Statement \n a = %d\tb = %d\n",a,b);
}

