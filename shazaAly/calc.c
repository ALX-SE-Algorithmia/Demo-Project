#include "calc.h"
/**
* add - Adds two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The sum of @a and @b.
*/
double add(double a, double b)
{
	return a + b;
}
/**
* sub - Subtracts two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The result of @a minus @b.
*/

double sub(double a, double b)
{
	return a - b;
}
/**
* mul - Multiplies two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The product of @a and @b.
*/
double mul(double a, double b)
{
	return a * b;
}

/**
* div - Divides two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The result of @a divided by @b.
*         If @b is zero, returns 0.00 and prints an error message.
*/
double div(double a, double b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error: Division by zero\n");
        return 0.00;
	}

}
/**
* expo - Computes the exponentiation of a number.
* @a: The base number.
* @b: The exponent.
*
* Return: The result of @a raised to the power of @b.
*/
double expo(double a, double b)
{
	return pow(a, b);
}