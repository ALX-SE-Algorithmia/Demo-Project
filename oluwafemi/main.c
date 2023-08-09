#include "calc.h"

/**
 * main - Start point of demo calculator
 *
 * Return: 0 on exit
 */
int main(void)
{
	int err;
	double A, B;
	char op;

	printf("DEMO C CALCULATOR\n\n\tUsage: $ 2 * 2, $ 100 / 10\n\n");
	printf("\tEnter any single letter i.e $ q to quit\n\n\t**Calculator**\n");

	while(1)
	{
		printf("\t$ ");
		err = scanf("%lf %c %lf", &A, &op, &B);
		if (err <= 0)
		{
			printf("Exiting....\n");
			return(0);
		}
		switch (op)
		{
			case '+':
				addition(A, B);
				break;
			case '-':
				subtraction(A, B);
				break;
			case '*':
				multiplication(A, B);
				break;
			case '/':
				division(A, B);
				break;
			default:
				printf("\tPlease enter a valid operation\n");
		}
	}
	return (0);
}

/*Operation funtions*/

void addition(double a, double b)
{
	printf("\t= %.2lf\n", (a + b));
}

void subtraction(double a, double b)
{
	printf("\t= %.2lf\n", (a - b));
}

void multiplication(double a, double b)
{
	printf("\t= %.2lf\n", (a * b));
}

void division(double a, double b)
{
	if (b == 0.0)
		printf("\tCan't divide by zero(0)\n");
	else
		printf("\t= %.2lf\n", (a / b));
}
