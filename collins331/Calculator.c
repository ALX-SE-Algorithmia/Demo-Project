#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 *main - performs simple arithmetic operation
 *Return: 0(success)
*/
int main(void)
{
	double num1, num2, Result;
	char operator;

	printf("Enter your first number:\n");
	if ((scanf("%lf", &num1) != 1))
	{
		printf("You entered invalid first number !!\n");
		exit(-1);
	}
	printf("Enter your second number:\n");
	if (scanf("%lf", &num2) != 1)
	{
		printf("You entered invalid number above !!\n");
		exit(-1);
	}
	printf("Please enter your arithmetic operator:\n");
	printf("Allowed operators are: (/), (*), (+), (-)\n");
	scanf("%s", &operator);
	switch (operator)
	{
	case '+':
		Result = num1 + num2;
		printf("%.2f\n", Result);
		break;
	case '-':
		Result = num1 - num2;
		printf("%.2f\n", Result);
		break;
	case '*':
		Result = num1 * num2;
		printf("%.2f\n", Result);
		break;
	case '/':
		printf("%.2f\n", Result = num1 / num2);
		break;
	default:
		printf("Arithmetic error, try again\n");
		break;
	}
	return (0);
}
