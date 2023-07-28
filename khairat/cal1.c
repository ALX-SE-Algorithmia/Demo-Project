#include "cal.h"

/**
 * getOperator - gets the operator sign passed by the user.
 * Return: returns the operator sign gotten.
 */

char getOperator(void)
{
	char operator;

	while (1)
	{
		printf("Enter the operator (+, -, *, /): ");
		if (scanf(" %c", &operator) == 1)
		{
			if (operator == '+' || operator == '-' ||
				operator == '*' || operator == '/')
			{
				while
					(getchar() != '\n');
				return (operator);
			}
			else
			{
				printf("Error: Invalid operator. Supported ");
				printf("operators are +, -, *, and /.\n");
				while
					(getchar() != '\n');
			}
		}
		else
		{
			printf("Error: Failed to read input.\n");
			exit(1);
		}
	}
}

/**
 * getNumber - gets the number entered by the user.
 * Return: returns the number gotten.
 */

double getNumber(void)
{
	double number;
	char input[100];
	char *endptr;

	while (1)
	{
		printf("Enter the number: ");
		if (fgets(input, sizeof(input), stdin))
		{
			number = strtod(input, &endptr);
			if (endptr == input || *endptr != '\n')
			{
				printf("Error: Invalid input for the number.\n");
				while
					(getchar() != '\n');
			}
			else
			{
				return (number);
			}
		}
		else
		{
			printf("Error: Failed to read input.\n");
			exit(1);
		}
	}
}
