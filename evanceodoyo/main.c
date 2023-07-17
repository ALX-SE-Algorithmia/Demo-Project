#include "calc.h"

/**
 * print_selection - print choices
 * Return: void
 */
void print_selection(void)
{
	printf("\nPlease choose an operation:\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Modulo\n");
	printf("6. Nth Root\n");
	printf("7. Exponentiation\n");
	printf("8. log\u2081\u2080\n");
	printf("9. Factorial\n");
	printf("10. Fibonacci\n");
	printf("Enter your choice (Ctrl+C to quit): ");
}

/**
 * valid_input - validates user input.
 * @str: str to validate.
 * Return: true if str is double otherwise false.
 */

double valid_input(const char *str)
{
	char *endptr;

	strtod(str, &endptr);
	if (*endptr != '\0')
	{
		printf("Error: Input must be a double or an integer.\n");
		exit(EXIT_FAILURE);
	}
	return (strtod(str, NULL));
}

/**
 * main - program entry point
 * Return: 0 on success
 */

int main(void)
{
	int choice;
	char a[100];
	char b[100];
	double result;

	printf("Welcome to C Calculator Program by Evance\n");
	printf("============================================");

	while (1)
	{
		print_selection();
		scanf("%d", &choice);

		if (choice >= 1 && choice <= 5)
		{
			printf("Enter first number: ");
			scanf("%s", a);
			printf("Enter second number: ");
			scanf("%s", b);

			two_operand_calc(a, b, choice);
		}
		else if (choice == 6 || choice == 7)
		{
			special_calc(choice);
		}
		else if (choice > 7 && choice <= 10)
		{
			printf("Enter number: ");
			scanf("%s", a);
			single_operand_calc(a, choice);
		}
		else
		{
			printf("Error: Invalid input.\n");
			exit(EXIT_FAILURE);
		}
	}
}
