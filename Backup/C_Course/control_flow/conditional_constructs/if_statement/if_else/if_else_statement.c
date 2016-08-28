/*

This Program Explains About if...else conditional branching statement in C 
	

Author  :  Vivek Tiwari
Useage	:  if (exp) 	     [Format 1]
    	   	statement1; 
	   else
		statement2;
	   An exp can be any integer expression
	   A Statement can be any null statement, simple statement, or compound statement. 
	   A statement can itself be another if statement.
	   Remember, a statement ends with a semicolon.
Version :  1.0

*/

#include<stdio.h>
main()
{
	int a=1,b=2;
	
// In below example if given expression evaluates to true (any nonzero value), 
// C Excutes	printf("\n A is big\n"); 
// if given expression evaluates to flase (evaluates to 0), 
// C Excutes	printf("\n B is big\n"); 

	if(a>b)	
		printf("\n A is big\n");
	else
		printf("\n B is big\n");
		
}

