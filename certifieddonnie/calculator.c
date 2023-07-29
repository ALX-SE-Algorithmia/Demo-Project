#include "calculator.h"

/**
 * add - Function that adds numbers
 * @first: the first number.
 * @second: the second number
 *
 * Return: Success
 */
double add(double first, double second)
{
	return (first + second);
}

/**
 * subtract - Function that subtracts numbers
 * @first: the first number.
 * @second: the second number.
 *
 * Return: Success
 */
double subtract(double first, double second)
{
	return (first - second);
}

/**
 * multiply - Function that multiplies numbers
 * @first: the first number
 * @second: the second number.
 *
 * Return: Success
 */
double multiply(double first, double second)
{
	return (first * second);
}

/**
 * divide - Function that divides numbers.
 * @dividend: the first number
 * @divisor: the second number
 *
 * Return: Success or Error
 */
double divide(double dividend, double divisor)
{
	if (divisor != 0)
	{
		return (dividend / divisor);
	}
	DivisionByZero();
	return (EXIT_FAILURE);
}

/**
 * logarithm - Function that solves the log of a number in Base10
 * @num: the value
 *
 * Return: Success or Error
 */
double logarithm(double num)
{
	if (num > 0)
	{
		return (log10(num));
	}
	NegativeNumbers();
	return (EXIT_FAILURE);
}

/*
* Create More Calculating Functions in Here.
* Don't Forget to Use Error Handling Functions when necessary.
*/
