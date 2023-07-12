#include "calc.h"
/**
 * main - description of main function
 * Return: 0 if successful
 */
int main(void)
{
	double num1, num2, result;
	char *operator;

	welcome();
	while (1)
	{
		num1 = validate_numbers("the first operand", NULL);
		operator = validate_operator();
		if (!check_trig(operator))
			num2 = validate_numbers("the second operand", operator);
		else
			num2 = 0;
		result = execute_operation(num1, num2, operator);
		if (strcmp(operator, "root") == 0)
		{
			if (num2 != 2)
				printf("\\%.0f|%.4f = %.4f\n", num2, num1, result);
			else
				printf("\\|%.4f = %.4f\n", num1, result);
		}
		else if (check_trig(operator))
		{
			printf("%s(%.2f) = %.4f\n", operator, num1, result);
		}
		else
			printf("%.4f %s %.4f = %.4f\n", num1, operator, num2, result);
		free(operator);
		printf("\n");
	}
	return (0);
}
