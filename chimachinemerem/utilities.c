#include "calc.h"

/**
 * execute - Executes only the 'clear' command
 * @path: environmental path to clear screen
 */

void execute(char *path)
{
	pid_t pid = fork();
	char *args[] = {"/bin/clear", NULL};

	if (pid < 0)
	{
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execve(path, args, environ);
		perror("exec: error");
		exit(EXIT_FAILURE);
	}
	else
	{
		waitpid(pid, NULL, 0);
	}
}

/**
 * display - Displays specific instructions on howw to use calculator
 */

void display(void)
{
	char *args[] = {"/bin/clear", NULL};
	char *str, *ins, *ex;
	pid_t pid = fork();

	if (pid < 0)
		exit(EXIT_FAILURE);
	else if (pid == 0)
	{
		printf("\n\n");
		printf("\t\t\t\t\t\t\t***WELCOME!!***\n");
		printf("\t\t\t\t\t***PLEASE NOTE THIS CALCULATOR IS STILL***\n");
		printf("\t\t\t\t\t***UNDER CONSTRUCTION, USE WITH CAUTION!!!***\n");
		sleep(5);
		execv("/bin/clear", args);
	}
	else
	{
		waitpid(pid, NULL, 0);
	}
	str = "\t\t\t\t***TYPE 'clear' TO CLEAR CONSOLE OR 'quit' TO EXIT CALCULATOR***\n";
	ins = "\t\t\t\t***PARSE SPACE IN-BETWEEN NUMBERS AND OPERATOR";
	ex = "\t\t\t\tFOR INSTANCE:\n\t\t\t\t\t223 + 221";
	print(str);
	print(ins);
	print(ex);
	sleep(2);
}

/**
 * handler - Handles CTRL + C signal
 * @sig: default signal but won't be used
 */

void handler(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n", 1);
	write(STDOUT_FILENO, PROMPT, 5);
	fflush(stdout);
}

/**
 * removechars - This function removes a char
 * @str: str
 * @c: chars to remove
 */

void removechars(char *str, const char *c)
{
	size_t len = strlen(str), i = 0;
	size_t dst = 0;

	while (i < len)
	{
		if (strchr(c, str[i]) == NULL)
		{
			str[dst++] = str[i];
			if (str[i + 1] == '\t' || str[i + 1] == ' ')
				break;
		}
		i++;
	}

	str[dst] = '\0';
}
/**
 * print - Prints instructions to the console in slow mode
 * @str: string to print
 */

void print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		usleep(99999);
		putchar(str[i]);
		fflush(stdout);
	}
	putchar('\n');
}
