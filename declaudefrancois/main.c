#include "calculator.h"


/**
 * main - Main entry point of the calculator program.
 * @ac: The number of arguments passed to the program.
 * @av: A pointer to arguments passed to the program as
 *       char pointers.
 *
 * Return: 0 on success or 1 on failure.
 */
int main(int ac, char **av)
{
	char *input;
	char *op;

	printf("================ STACK-CALCULUS PROGRAM (SCP) ");
	printf("================\n");
	printf("1- ENTER THE OPERATION TO PERFORM\n");
	printf("2- PRESS ENTER TO SEE THE RESULT OF YOUR OPERATION");
	printf("IF THE OPERATION IS VALID\n");
	printf("2- ENTER 'QUIT' or PRESS CTRL+D or CTRL+C to exit\n\n");
	input = malloc(sizeof(char) * 100);
	if (input == NULL)
		return (0);

	do {
		printf("(SCP): ");
		if (fgets(input, 50, stdin) == NULL)
			break;
		op = strtok(input, "\n");

		if (strcmp(op, "QUIT") == 0)
			break;

		printf("(SCP): %d\n", calculate(op));
	} while (input != NULL);

	free(input);

	return (0);
}
