#include "calc.h"

/**
 * sum - adds two numbers
 *
 * @first_number: first number
 * @second_number: second_number
 */

int sum(int first_number, int second_number)
{
	return (first_number + second_number);
}

/**
 * minus - difference between two numbers
 *
 * @first_number: first number
 * @second_number: second_number
 */

int minus(int first_number, int second_number)
{
	return (first_number - second_number);
}

/**
 * multiply - product of two numbers
 *
 * @first_number: first number
 * @second_number: second_number
 */

int multiply(int first_number, int second_number)
{
	return (first_number * second_number);
}

/**
 * divide - division between two numbers
 *
 * @first_number: first number
 * @second_number: second_number
 */

int divide(int first_number, int second_number)
{
	if (second_number == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}

	return (first_number / second_number);
}
