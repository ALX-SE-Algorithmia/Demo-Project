#include "calc.h"

/**
 * two_operand_calc - performs basic calculations on two operands
 * @a: first operand
 * @b: second operand
 * @choice: choice of operation
 * Return: void
 */
void two_operand_calc(double a, double b, int choice)
{
	double result;

	val_input(a, b);
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
 * @a: operand
 * @choice: choice of operation
 * Return: void
 */
void single_operand_calc(double a, int choice)
{
	unsigned long long result;
	double res;

	// val_single_input(a);
	val_input(a, 0);
	switch (choice)
	{
		case 8:
			res = logten(a);
			printf("log\u2081\u2080(%.2lf) = %.2lf\n", a, res);
			break;
		case 9:
			result = factorial(a);
			printf("%.0lf! = %llu\n", a, result);
			break;
		case 10:
			result = fib(a);
			printf("Fibonacci of %.0lf = %llu\n", a, result);
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
	double a, b, result;

	switch (choice)
	{
		case 6:
			printf("Enter \u221Aroot: ");
			scanf("%lf", &a);
			printf("Enter n\u221A: ");
			scanf("%lf", &b);
			val_input(a, b);
			result = root(a, b);
			printf("%.2lf\u221A%.2lf = %.2lf\n", b, a, result);
			break;
		case 7:
			printf("Enter base: ");
			scanf("%lf", &a);
			printf("Enter exponent: ");
			scanf("%lf", &b);
			val_input(a, b);
			result = exponent(a, b);
			printf("%.2lf ^ %.2lf = %.2lf\n", a, b, result);
			break;
	}
}
