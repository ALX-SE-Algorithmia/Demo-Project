#include "calc.h"

int main()
{
	double a, b, result;
	char op;

	printf("Enter the first number: ");
	scanf("%lf", &a);
	sleep(2);
	printf("Enter the second number: ");
	scanf("%lf", &b);
	printf("Enter an arithmetic operator (+, -, *, /, ^): ");
	scanf(" %c", &op);

	/*declare function pointer*/
	double (*operation)(double, double);

	switch (op)
	{
		case '+':
			operation = add;
			break;

		case '-':
			operation = sub;
			break;

		case '*':
			operation = mul;
			break;

		case '/':
			operation = div;
			break;

		case '^':
			operation = expo;
			break;

	default:
	printf("Invalid operator \n");
	return (1);
	}

	result = operation(a, b);
	printf("Result: %lf\n",result);
	return (0);



}