#include <stdio.h>
#include <unistd.h>
/*
 * The header for sleep() function
 */

/*
 * A simple calculator that performs basic arithmetic operations
 * It takes two standard inputs from the user
 * @num1: first input
 * @num2: second input
 * It takes in an arithmetic operator passed in by the user
 * @+: Addition
 * @-: Subtraction
 * @*: Multiplication
 * @/: Division
 * Return: result, or error if arithmetic operator or number is wrong
 */

int main(void)
{
	double num1, num2, result;
	char operator;

	printf("Welcome! This is a Simple Calculator\n");
	printf("Enter first number: ");
	scanf("%lf", &num1);
	/*
	 * num takes a double-precision floating point number
	 */

	printf("Enter an arithmetic operator (+, -, *, /): ");
	scanf(" %c", &operator);

	printf("Enter second number: ");
	scanf("%lf", &num2);

	switch (operator)
		/*
		 * executes the code blocks for the simple arithmetic ops
		 */
	{
		case '+':
			/*
			 * code for addition
			 */
			result = num1 + num2;
			break;
		case '-':
			/*
			 * code for subtraction
			 */
			result = num1 - num2;
			break;
		case '*':
			/*
			 * code for multiplication
			 */
			result = num1 * num2;
			break;
		case '/':
			/*
			 * code for division
			 */
			if (num2 != 0)
			{
				result = num1 / num2;
			}
			else
			{
				printf("Error: Invalid Arithmetic Operation\n");
				/*
				 * This is an arithmetic error
				 */
				sleep(2);
				/*
				 * causes a 2 second delay before line below is displayed
				 */
				printf("Division by 0 is not allowed\n");
				return (1);
			}
			break;
		default:
			/*
			 * function performed when codeblocks above are not executed
			 */
			printf("Error: Invalid Arithmetic Operator\n");
			return (1);
	}

	printf("Result: %lf\n", result);

	return (0);
}
