#include "main.h"    /* The main header file */
#include <math.h>    /* The C standard header file for math operations */
#include <ctype.h>    /* The C standard header file for data types */
#include <stdio.h>    /* To include standard input and output functions */
#include <stdlib.h>  /* To include standard library functions */
#include "math_functions.h"    /* The mathematical function header file */

/**
 * add - Returns the sum of two numbers.
 * @num1: First number.
 * @num2: Second number.
 *
 * Return: The sum of num1 and num2 as a double.
 */
double add(int num1, int num2)
{
	double sum = (double)(num1 + num2);

	return (sum);
}

/**
 * subtract - Returns the difference between two numbers.
 * @num1: First number.
 * @num2: Second number.
 *
 * Return: diff of type double
 */
double subtract(int num1, int num2)
{
	double diff = (double)(num1 - num2);

	return (diff);
}

/**
 * mult - Returns the product of two numbers.
 * @num1: First number.
 * @num2: Second number.
 *
 * Return: product of type double.
 */
double mult(int num1, int num2)
{
	double product = (double)(num1 * num2);

	return (product);
}

/**
 * divide - A function that divides one number by another.
 * @num1: First number, number to be divided.
 * @num2: Second number, the divisor.
 *
 * Return: The quotient of the division of num1 by num2 as a double.
 */
double divide(int num1, int num2)
{
	/* Handling division by zero */
	if (num2 == 0)
	{
		printf("Error: Division by zero is not allowed.\n");
		exit(EXIT_FAILURE);    /* Program exits on division by zero. */
	}

	double div = (double)num1 / (double)num2;

	return (div);
}
