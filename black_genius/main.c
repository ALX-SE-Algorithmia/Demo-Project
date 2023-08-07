#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - program entry point
 * Return: Always return 0
 */
int main(void)
{
	char *option = NULL;
	ssize_t n;
	char *first_number = NULL, *second_number = NULL;
	int first_operand, second_operand, is_valid = 1;
	void (*calc) (int, int);

	do {
		do {
			printf("Enter first number: ");
			getline(&first_number, &n, stdin);
			first_operand = validate(first_number, &is_valid);
		} while (!is_valid);

		do {
			calc = get_calc("Choose an operator [+*-/]: ");
		} while (!calc);

		do {
			printf("Enter second number: ");
			getline(&second_number, &n, stdin);
			first_operand = validate(first_number, &is_valid);
			second_operand = validate(second_number, &is_valid);
		} while (!is_valid);

		calc(first_operand, second_operand);

		printf("Do another calculation? [y/n]: ");
		getline(&option, &n, stdin);
	} while (strcmp(option, "y\n") == 0);

	return (0);
}

/**
 * addition - add two numbers
 * @first_operand: the first number
 * @second_operand: the second number
 */
void addition(int first_operand, int second_operand)
{
	printf("= %d\n", first_operand + second_operand);
}

/**
 * multiply - add two numbers
 * @first_operand: the first number
 * @second_operand: the second number
 */
void multiply(int first_operand, int second_operand)
{
	printf("= %d\n", first_operand * second_operand);
}

/**
 * divide - add two numbers
 * @first_operand: the first number
 * @second_operand: the second number
 */
void divide(int first_operand, int second_operand)
{
	if (second_operand == 0)
	{
		printf("You can't divide by 0. Please try again!\n");
		return;
	}
	printf("= %d\n", first_operand / second_operand);
}

/**
 * subtract - add two numbers
 * @first_operand: the first number
 * @second_operand: the second number
 */
void subtract(int first_operand, int second_operand)
{
	printf("= %d\n", first_operand - second_operand);
}

/**
 * get_calc - get a function to perform a calculation
 * @prompt: The prompt to be displayed
 * Return: a pointer to a fucntion to perform a calculation
 */
void (*get_calc(char *prompt))(int, int)
{
	char *op = NULL;
	int i = 0;
	ssize_t n;
	operation_t operation[] = {
		{'*', multiply},
		{'+', addition},
		{'/', divide},
		{'-', subtract},
	};

	printf(prompt);
	getline(&op, &n, stdin);

	while (i < 4)
	{
		if (op[0] == operation[i].op)
			return (operation[i].function);
		i++;
	}

	printf("You entered an invalid operator. Please try again!\n");
	return (NULL);
}

/**
 * validate - check if input is a valid number
 * @input: the input to check
 * @is_valid: is 1 if input is valid else 0
 * Return: a number
 */
int validate(char *input, int *is_valid)
{
	int number;
	char *number_s = strtok(input, "\n");

	if (number_s == NULL)
	{
		printf("You have to enter a valid number. Please try again!\n");
		*is_valid = 0;
		return (0);
		
	}

       	number = atoi(number_s);

	if (number == 0)
	{
		while (*input)
		{
			if (*input != '0')
			{
				printf("You have to enter a valid number. Please try again!\n");
				*is_valid = 0;
				return (0);
			}
			input++;
		}
	}

	*is_valid = 1;
	return (number);
}
