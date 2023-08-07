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
		if (strncmp(buf, "c", 1) == 0 || strncmp(buf, "q", 1) == 0)
		{
			removechars(buf, DEL);
			if (strcmp(buf, "clear") == 0)
			{
				count = 0;
				execute("/bin/clear");
			}
			else if (strcmp(buf, "quit") == 0)
			{
				free(buf);
				exit(EXIT_SUCCESS);
			}
			else
				error(buf, 1);
		}
		else
		{
			removechars(buf, "\t\n");
			if (strlen(buf) != 0)
				recieve_arg(buf);
		}
		buf = NULL;
		if (isatty(STDIN_FILENO))
                {
                        write(STDOUT_FILENO, PROMPT, 5);
                        fflush(stdout);
                }

	}
		if (SIGTERM)
			putchar('\n');
		free(buf);
		return (EXIT_SUCCESS);
}

/**
 * recieve_arg - This function stores retrives args from the console
 * @buf: inputs from console
 */

void recieve_arg(char *buf)
{
	char *args[MAX];
	char *token, *end;
	int i = 0;
	long int value;

	token = strtok(buf, DEL);
	while (token != NULL)
	{
		args[i] = token;
		i++;
		token = strtok(NULL, DEL);
	}
	if (i == 1)
	{
		value = strtol(args[0], &end, 10);
		if (*end == '\0')
			printf("%ld\n", value);
		else
			error(args[0], 3);
		return;
	}
	else if (i % 2 == 0)
		puts("Synthax error: incomplete argument");
	else
		sort_args(args);
}

/**
 * sort_args - This function sorts args and store in a struct
 * @args: argument of numbers and operators
 */

void sort_args(char **args)
{
	input_t digit_sym[MAX];
	input_t temp;
	float numb, first_num;
	char *end;
	int j, i, t, s = 0;

	sg_t sym[] = {
	{"+", 3, add},
	{"-", 4, sub},
	{"*", 1, mul},
	{"/", 2, divs},
	{NULL, 6, NULL}
	};

	for (i= 0; args[i] != NULL; i++)
	{
		if (i % 2 == 0)
		{
			numb = strtof(args[i], &end);
			if (*end == '\0')
			{
				if (i == 0)
					first_num = numb;
				else
				{
					digit_sym[s].num = numb;
					s++;
				}
			}
			else
			{
				j = operation(sym, args[i], 0);
				if (j == 0)
					error(args[i], 4);
				else
					error(args[i], 3);
				return;
			}
		}
		else
		{
			j = operation(sym, args[i], 1);
			if (j == 0)
			{
				digit_sym[s].sym = args[i];
				continue;
			}
			else if (j == 2)
				error(args[i], 5);
			else
				error(args[i], 2);
			return;
		}
	}

	t = s + 1;
	for (i = 0; i < t - 1; i++)
	{
		s = 0;
		for (j = 0; j < t - i - 1; j++)
		{
		if (digit_sym[i].num > digit_sym[i + 1].num)
		{
			s = 1;
			temp = digit_sym[i];
			digit_sym[i] = digit_sym[i + 1];
			digit_sym[i + 1] = temp;
		}
		}
		if (s == 0)
			break;
	}
	calculate_input(first_num, digit_sym, sym, t);
}

/**
 * error - This function displays error message
 * @var: variable
 * @error_no: Error number
 */

void error(char *var, int error_no)
{
	switch(error_no)
	{
		case 1:
			fprintf(stderr,"unrecognised command %s\n", var);
			break;
		case 2:
			fprintf(stderr,"unrecognised operator %s\n", var);
			break;
		case 3:
			fprintf(stderr,"unrecognised number %s\n", var);
			break;
		case 4:
			puts("missing number");
			break;
		case 5:
			puts("missing operation");
			break;
	}
}

/**
 * check_op - This functions checks for operation
 * @sym: array contain operation
 * Return: 0 success
 */

int operation(sg_t *sym, char *arg, int flag)
{
	long int i;
	char *end;

	for (i = 0; sym[i].s != NULL; i++)
	{
		if (sym[i].s == arg)
			return (0);
	}
	if (flag == 1)
	{
		i = strtol(arg, &end, 10);
		if (*end == '\0')
			return (2);
	}
		return (1);
}
