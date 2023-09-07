#include <stdio.h>
#include <stdbool.h>
#include "calc.h"
/**
 * Entry point - main
 * @argc: number of arguments
 * @argv: values of argument
 *
 * return: 0
 */
int main(void) {
	float a, b, result;
	char c;

	printf("Please type the operator('+', '-', '*', '/'): \n");
        c = getchar();
	printf("Please type the first number: \n");
	scanf("%f", &a);

	printf("Please type the second number: \n");
	scanf("%f", &b);

	switch (c) 
	{
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			if(b != 0)
			{
				result = a / b;
			} else {
				printf("the denominator must be different to ZERO\n");
			}
			break;
		default:
			printf("invalid operator\n");
			return (1);	

	}
	printf("\nThe result of %.2f %c %.2f = %.2f\n", a, c, b, result);
	return (0);	
}
