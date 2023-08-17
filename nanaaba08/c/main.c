#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
  * main - Entry point
  * Return: 0 success else 1
  */

int main(void)
{
	char operator;
	double num1, num2, result;

	printf("Enter an operator (+, -, *, /): ");
	scanf("%c", &operator);

	printf("Enter two numbers: ");
	scanf("%lf %lf", &num1, &num2);

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
			if (num2 == 0)
			{
				printf("Error: Cannot divide by zero\n");
				return (1);
			}
			result = num1 / num2;
			break;
		default:
			printf("Invalid operator: %c\n", operator);
			return (1);
	}
	printf("Result: %.2lf\n", result);

	return (0);
}
