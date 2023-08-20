#include "calc.h"

/**
 * main - Main function to parse input
 * Return: 0 (success)
 */

int main(void)
{
	ssize_t read;
	size_t size = 0, count = 0;
	char *buf = NULL, *buf_cpy;

	signal(SIGINT, handler);
	display();
	write(STDOUT_FILENO, PROMPT, 5);
	fflush(stdout);

	while ((read = getline(&buf, &size, stdin)) != -1)
	{

		count++;
		buf_cpy = malloc(strlen(buf) + 1);
		strcpy(buf_cpy, buf);
		removechars(buf_cpy, DEL);
		if (strncmp(buf_cpy, "c", 1) == 0 || strncmp(buf_cpy, "q", 1) == 0)
		{
			check_command(buf_cpy, &count, buf);
		}
		else
		{
			recieve_arg(buf);
		}
		free(buf_cpy);
		buf = NULL;
		if (count >= 15)
			printf("Kindly Clear Your Console\n");

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
 * check_command - This function check if quit or clear was passed as an
 * argument to getline if not it raises an error
 * @buf: argument passed
 * @count: count number of iteraton
 * @buf_cpy: a copy of buffer
 */

void check_command(char *buf_cpy, size_t *count, char *buf)
{
	if (strcmp(buf_cpy, "clear") == 0)
	{
		*count = 0;
		execute("/bin/clear");
	}
	else if (strcmp(buf_cpy, "quit") == 0)
	{
		free(buf);
		free(buf_cpy);
		exit(EXIT_SUCCESS);
	}
	else
		error(buf_cpy, 1);
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
	else if (i == 0)
		return;
	else if (i == 2)
		puts("Synthax Error: Incomplete Argument");
	else if (i > 3)
		puts("Synthax Error: Too Many Argument");
	else
		convert_args(args);
}

/**
 * convert_args - This function converts string to double
 * @args: argument of numbers and operators
 */

void convert_args(char **args)
{
	double num1, num2;
	char *end;

	num1 = strtod(args[0], &end);
	if (*end != '\0')
	{
		error(args[0], 3);
		return;
	}
	if (errno == ERANGE)
	{
		error(args[0], 4);
		return;
	}
	num2 = strtod(args[2], &end);
	if (*end != '\0')
	{
		error(args[2], 3);
		return;
	}
	if (errno == ERANGE)
	{
		error(args[2], 4);
		return;
	}
	calculate(num1, args[1], num2);
}
/**
 * calculate - calculates values passed;
 * @num1: first number
 * @arg: operator passed
 * @num2: second number
 */
void calculate(double num1, char *arg, double num2)
{
	double num;

	switch (*arg)
	{
		case '+':
			num = num1 + num2;
			break;
		case '-':
			num =  num1 - num2;
			break;
		case '*':
			num = num1 * num2;
			break;
		case '/':
			if (num2 == 0)
			{
				puts("Zero division Error");
				return;
			}
			num = num1 / num2;
			break;
		default:
			error(arg, 2);
			return;
	}
	printf("%.2f\n", num);
}
