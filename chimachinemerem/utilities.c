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
	char *str, *ins;
	pid_t pid = fork();

	if (pid < 0)
		exit(EXIT_FAILURE);
	else if (pid == 0)
	{
		printf("\n\n");
		printf("\t\t\t\t\t\t***WELCOME!!***\n");
		printf("\t\t\t\t***PLEASE NOTE THIS CALCULATOR IS STILL***\t\n");
		printf("\t\t\t\t***UNDER CONSTRUCTION, USE WITH CAUTION!!!***\t\n");
		sleep(5);
		execv("/bin/clear", args);
	}
	else
	{
		waitpid(pid, NULL, 0);
	}
	str = "\t\t\t\t***TYPE 'clear' TO CLEAR CONSOLE OR \
'quit' TO EXIT CALCULATOR***\n";
	ins = "\t\t\t\t***REMEMBER TO PARSE SPACE IN-BETWEEN NUMBERS AND SIGNS\n\
\t\t\t\tFOR INSTANCE:\n\t\t\t\t\t223 + 221 * 23";
	print(str);
	print(ins);
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

void removechars(char *str, char *c)
{
	int len = strlen(str), len1 = strlen(c);
	int i, j = 0, l, remove;

	for (i = 0; i < len; i++)
	{
		remove = 0;
		for (l = 0; l < len1; l++)
		{
			if (str[i] == c[l])
			{
				remove = 1;
				break;
			}
		}
		if (!remove)
		{
			str[i] = str[j];
			j++;
		}
	}
		str[j] = '\0';
}
/**
 * print - Prints instructions to the console in slow mode
 * @str: string to print
 */

void print(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		usleep(99999);
		putchar(str[i]);
		fflush(stdout);
	}
		putchar('\n');
}
