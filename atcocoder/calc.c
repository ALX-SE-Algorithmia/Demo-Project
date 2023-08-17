#include <stdio.h>
#include "calc.h"
#include "input_functions.h"
#include <stdlib.h>
#include "math_functions.h"
#include "display.h"
#include <unistd.h>

/**
 * calculator - Takes the input from the user and do the calculations.
 *
 * Return: 1 to quit calculation, or 0 to continue
 */
int calculator(void)
{
	int first_number, second_number;
	char operator;

	first_number = input_number("first number");

	printf("\nEnter one of the following operators, +, -, *, or /: ");
	scanf("%c", &operator);
	clear_input_buffer();
	while (not_valid_operator(operator))
	{
		printf("\nInvalid operator!!\n");
		printf("Enter one of the following operators below, or q to quit:\n+, -, *, or /: ");
		scanf("%c", &operator);
		clear_input_buffer();
		if (operator == 'q')
		{
			return (1);
		}
	}

	second_number = input_number("second number");
	calculate(first_number, second_number, operator);
	return (0);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int quit;
	read_message("welcome_message.txt");
	while (perform_calculation())
	{
		sleep(0.5);
		system("clear");
		quit = calculator();
		if (quit)
			break;
	}

	read_message("bye.txt");

	return (0);
}

/**
 * perform_calculation - Allows the user to decide whether to calculate
 * or quit
 *
 * Return: 1 if user intends to calculate, otherwise 0.
 */
int perform_calculation(void)
{
	char key;

	printf("Enter q to quit or any other key to perform calculation: ");
	scanf("%c", &key);
	clear_input_buffer();
	if (key == 'q')
	{
		return (0);
	}
	return (1);
}

/**
 * calculate - Performs the calculation
 *
 * @first: First number
 * @second: Second number
 *
 * Return: Nothing.
 */
void calculate(int first, int second, char operator)
{
	int result;
	switch (operator)
	{
		case '+':
			result = add(first, second);
			break;
		case '-':
			result = sub(first, second);
			break;
		case '*':
			result = mul(first, second);
			break;
		case '/':
			if (second == 0)
			{
				printf("Error: You cannot divide by zero\n");
				exit(EXIT_FAILURE);
			}
			result = divide(first, second);
			break;
		default:
			;
	}

	refresh();
	print_result(first, second, operator, result);
}
