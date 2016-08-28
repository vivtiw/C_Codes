/*
 
Program to demonstrate the 'switch/case' structure.
Prog looks at the number of command line parameters passed and tells the user how many its got.

Author	: Vivek Tiwari
Usage	:  
	  switch ( exp )
	  {
	    	case const_exp : 
		       [statement]...
		[case const_exp : 
		       [statement]...]
		[default : 
		       [statement]...]
	  }
 
	  Arguments 
	  exp   
		The integer expression that the switch statement evaluates and then compares to the values in all the cases.
  	  const_exp   
 		An integer expression to which exp is compared. If const_exp matches exp, the accompanying statement is executed.
 	 statement   
	        Zero or more simple statements. (If there is more than one simple statement, you do not need to enclose the statements in braces.)

Version	: 1.0 
*/

#include<stdio.h>

int main()
{
	char input; 	
	printf("\n Enter any char : ");
	 scanf("%c",&input);
	switch(input)
	{
	    case 'a':
	    case 'A':
	    case 'e':
	    case 'E':
	    case 'i':
	    case 'I':
	    case 'o':
	    case 'O':
	    case 'u':
	    case 'U':
		printf("\nVowel");
		break;
	    default:
		printf("\n Not an Vowel\n");
	}
}
	


