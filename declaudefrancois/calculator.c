#include "calculator.h"

/**
 * calculate - Takes a operation description string as
 *             input and returns the result if the operation
 *             is valid.
 * @op: A char pointer containing a 'string' description of
 *      the operation to perform.
 *
 * Return: Float, the result of the operation.
 */
float calculate(char *op)
{
	char *next;
	float res;
	char operator;

	next = strtok(op, " ");
	res = 0.0;
	operator = '\0';
	/**
	 * TODO: evaluate the result using stacks DSA.
	 */
	while (next != NULL)
	{
		if (strlen(next) == 1 && isOperator(next[0]))
		{
			operator = next[0];
		}
		else if (isFloat(next))
		{
			if (res == 0.0)
				res = strtof(next, NULL);
			else if (operator != '\0')
			{
				res = evaluate(res, strtof(next, NULL), operator);
			}
		}
		else
			exit(0);
		next = strtok(NULL, " ");
	}

	return (res);
}


/**
 * evaluate - evaluates the result of operator
 *            applied on a and b.
 * @a: the first number
 * @b: the second number
 * @c: the operator symbol
 * Return: The result.
 */
float evaluate(float a, float b, char c)
{

	switch (c)
	{
		case '+':
			return (a + b);
		case '-':
			return (a - b);
		case '*':
			return (a * b);
		case '/':
			return (a / b);
	}

	printf("Operator '%c' not supported.\n", c);
	exit(0);
}

/**
 * isFloat - Checks if an string is a valid
 *           representation of a float number.
 * @op: The string to check.
 *
 * Return: 1 if valid otherwise 0.
 */
char isFloat(char *op)
{
	int opSize;

	opSize = strlen(op);
	for (int i = 0; i < opSize; i++)
	{
		if (!isOperator(op[0]) && op[i] != '.' &&
		    (op[i] < '0' || op[i] > '9'))
		return (0);
	}

	return (1);
}

/**
 * precedence - Returns the precendente of an
 *              operator.
 *
 * @op: The operator.
 * Return: -1, 1, 2 or 3.
 */
char precedence(char op)
{
	switch (op)
	{
		case '+':
		case '-':
			return (1);
		case '*':
		case '/':
			return (2);
		case '(':
		case ')':
			return (3);
		default:
			return (-1);
	}
}


/**
 * isOperator - Checks if a char is an operator.
 * @op: The char to test.
 *
 * Return: 1 is valid otherwise 0.
 */
char isOperator(char op)
{
	if (op == '-' || op == '+' ||
	    op == '/' || op == '*' ||
	    op == '(' || op == ')')
		return (1);
	return (0);
}
