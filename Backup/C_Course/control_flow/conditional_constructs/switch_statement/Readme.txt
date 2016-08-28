The switch-case statement is a multi-way decision statement.
The switch statement evaluates the conditional expression and tests it against set of constant values (10,'A') used with case.
The case statement should be followed by any int or char constant but not float or double or variables or expressions.
The syntax is : 

     switch( expression )
     {
        case constant-expression1:	
		statement1;
		statement2;...........
        case constant-expression2:
		statement1;    
		statement2;...........
        case constant-expression3:	
		statement1;
		statement2;...........
        [default : 
		statements4;]
     }
The case statements and the default statement can occur in any order in the switch statement.
The default clause is an optional clause that is matched if none of the constants in the case statements can be matched.
This is because, in the 'C' switch statement, execution continues on into the next case clause if it is not explicitly specified that the execution should exit the switch statement.
We can use break or return or goto.

