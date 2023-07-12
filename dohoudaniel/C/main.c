#include "main.h"    /* Include the main header file */
#include <stdio.h>   /* To include standard input and output operations */
#include <unistd.h>  /* For the sleep function */
#include <stdbool.h> /* For Booleans */
#include <stdlib.h>  /* To include standard library functions */
#include <string.h>  /* For string functions like strlen */

/**
 * main - Entry point. This runs the calculator.
 *
 * Return: 0 is operation is successful. Else, 1.
 */
int main(void)
{
	/* Declare all variables */
	int num1, num2;
	char operator;
	double result;
	const int maxLength = 25;
	char username[maxLength];

	/* Storing usernames entered in by the user */
	printf("\n\nWelcome!.\n");
	sleep(2.5);
	storeUsername(username, maxLength);
	printf("\nHello, %s!\n", username);
	sleep(1.5);

	/* Print intro message */
	printIntroMessage();

	/* Storing as input, first number from the user */
	printf("Enter your first number: ");
	/* Checking if the first number is invalid. */
	if (scanf("%d", &num1) != 1)
	{
		printf("Error: First number invalid! Please enter a valid number.\n");
		exit(EXIT_FAILURE);    /* Program exits if user's operator is invalid */
	}

	/* Storing as input, second number from the user */
	printf("Enter your second number: ");
	/* Checking if the second number is invalid. */
	if (scanf("%d", &num2) != 1)
	{
		printf("Error: Second number invalid! Please enter a valid number.\n");
		exit(EXIT_FAILURE);    /* Program exits if user's operator is invalid */
	}


	/* Storing the arithmetic operator of the user */
	getchar();  /* Clear input buffer */
	printf("Enter your arithmetic operator: ");
	scanf("%c", &operator);

	/* Validating user's arithmetic oprator */
	if (!isValidOperator(operator))
	{
		printf("Error: Invalid operator! Please enter a valid arithmetic operator.\n");
		exit(EXIT_FAILURE);    /* Program exits if user's operator is invalid */
	}

	/* Performing calculations.... */
	result = performCalculation(num1, num2, operator);
	print(result);
	sleep(4.5);

	/* End of calculator */
	exitMessage();
	printf("Goodbye, %s!\n", username);
	sleep(2);

	return (0);
}
