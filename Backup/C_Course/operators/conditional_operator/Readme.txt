Conditional Operator
--------------------

Syntax 
------
	exp1 ? exp2 : exp3
 
Arguments 
---------
	exp1   
	  Any expression.
	exp2   
	  Any expression.
	exp3   
	  Any expression.
 
Description 
-----------
-The conditional expression construction provides a shorthand way of coding an if...else condition.
-The difference between the expression notation and an if...else condition is that the ? : notation is an expression and therefore returns a value, while an if...else condition is a statement and    does not return a value. The syntax described above is equivalent to

 if (exp1)
     exp2;
 else
     exp3;

-When a conditional expression is executed, exp1 is evaluated first.
-If it is true (that is, nonzero) exp2 is evaluated and its result is the value of the conditional expression.
-If exp1 is false, exp3 is evaluated and its result is the value of the conditional expression.
-There is no requirement that you put parentheses around the exp1 portion of the conditional        expression, but doing so will improve your code's readability.
-Both exp2 and exp3 must be assignment-compatible. If exp2 and exp3 are pointers to different types then the compiler issues a warning.
-The value of a conditional expression is either exp2 or exp3, whichever is selected. The other     expression is not evaluated. The type of the result is the type that would be produced if exp2 and exp3 were mixed in an expression. For instance, if exp2 is a char and exp3 is a double, the result type will be double regardless of whether exp2 or exp3 is selected.
