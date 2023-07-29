#include <stdio.h>   /* To include standard input and output functions */
#include <stdlib.h>  /* To include standard library functions */
#include "math_functions.h"    /* Include function definition file */
/**
 * performCalculation - Performs arithmetic calculation based on user input
 * @num1: First number
 * @num2: Second number
 * @operator: Arithmetic operator
 *
 * Return: Result of arithmetic calculation
 */
double performCalculation(double num1, double num2, char operator)
{
	double solution = 0.0;

	/* Using a switch statement to perform the arithmetic operations */
	switch (operator)
	{
		case '+':
			solution = add(num1, num2);
			break;
		case '-':
			solution = subtract(num1, num2);
			break;
		case '*':
			solution = mult(num1, num2);
			break;
		case '/':
			solution = divide(num1, num2);
			break;
		default:
			printf("You have entered an invalid operator. Try again.\n");
			exit(EXIT_FAILURE);    /* Program exits on failure. */
	}

	return (solution);
}
