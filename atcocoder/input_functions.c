#include "calc.h"
#include "math_functions.h"
#include <stdio.h>
#include "input_functions.h"


/**
 * input_number - Takes number and validate it
 *
 * @number: The printed number name.
 *
 * Return: The number inputted by the user.
 */
int input_number(char *number)
{
	int input;
	printf("\nEnter %s: ", number);
	while (scanf("%d", &input) != 1)
	{
		clear_input_buffer();
		printf("Please enter a valid number: ");
	}
	clear_input_buffer();
	return (input);
}

/**
 * not_valid_operator - Validates that the operator enter is valid
 *
 * @operator: operator entered by the user
 *
 * Return: 0 if correct operator is entered, otherwise 1.
 */
int not_valid_operator(char operator)
{
	char valid_operators[] = {'-', '+', '*', '/'};
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (operator == valid_operators[idx])
		{
			return (0);
		}
	}
	return (1);
}

/**
 * clear_input_buffer - Clears the input buffer
 *
 * Return: Nothing.
 */
void clear_input_buffer(void)
{
	char c;

	while ((c = getchar()) != '\n' && c != EOF);
}
