#include "main.h"
#include <string.h>    /* To handle string operations */
#include <stdio.h>    /* Ti handle standard input and output */
#include <unistd.h>  /* For the sleep function */
#include <stdlib.h>  /* To include standard library functions */

/**
 * printIntroMessage - Prints the welcome message.
 *
 * Return: Print message to standard output.
 */
void printIntroMessage(void)
{
	printf("Thank you for using this basic calculator.\n");
	sleep(2);
	printf("This calculator takes in two numbers and your arithmetic operator.\n\n");
	sleep(2);
	printf("The arithmetic operators are:\n");
	sleep(2);
	printf("Addition: +\n");
	sleep(1.5);
	printf("Subtraction: -\n");
	sleep(1.5);
	printf("Multiplication: *\n");
	sleep(1.5);
	printf("Division: /\n");
	sleep(2);
	printf("\nRemember to enter valid numbers and an arithmetic operator as listed...\n\n");
	sleep(1.5);
	printf(".");
	sleep(1.5);
	printf(".");
	sleep(1.5);
	printf(".");
	sleep(1.5);
	printf(".");
	sleep(1.5);
	printf(".\n\n");
	sleep(1.5);
}
