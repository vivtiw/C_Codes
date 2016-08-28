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
	int cho,a,b;
	printf("\n 1. Addition");
	printf("\n 2. Subtraction");
	printf("\n 3. Multipation");
	printf("\n 4. Divition\n");
	printf("\n Enter Your Choice : ");
	 scanf("%d",&cho);
	printf("\n Enter any two number : ");
	 scanf("%d%d",&a,&b);
	switch(cho)
	{
	    default:	
		printf("\n Error: Bad input::Re-Enter CHOICE::\n");
		return;
	    case 1:
		printf("\n Sum of Two numbers %d\n",a+b);
		break;
	    case 4:
		printf("\n Divition of Two numbers %d\n",a/b);
		break;
	    case 2:
		if(a>b)
			printf("\n Difference of Two numbers %d\n",a-b);
		else
			printf("\n Difference of Two numbers %d\n",b-a);
		break;
	    case 3:
		printf("\n Product of Two numbers %d\n",a*b);
		break;
	}
	printf("\n End of Application\n");
}
	


