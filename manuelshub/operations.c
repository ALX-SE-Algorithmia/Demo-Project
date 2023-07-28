#include "calc.h"

/**
 * add - Function that adds two numbers
 * @a: the first parameter
 * @b:the second parameter
 * Return: The sum of both numbers
 */

double add(double a, double b)
{
	double sum;
	sum = a + b;
	return (sum);
}

/**
 * sub - Funtiion that takes two numbers as parameter and return their difference
 * @a: the first parameter
 * @b: the second parameter
 * Return: the difference of the two numbers
 */

double sub(double a, double b)
{
	double minus;
	minus = a - b;
	return (minus);
}

/**
 * mul - Function that multiplies two numbers
 * @a: first parameter
 * @b: second parameter
 * Return: the product of the two numbers
 */

double mul(double a, double b)
{
	double prod;
	prod = a * b;
	return (prod);
}

/**
 * div - Function that divides two numbers
 * @a: first parameter
 * @b: second parameter
 * Return: The division of the two numbers
 */

double div(double a, double b)
{
	double c;
	if (b == 0)
	{
		printf("Error: Denominator cannot be Zero!\n");
		return(0.00);
	}
	else
	{
		c = a / b;
		return (c);
	}
}
