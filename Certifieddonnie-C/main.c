#include "calculator.h"

/**
 * intro - Function that treats the introductory part of the calculator
 *
 * Return: Success.
 */
void intro(void)
{
	char user_name[100];

	printf("Welcome To This Demo Calculator!\n");
	sleep(2);
	printf("Loading Files...\n");
	sleep(5);
	printf("Files Compiled and Ready to Operate!\n");
	sleep(3);
	printf("\nWhat is your Name?\n==> ");
	fgets(user_name, 100, stdin);
	printf("Nice to have you here %s\n", user_name);
}

/**
 * expression - Function that handles the expression arithmetic of the
 * calculator
 *
 * Return Success
 */
void expression(void)
{
	double num1, num2, res;
	char ops;

	printf("Enter your Expression: ");
	scanf("%lf %c %lf", &num1, &ops, &num2);

	switch (ops)
	{
		case '+':
			res = add(num1, num2);
			printf("%lf\n", res);
			break;
		case '-':
			res = subtract(num1, num2);
			printf("%lf\n", res);
			break;
		case '*':
			res = multiply(num1, num2);
			printf("%lf\n", res);
			break;
		case '/':
			res = divide(num1, num2);
			printf("%lf\n", res);
			break;
		default:
			WrongInput();
			break;
	}
}

/**
 * main - Entry point
 * Description: This File is the Calculator main file.
 *
 * Return: Success or Error
 */
int main(void)
{
	double log_number, res;
	char ruler[2];

	intro();
	sleep(2);
	printf("Time to perform some operations\n");
	printf("Rules:\n\t1.) Enter 'e' for arithmetic expression. (e.g 2 + 2)\n");
	printf("\t\tAllowed Operators(+, -, *, /)\n\t");
	printf("2.) Enter 'l' for Logarithm Question\n==> ");
	fgets(ruler, 2, stdin);
	/* ruler = tolower(ruler); */
	while (1)
	{
		/* printf("1"); */
		if (strcmp(ruler, "q") == 0)
		{
			printf("Exiting the calculator program.\n");
			break;
		}
		if (strcmp(ruler, "l") == 0)
		{
			printf("Enter the number: ");
			scanf("%lf", &log_number);
			res = logarithm(log_number);
			if (res != 1)
			{
				printf("%.2lf\n", res);
			}
		}
		if (strcmp(ruler, "e") == 0)
		{
			expression();
		}

		printf("\nEnter Rules: e | l | q ");
		fgets(ruler, 2, stdin);
		/* ruler = tolower(ruler); */
	}
	return (0);
}
