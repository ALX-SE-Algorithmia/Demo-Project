#include "calc.h"
#include <math.h>
/**
 * root - this calculates the num2'th root of num1
 * @num1: the first number
 * @num2: the second number
 * Return: the num2th root of num1
 */
double root(double num1, double num2)
{
	return (pow(num1, 1 / num2));
}
/**
 * power - this calculates num1 to the power of num2
 * @num1: the base
 * @num2: the index
 * Return: num1 ^ num2
 */
double power(double num1, double num2)
{
	return (pow(num1, num2));
}
/**
 * sin_func - this calculates sin(num1) in degrees
 * @num1: the angle
 * @num2: dummy variable
 * Return: sin(num1)
 */
double sin_func(double num1, __attribute__((unused)) double num2)
{
	double radians = num1 * (PI / 180);

	return (sin(radians));
}
/**
 * cos_func - this calculates cos(num1)
 * @num1: the angle
 * @num2: dummy variable
 * Return: cos(num1)
 */
double cos_func(double num1, __attribute__((unused)) double num2)
{
	double radians = num1 * (PI / 180);

	return (cos(radians));
}
/**
 * tan_func - calculates tan(num1)
 * @num1: the angle
 * @num2: dummy variable
 * Return: tan(num1)
 */
double tan_func(double num1, double num2)
{
	return (sin_func(num1, num2) / cos_func(num1, num2));
}
