#include "calc.h"

/**
 * two_operand_calc - performs basic calculations on two operands
 * @n: first operand
 * @m: second operand
 * @choice: choice of operation
 * Return: void
 */
void two_operand_calc(char *n, char *m, int choice)
{
	double a = valid_input(n);
	double b = valid_input(m);
	double result;

	switch (choice)
	{
		case 1:
			result = add(a, b);
			printf("%.2lf + %.2lf = %.2lf\n", a, b, result);
			break;
		case 2:
			result = sub(a, b);
			printf("%.2lf - %.2lf = %.2lf\n", a, b, result);
			break;
		case 3:
			result = mul(a, b);
			printf("%.2lf * %.2lf = %.2lf\n", a, b, result);
			break;
		case 4:
			result = division(a, b);
			printf("%.2lf / %.2lf = %.2lf\n", a, b, result);
			break;
		case 5:
			result = mod(a, b);
			printf("%.0lf %% %.0lf = %0.lf\n", a, b, result);
			break;
		default:
			break;
	}
}

/**
 * single_operand_calc - performs basic calculations on one operand
 * @n: operand
 * @choice: choice of operation
 * Return: void
 */
void single_operand_calc(char *n, int choice)
{
	double a = valid_input(n);
	unsigned long long l_result;
	double result;

	switch (choice)
	{
		case 8:
			result = logten(a);
			printf("log\u2081\u2080(%.2lf) = %.2lf\n", a, result);
			break;
		case 9:
			l_result = factorial((int)(a));
			printf("%.0lf! = %llu\n", a, l_result);
			break;
		case 10:
			l_result = fib((int)(a));
			printf("Fibonacci of %.0lf = %llu\n", a, l_result);
			break;
	}
}

/**
 * special_calc - performs special calculations
 * @choice: choice of operation
 * Return: void
 */
void special_calc(int choice)
{
	char n[100];
	char m[100];
	double a, b, result;

	switch (choice)
	{
		case 6:
			printf("Enter \u221Aroot: ");
			scanf("%s", n);
			printf("Enter n\u221A: ");
			scanf("%s", m);

			a = valid_input(n);
			b = valid_input(m);
			result = root(a, b);

			printf("%.2lf\u221A%.2lf = %.2lf\n", b, a, result);
			break;
		case 7:
			printf("Enter base: ");
			scanf("%s", n);
			printf("Enter exponent: ");
			scanf("%s", m);

			a = valid_input(n);
			b = valid_input(m);
			result = exponent(a, b);

			printf("%.2lf ^ %.2lf = %.2lf\n", a, b, result);
			break;
	}
}
