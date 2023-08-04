#include <stdio.h>
#include "main.h"
#include "errorhandler.h"
/**
 *add - Function to add two numbers
 *
 *@A: first number
 *@B: second number
 *Return: sum
 */
double add(double A, double B)
{

	return (A + B);

}

/**
 *subtract - Function to subtract two numbers
 *
 *@A: first number
 *@B: second number
 *Return: A - B
 */
double subtract(double A, double B)
{

	return (A - B);

}

/**
 *multiply -Function to multiply two number
 *
 *@A:first number
 *@B:second number
 *Return: A * B
 */
double multiply(double A, double B)
{

	return (A * B);

}


/**
 *divide -Function to divide two number
 *
 *@A:first number
 *@B:second number
 *Return: A / B
 */
double divide(double A, double B)
{
	if (B != 0)
		return (A / B);

	divisionByZero();

}
