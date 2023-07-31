#include "calc.h"
/**
 * execute_operation - executes calc instructions
 * @num1: the first operand
 * @num2: the second operand
 * @operation: the operation
 * Return: an array of calc_op_t structs
 */
double execute_operation(double num1, double num2, char *operation)
{
	calc_op_t calc_operations[] = {{"+", add}, {"-", subtract}, {"*", multiply},
	{"/", divide}, {"root", root}, {"^", power}, {"sin", sin_func},
	{"cos", cos_func}, {"tan", tan_func}, {NULL, NULL}};
	int i = 0;

	for (i = 0; calc_operations[i].op_str != NULL; i++)
	{
		if (strcmp(operation, calc_operations[i].op_str) == 0)
			return (calc_operations[i].op_function(num1, num2));
	}
	fprintf(stderr, "An unexpected error occured\n");
	print_thank_you(0);
	exit(1);
}
/**
 * validate_numbers - validates number input of the user
 * @num_str: operand_name to include in the prompt
 * @op_str: operator string
 * Return: the validated number
 */
double validate_numbers(char *num_str, char *op_str)
{
	char number_string[33], *endptr, *fgets_check;
	int valid = 0;
	double num;

	while (!valid)
	{
		printf("Enter the value of %s: ", num_str);
		fgets_check = fgets(number_string, 33, stdin);
		if (fgets_check == NULL)
		{
			print_thank_you(1);
			if (op_str)
				free(op_str);
			exit(0);
		}
		number_string[strlen(number_string) - 1] = '\0';
		if (strcmp(number_string, "off") == 0)
		{
			if (op_str)
				free(op_str);
			print_thank_you(0);
			exit(0);
		}
		strip(number_string);
		num = strtod(number_string, &endptr);
		if (endptr == number_string)
			again_message();
		else
			valid = 1;
	}
	return (num);
}
/**
 * validate_operator - validates operators entered by the user
 * Return: a string of the operator
 */
char *validate_operator(void)
{
	char *operator_string = NULL, *fgets_check, *operators[] = {"+", "-",
	"*", "/", "root", "^", "sin", "cos", "tan", NULL};
	int i = 0;

	operator_string = malloc(32);
	if (operator_string == NULL)
	{
		fprintf(stderr, "An unexpected error occured\n");
		print_thank_you(0);
		exit(1);
	}
	while (1)
	{
		printf("Enter the operator: ");
		fgets_check = fgets(operator_string, 32, stdin);
		if (fgets_check == NULL)
		{
			print_thank_you(1);
			free(operator_string);
			exit(0);
		}
		operator_string[strlen(operator_string) - 1] = '\0';
		strip(operator_string);
		if (strcmp(operator_string, "off") == 0)
		{
			print_thank_you(0);
			free(operator_string);
			exit(0);
		}
		for (i = 0; operators[i] != NULL; i++)
		{
			if (strcmp(operator_string, operators[i]) == 0)
				return (operator_string);
		}
		again_message();
		usleep(320000);
		printf("Valid operators are: +, -, *, /, root, ^, sin, cos, tan\n");
		usleep(500000);
	}
	return (operator_string);
}
/**
 * strip - strips a string of whitespace
 * @string: the string to be stripped
 */
void strip(char *string)
{
	int start = 0, end = strlen(string) - 1, i, j = 0;

	while (isspace(string[start]))
		start++;
	while (end >= 0 && isspace(string[end]))
		end--;
	for (i = start; i <= end; i++)
	{
		string[j] = string[i];
		j++;
	}
	string[j] = '\0';
}
/**
 * check_trig - checks if an operator is trig
 * @operator: the operator
 * Return: 1 if trig else 0
 */
int check_trig(char *operator)
{
	if (strcmp(operator, "sin") == 0 || strcmp(operator, "cos") == 0 ||
	strcmp(operator, "tan") == 0)
		return (1);
	return (0);
}
