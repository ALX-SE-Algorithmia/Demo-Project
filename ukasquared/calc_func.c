#include "calc.h"
/**
* Author: ukasquared
* add - adds two numbers
* @a: the first number
* @b: the second number
* return: always(success)
*/

int add(int a, int b)
{
	return (a + b);
}


/**
* Author: ukasquared
* mul - multiply two numbers
* @a: the first number
* @b: the second number
* return: always(success)
*/


int mul(int a, int b)
{
	return (a * b);
}



/**
* Author: ukasquared
* sub - subtract two numbers
* @a: the first number
* @b: the second number
* return: always(success)
*/

int sub(int a, int b)
{
	return (a - b);
}



/**
* Author: ukasquared
* div - divides two numbers
* @a: the first number
* @b: the second number
* return: always(success)
*/

int div(int a, int b)
{
	return (a / b);
}


/**
* Author: ukasquared
* opr - calls function according to operator accepted
* as argument
* @c: the operator
* return: always(success)
*/

void opr(char c)
{
	if(c == '+')
		add(first_num, second_num);
	else if(c == '*')
		mul(first_num, second_num);
	else if(c == '-')
		sub(first_num, second_num);
	else if(c == '/')
		div(first_num, second_num);
}
