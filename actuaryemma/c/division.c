#include "cal.h"

/**
  * division - divide two int numbers
  * @a: first number
  * @b: second number
  * Return: division of two numbers
  */
int division(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero is not allowed.\n");
		return (0);
	}
	return (a / b);
}

/**
  * division_0 - divide two float numbers
  * @a: first number
  * @b: second number
  * Return: division of two numbers
  */
float division_0(float a, float b)
{
	if (b == 0)
	{
		printf("Error: Division by zero is not allowed.\n");
		return (0);
	}
	return (a / b);
}

/**
  * division_1 - divide two double numbers
  * @a: first number
  * @b: second number
  * Return: division of two numbers
  */
double division_1(double a, double b)
{
	if (b == 0)
	{
		printf("Error: Division by zero is not allowed.\n");
		return (0);
	}
	return (a / b);
}
