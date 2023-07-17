#include "calc.h"

/**
 * add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
double add(double a, double b)
{
	return (a + b);
}

/**
 * sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
double sub(double a, double b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
double mul(double a, double b)
{
	return (a * b);
}

/**
 * division - divides two numbers
 * @a: first number
 * @b: second number
 * Return: quotient of a / b
 */
double division(double a, double b)
{
	if (b == 0)
	{
		printf("Error: Division by 0.\n");
		exit(EXIT_FAILURE);
	}
	return (a / b);
}

/**
 * mod - modulo of two numbers
 * @a: first number
 * @b: second number
 * Return: modulus of a % b
 */

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Modulo by 0.\n");
		exit(EXIT_FAILURE);
	}
	return (a % b);
}
