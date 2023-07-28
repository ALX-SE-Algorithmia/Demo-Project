#include "calc.h"

/**
 * root - square root of a number
 * @num: number to find root
 * @root: root of num
 * Return: square root of num
 */
double root(double num, double root)
{
	if (root == 0)
	{
		printf("Error: Root by 0.\n");
		exit(1);
	}
	return (pow(num, 1 / root));
}

/**
 * exponent - exponent of a number
 * @base: base number
 * @exp: exponent number
 * Return: exponent of base ^ exp
 */
double exponent(double base, double exp)
{
	return (pow(base, exp));
}

/**
 * logten - log base 10 of a number
 * @a: number to find log
 * Return: log base 10 of a
 */
double logten(double a)
{
	if (a <= 0)
	{
		printf("Error: Log of 0 or a negative number.\n");
		exit(EXIT_FAILURE);
	}
	return (log10(a));
}

/**
 * factorial - factorial of a number
 * @a: first number
 * Return: factorial of a
 */
int factorial(int a)
{
	int result = 1;
	int i;

	if (a < 0)
	{
		printf("Error: Factorial of a negative number.\n");
		exit(EXIT_FAILURE);
	}

	for (int i = 2; i <= a; i++)
	{
		result *= i;
	}
	return (result);
}

/**
 * fib - fibonacci of a number
 * @n: first number
 * Return: fibonacci of a
 */
int fib(int n)
{
	int a = 0;
	int b = 1;
	unsigned long long result = 0;

	if (n <= 0)
		return (0);

	for (int i = 2; i <= n; i++)
	{
		result = a + b;
		a = b;
		b = result;
	}
	return (result);
}
