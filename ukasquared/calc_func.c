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

int divz(int a, int b)
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

int opr(char *c, int first_num, int second_num)
{
	if(c[0] == '+')
		return add(first_num, second_num);
	else if(c[0] == '*')
		return mul(first_num, second_num);
	else if(c[0] == '-')
		return sub(first_num, second_num);
	else if(c[0] == '/')
		return divz(first_num, second_num);
}
