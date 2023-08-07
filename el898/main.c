#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point.
 * Takes in two operands and perform arithmetic Operation.
 * Operands: a and b
 * Return: 0 if sucessful else return 1.
 */
int main(void);
{
	int num1;
	int num2;
	char operator;
	int result;

	printf("Input first number: ");
	scanf("%d", &num1);
	if (num1 != (int)num1)
	{
		printf("Error: Invalid input, Try again.\n");
		return (1);
	}


	printf("Enter operator (+, -, *, /, %%): ");
	scanf(" %c", &operator);
	
	printf("Input second number: ");
	scanf("%d", &num2);
	if (num1 != (int)num2)
	{
		printf("Error: Invalid input,Try again.\n");
		return (1);
	}

	switch (operator)
	{
		case '+':
			result = addition(num1, num2);
			break;
		case '-':
			result = subtraction(num1, num2);
			break;
		case '*':
			result = multiplication(num1, num2);
			break;
		case '/':
			result = divide(num1, num2);
			break;
		case '%':
			result = modulo(num1, num2);
			return (1);
		default:
			printf("Error: Invalid operator.\n");
			return 1;
	}
	printf("Result: %.2f %c %.2f = %.2f\n", num1, operator, num2, result);
	return (0);
