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
 * main - program entry point
 * Return: 0 on success
 */

int main(void)
{
	int choice;
	double a, b, result;

	printf("Welcome to C Calculator Program by Evance\n");
	printf("============================================");

	while (1)
	{
		print_selection();
		scanf("%d", &choice);

		if (choice >= 1 && choice <= 5)
		{
			printf("Enter first number: ");
			scanf("%lf", &a);
			printf("Enter second number: ");
			scanf("%lf", &b);

			two_operand_calc(a, b, choice);
		}
		else if (choice == 6 || choice == 7)
		{
			special_calc(choice);
		}
		else if (choice > 7 && choice <= 10)
		{
			printf("Enter number: ");
			scanf("%lf", &a);
			single_operand_calc(a, choice);
		}
		else
		{
			printf("Error: Invalid input.\n");
			exit(1);
		}
	}
}
