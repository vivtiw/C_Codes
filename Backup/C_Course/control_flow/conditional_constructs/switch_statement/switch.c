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

main(int argc, char *argv[])
{

  switch (argc)			/* Switch evaluates an expression (argc)  */
  {
				/* If expression resolves to 1, jump here */
  case 1:
    puts("Only the command was entered.");
    break;		        /* break - cases the execution to jump
				   out of the 'switch' block.             */
   
				/* If expression resolves to 2, jump here */
  case 2:
    puts("Command plus one parm entered");
    break;
   
				/* If expression resolves to 3, jump here */
  case 3:
    puts("Command plus two parm entered");
    break;

				/* Any other value jumps here.            */
  default:
    printf("Command plus %d parms entered\n", argc-1);
    break;
  }
}
