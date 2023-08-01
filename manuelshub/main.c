#include "calc.h"

int main()
{
	double num1, num2, result;
	char operator;

	sleep(1.5);	
	printf("\tHi there!!\n");
	sleep(2.75);
	printf("\tYou're most Welcome to use our CALCULATOR!!\n");
	sleep(2.75);
	printf("\nPERMITTED OPERATORS:\n");
	sleep(2.5);
	printf("For Addition (+)\n");
	sleep(2);
	printf("For Subtraction (-)\n");
	sleep(2);
	printf("For Multiplication (*)\n");
	sleep(2);
	printf("For Division (/)\n");
	sleep(2);
	printf("\nEnter The first number-->> ");
	scanf("%2lf", &num1);
	sleep(1.5);
	printf("Enter the second number-->> ");
	scanf("%2lf", &num2);
	sleep(1.5);
	printf("Enter the arithmetic sign:");
	scanf(" %c", &operator);
	sleep(1.5);

	switch(operator)
	{
		case '+':
			result = add(num1, num2);
			break;
 
		case '-':
			result = sub(num1, num2);
			break;

		case '*':
			result = mul(num1, num2);
			break;

		case '/':
			result = div(num1, num2);
			break;

		default:
			printf("Invalid Operator!!\n\n");
			return (1);
	}
	if (operator == '/' && num2 == 0)
	{
		sleep(1.5);
		printf("Recompile to use again!\n\n");
	}
	else
	{
		sleep(1.5);
		printf("\nThe result is %2lf\n", result);
		sleep(3);
		printf("Recompile to use again!\n\n");
	}

	return (0);
}
