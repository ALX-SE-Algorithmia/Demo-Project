#include "calculator.h"
/**
 * get_num - gets numbers from the stdin
 * Return: the gotten number
*/
long double get_num(void)
{
	char *lineptr = NULL, *endptr;
	size_t n = 0;
	ssize_t bytes_read;
	long double ans;

	printf("Enter a number: ");
	while (1)
	{
		bytes_read = getline(&lineptr, &n, stdin);
		if (bytes_read == -1 || lineptr[bytes_read - 1] != '\n')
		{
			free(lineptr);
			putchar('\n');
			exit(1);
		}
		lineptr[bytes_read - 1] = '\0';
		ans = strtold(lineptr, &endptr);
		if (!strcmp(endptr, lineptr) || *endptr != '\0')
		{
			fprintf(stderr, "INVALID NUMBER\n");
			printf("Enter a valid number: ");
			free(lineptr);
			lineptr = NULL;
			continue;
		}
		break;
	}
	free(lineptr);
	return (ans);
}
/**
 * get_op - gets the operation to be performed on the numbers
 * Return: the operation to be performed
*/
foperator_t get_op(void)
{
	char *lineptr = NULL;
	size_t n = 0;
	ssize_t bytes_read;
	int i = 0, found = 0;

	operations_t operators[] = {
		{"+", add}, {"-", sub},{"*", mul},
		{"/", divide}, {"^", power}, {NULL, NULL}
	};
	printf("Enter the operation: ");
	while (1)
	{
		bytes_read = getline(&lineptr, &n, stdin);
		if (bytes_read == -1 || lineptr[bytes_read - 1] != '\n')
		{
			free(lineptr);
			putchar('\n');
			exit(1);
		}
		lineptr[bytes_read - 1] = '\0';
		while (operators[i].f)
		{
			if (!strcmp(operators[i].operation, lineptr))
			{
				found = 1;
				break;
			}
			i++;
		}
		if (found)
			break;
		else
		{
			fprintf(stderr, "INVALID OPERATION\n");
			printf("Enter a valid oparation: ");
			free(lineptr);
			lineptr = NULL;
			i = 0;
		}
	}
	free(lineptr);
	return (operators[i].f);
}
