#include "calc.h"
/**
 * main: the main driver function for the implementation
 * of the basic calculator
 * @argc: argument count passed to program
 * @argv: pointer to commandline arguments passed
 *
 * Return: 0 (sucess) or any number otherwise
 */
int main(int argc, char **argv)
{
	int first, second, result;
	char operator;

	if (argc != 4)
	{
		printf("Usage: <prg_name><first_num><operator><last_num>\n");
		return (1);
	}
	
	first = atoi(argv[1]);
	second = atoi(argv[3]);
	operator = argv[2][0];

	switch(operator)
	{
		case '+':
			result = addition(first, second);
			break;
		case '-':
			result = subtraction(first, second);
			break;
		case '*':
			result = multiplication(first, second);
			break;
		case '/':
			result = division(first, second);
			break;
		default:
			printf("Error: Invalid operator.\n");
			return (2);
	}

	printf("Result: %d\n", result);

	return (0);
}
