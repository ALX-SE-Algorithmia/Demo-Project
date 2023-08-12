#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */


int main(void)
{
	char operator;
	float a;
	float b;
	float result;


	printf("\nEnter an operator(-, +, *, /): ");
        scanf("%c", &operator);

	printf("\nEnter number1: ");
	scanf("%f", &a);

	printf("\nEnter number2: ");
	scanf("%f", &b);



	switch(operator)
	{
		case '+':
			result = a + b;
			printf("\nresult is: %.2f\n", result);
			break;

		case '-':
                        result = a - b;
                        printf("\nresult is: %.2f\n", result);
                        break;

		case '*':
                        result = a * b;
                        printf("\nresult is: %.2f\n", result);
                        break;

		case '/':
			if (b != 0)
			{
				result = a / b;
                                printf("\nresult is: %.2f\n", result);
			}
			else
			{
				printf("\nnumber cannot be divided by zero\n");
			}
                        break;

		default:
			printf("%c is not valid\n", operator);
	}
	return (0);
}
