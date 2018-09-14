/*
 * Following line is executed correctly ...
 */ 
if (x == y)
	foo();
/*
 * ... but might induce misunderstanding at reading if more than 
 * one line are indented the same way. For Example :
 */
if (x == y)
	foo();
	x = barfoo + y; 	//< This line is always executed 
						//  whatever if the condition
						//  (x == y) is true or false

/*
 * Whenever a bug occurs at runtime, we cannot tell if the issue
 * comes from the condition or from the function call in the
 * following example :
 */
if (foo() == y)	bar();


