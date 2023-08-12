#include <stdio.h>
/**
 * main - A function to perform basic arithmetic
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	double num1, num2, result;
	char operator;

	printf("Enter the first number: ");
	scanf("%lf", &num1);

	printf("Enter the second number: ");
	scanf("%lf", &num2);

	printf("Enter the arithmetic operator (+, -, *, /): ");
	scanf(" %c", &operator);

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
			{
				result = num1 / num2;
			}
			else
			{
				printf("Error: Division by zero is not allowed.\n");
				return (1);
			}
			break;
		default:
			printf("Error: Invalid arithmetic operator.\n");
			return (1);
	}

	printf("Result: %lf\n", result);
	return (0);
}
