#include "calc.h"

/**
 * main - Main function to parse input
 * Return: 0 (success)
 */

int main(void)
{
	ssize_t read;
	size_t size = 0, count = 0;
	char *buf = NULL;

	signal(SIGINT, handler);
	display();
	write(STDOUT_FILENO, PROMPT, 5);
	fflush(stdout);

	while ((read = getline(&buf, &size, stdin)) != EOF)
	{
		count++;
		if (strncmp(buf, "clear", 5) == 0 || strncmp(buf, "quit", 5) == 0)
		{
			count = 0;
			removechars(buf, DEL);
			if (strcmp(buf, "clear") == 0)
			{
				execute("/bin/clear");
			}
			else if (strcmp(buf, "quit") == 0)
			{
				free(buf);
				exit(EXIT_SUCCESS);
			}
				continue;
		}
		else
			calculator(buf);

		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, PROMPT, 5);
		free(buf);
	}
		putchar('\n');
		free(buf);
		return (EXIT_SUCCESS);
}

/**
 * calculator - Function  to calculate numbers
 * @buf: parse numbers and signs
 */

void calculator(char *buf)
{
	char *symbol[MAX];
	double num[MAX];
	int j, i;

	sg_t sym[] = {
        {"+", 3, add},
        {"-", 4, sub},
        {"*", 1, mul},
        {"/", 2, div},
        {"%", 5, mod},
        {NULL, 6, NULL}
    };
}
