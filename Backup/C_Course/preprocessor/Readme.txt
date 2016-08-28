The preprocessing language
**************************

- The C preprocessor, often known as cpp, is a macro processor that is used automatically by the C compiler to transform 
  your program before compilation.

- The preprocessor performs a series of textual transformations on its input.

Initial processing
******************
	The input file is read into memory and broken into lines.
	Continued lines are merged into one long line.
	All comments are replaced with single spaces.

Tokenization
************
Preprocessing tokens fall into following: 
	identifiers, 
	preprocessing numbers, 
	string literals.

The preprocessing language
**************************
- If your source file contains any operations in the preprocessing language, it will be transformed first.

- The preprocessing language consists of directives to be executed and macros to be expanded.
	
- Its primary capabilities are:
	Inclusion of header files.  
	Macro expansion. 
	Conditional compilation.  
	Diagnostics. You can detect problems at compile time and issue errors or warnings.

Macros
There are two kinds of macros. 
They differ mostly in what they look like when they are used. 
	Object-like macros resemble data objects when used, 
	function-like macros resemble function calls.

