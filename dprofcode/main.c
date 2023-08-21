#include "calc.h"

/**
 * main - program start point
 *
 * Return: 0;
 */

int main()
{
	int first_number, second_number, result;
	char operator[2];

	setbuf(stdout, NULL);

	printf("======================Calculator======================\n");

	printf("This calculator can carry out the following functionalities: \nAddition\nSubtraction\nMultiplication\nDivision\n");

	printf("Enter the numbers and operators below\n");

	while (true)
	{
		printf("Enter the first number: ");
		scanf("%d", &first_number);

		if (first_number != 0)
		{
			break;
		}

		printf("Please enter a valid number.\n");
	}

	while (true)
	{
		printf("Enter the second number: ");
		scanf("%d", &second_number);

		if (second_number != 0)
		{
			break;
		}

		printf("Please enter a valid number.\n");
	}

	while (true)
	{
		printf("Enter the operator: ");
		scanf("%1s", &operator);

		if (handle_calc)
		{
			break;
		}

		printf("Please enter a valid operator.\n");
	}

	result = handle_calc(first_number, second_number, operator);

	printf("Result: %d", result);
	return (0);
}