#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
*
* Return: always zero
*/

int main(void)
{
	system("clear");
	double value1, value2, result;
	char operator;

	printf("=================================================\n");
	printf("\n");
	printf("\tWELCOME TO DANNY'S CALCULATOR\n");
	printf("\n");
	printf("===================================================\n");
	while (1)
	{
	printf("\nEnter the value1: ");
	scanf("%lf", &value1);
	printf("operator['+', '-', '*', '/']: ");
	scanf("\n%c", &operator);
	printf("Enter the value2: ");
	scanf("%lf", &value2);
	switch (operator)
	{
	case '+':
	result = value1 + value2;
	printf("%.2lf + %.2lf = %.2lf\n", value1, value2, result);
	break;
	case '-':
	result = value1 - value2;
	printf("%.2lf - %.2lf = %.2lf\n", value1, value2, result);
	break;
	case '*':
	result = value1 * value2;
	printf("%.2lf * %.2lf = %.2lf\n", value1, value2, result);
	break;
	case '/':
	result = value1 / value2;
	printf("%.2lf / %.2lf = %.2lf\n", value1, value2, result);
	break;
	default:
	printf("invalid operator\n");
	}
	}
	return (0);
}
