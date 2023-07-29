#include "calc.h"
/**
 * add - this function returns the addition of two numbers
 * @num1: the first number
 * @num2: the second number
 * Return: the result
 */
double add(double num1, double num2)
{
	return (num1 + num2);
}
/**
 * subtract - this function returns the subtraction
 * of num2 from num1
 * @num1: the first number
 * @num2: the second number
 * Return: the result
 */
double subtract(double num1, double num2)
{
	return (num1 - num2);
}
/**
 * multiply - this function returns the multiplication of num2
 * and num1
 * @num1: the first number
 * @num2: the second number
 * Return: the result
 */
double multiply(double num1, double num2)
{
	return (num1 * num2);
}
/**
 * divide - divides num1 by num2
 * @num1: the first number
 * @num2: the second number
 * Return: the result
 */
double divide(double num1, double num2)
{
	if (num2 == 0)
		printf("Zero Division error\n\n");
	return (num1 / num2);
}
