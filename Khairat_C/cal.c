#include "cal.h"

/**
 * welcome_prompt - displays the welcome prompt.
 */
void welcome_prompt(void)
{
	printf("WELCOME TO KHAIRAT'S BASIC CALCULATOR!\n\n");
	sleep(1);
	printf("This is a calculator that supports basic operations\n\n ");
	printf("INSTRUCTIONS:\n\n");
	printf("1. Enter valid numbers and operator.\n");
	printf("2. Enter a basic operator using the sign by the side ");
	printf("of the operator.\n\n");
	printf("+ -> Addition.\n");
	printf("- -> Subtraction.\n");
	printf("* -> Multiplication.\n");
	printf("/ -> Division.\n\n");
	printf("NOTE::: When an error meassage is encountered click enter ");
	printf("twice to continue.\n");
	printf("NOTE::: When you enter 0 or 1 to either leave or continue");
	printf(" click enter twice.\n\n");
	printf("LET'S BEGIN!!!\n\n");
}

/**
 * main - the entry point of the calculator
 * Return: returns 0 on success.
 */

int main(void)
{
	char operator;
	double num1, num2, result;
	int continueFlag;

	welcome_prompt();
	do {
		num1 = getNumber();
		operator = getOperator();
		num2 = getNumber();
		if (operator == '/' && num2 == 0)
		{
			printf("\nError: Division by zero is not allowed.");
			printf(" Start all over\n");
			continue;
		}
		result = operation(num1, num2, operator);
		calculation(result);
		continueFlag = display_prompt_again();
	} while
		(continueFlag == 1);
	printf("Thanks for using Khairat's calculator, ");
	printf("goodbye!\n");

	return (0);
}

/**
 * operation - handles the different basic operations.
 * @num1: the first number passed by the user.
 * @num2: the second number passed by the user.
 * @operator: addition, subtraction, multiplication & division.
 * Return: the result obtained from the calculation.
 */

double operation(double num1, double num2, char operator)
{
	double result;

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
			result = num1 / num2;
			break;
		default:
			printf("Error: Invalid operator. Supported ");
			printf("operators are +, -, *, and /.\n");
			result = 0;
	}
	return (result);
}

/**
 * calculation - handles the cool calculating message, when awaiting result.
 * @result: the result that was generated.
 */
void calculation(double result)
{
	int i;

	printf("\nCalculating");

	for (i = 0; i < 4; i++)
	{
		printf(".");
		fflush(stdout);
		sleep(1);
	}

	printf("\n\n");
	printf("Result: %.2f\n\n", result);
}

/**
 * display_prompt_again - displays the prompt again.
 * Return: continueFlag to indicate 1, so prompt can be displayed again.
 */
int display_prompt_again(void)
{
	int continueFlag;
	char input[100];

	do {
		printf("Do you want to continue using the calculator? ");
		printf("(1: Yes, 0: No): ");
		if (fgets(input, sizeof(input), stdin))
		{
			if (sscanf(input, " %d", &continueFlag) == 1)
			{
				while
					(getchar() != '\n');
				if (continueFlag == 0 || continueFlag == 1)
					return (continueFlag);
				printf("Error: Invalid input for the ");
				printf("continuation flag.\n");
			}
			else
			{
				printf("Error: Invalid input for the ");
				printf("continuation flag.\n");
				while
					(getchar() != '\n');
			}
		}
		else
		{
			printf("Error: Failed to read input.\n");
			exit(1);
		}
	} while (1);
}
