#include "calc.h"

/**
* main - A program that performs simple arithmetic operations
* Return: 0 (Success), 1 (Failure)
*/

int main(void)
{
	double num1, num2, result;
	char operator;

	printf("Enter a simple arithmetic expression. Example: 23 * 5\n");
	printf("(allowed operators: +, -, *, or /)\n");
	printf(" => ");

	scanf("%lf %c %lf", &num1, &operator, &num2);

	switch (operator)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if (num2 != 0)
			result = num1 / num2;
		else
		{
			printf("Error: Division by zero is not allowed.\n");
			return (1);
		}
		break;
	default:
		printf("Error: Invalid operator '%c'.\n", operator);
		return (1);
	}

	printf("Result: %.2lf\n", result);

	return (0);
}
