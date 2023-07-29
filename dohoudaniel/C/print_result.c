#include "main.h"    /* Header file containing all functions */
#include <stdio.h>    /* o include standard input and output operations */
#include <stdlib.h>  /* To include standard library functions */
#include <string.h>    /* For string functions like strlen */
#include <unistd.h>    /* For the sleep() function */

/**
 * print - Prints the result of the arithmetic operation.
 * @result: The result of the arithmetic operation.
 *
 * Return: The result of the performed arithmetic operation
 */
double print(double result)
{
	sleep(1.25);
	printf("Performing operation...\n");
	sleep(4);
	printf("The result of your arithmetic operation is %.2lf.\n\n", result);
	sleep(2);

	return (0);
}
