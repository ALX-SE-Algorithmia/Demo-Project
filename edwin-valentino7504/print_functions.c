#include "calc.h"
/**
 * print_thank_you - prints a thank you message
 * @new_line: determines if a new line should be printed
 */
void print_thank_you(int new_line)
{
	if (new_line)
		printf("\n");
	printf("\nThank you for using Edwin's calculator\n");
	printf("Goodbye!\n");
}
/**
 * again_message - asks the user to enter the input again
 */
void again_message(void)
{
	printf("Invalid input. Please try again.\n");
}
/**
 * welcome - welcomes the user to the calculator
 */
void welcome(void)
{
	char *name = malloc(60), *fgets_check;

	if (name == NULL)
	{
		fprintf(stderr, "An unexpected error occured\n");
		print_thank_you(0);
		exit(1);
	}
	printf("\n  C A L C U L A T O R  \n_______________________\n\n");
	printf("Welcome to Edwin's calculator!\nWhat's your name: ");
	fgets_check = fgets(name, 59, stdin);
	if (fgets_check == NULL)
	{
		free(name);
		print_thank_you(1);
		exit(0);
	}
	name[strlen(name) - 1] = '\0';
	strip(name);
	if (strcmp(name, "off") == 0)
	{
		free(name);
		print_thank_you(0);
		exit(0);
	}
	if (name[0] >= 97 && name[0] <= 122)
		name[0] -= 32;
	usleep(200000);
	printf("\nHi, %s!\n\n", name);
	free(name);
	printf("These are the valid operators:\n");
	print_sleep("+ - adds first and second operand");
	print_sleep("- - subtracts second from first operand");
	print_sleep("* - multiplies first operand by second operand");
	print_sleep("/ - divides first operand by second operand");
	print_sleep("^ - raises first operand to power of second operand");
	print_sleep("root - takes second operand'th root of first operand");
	print_sleep("sin, cos & tan - takes sin, cos and tan of angle (degrees)");
	print_sleep("\nEnter \"off\" or press Ctrl + D at any time to exit\n");
}
/**
 * print_sleep - sleeps for 1.5s and prints
 * @message: the message
 */
void print_sleep(char *message)
{
	usleep(1500000);
	printf("%s\n", message);
}
