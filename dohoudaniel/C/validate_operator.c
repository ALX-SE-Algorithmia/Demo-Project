#include "main.h"    /* Include header file */
#include <stdio.h>    /* To include standard input and output functions */
#include <stdbool.h>    /* To work with Boolean values */
#include <string.h>    /* To work with characters and strings */

/**
 * isValidOperator: Checks if a character is a valid arithmetic operator.
 * @operator: Arithmetic operator from standard input
 *
 * Return: True if entered operator is valid. Else, false
 */
bool isValidOperator(char operator)
{
	/* Returns true if user input is among defined operators. */
	return (operator == '+' || operator == '-' || operator == '*'
			|| operator == '/');
}
