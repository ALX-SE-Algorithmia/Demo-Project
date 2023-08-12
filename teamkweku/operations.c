#include "calc.h"

/**
 * addition - a function that adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: returns the sum of a and b
 */
int addition(int a, int b)
{
	return (a + b);
}

/**
 * subtraction: a function that subtracts two integers
 * @a: first number
 * @b: second number
 *
 * Return: return a - b
 */
int subtraction(int a, int b)
{
	return (a - b);
}

/**
 * multiplication - function that multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product of two numbers
 */
int multiplication(int a, int b)
{
	return (a * b);
}

/**
 * division - divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: reminder after the division
 */
int division(int a, int b)
{
	if (b == 0)
	{
		printf("Division by zero is not allowed\n");
		return (EXIT_FAILURE);
	}

	return (a / b);
}
