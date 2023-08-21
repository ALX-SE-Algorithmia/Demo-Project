#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to program calc.
 *
 * Return: 0 success, else 1.
 */
/* Algorithmia Calculator probation project @akellomick*/
int main(void)
{
	char sign;
	int num1;
	int num2;

	msg();
	printf("insert a valid arithmetic sign\t");
	scanf("%c", &sign);
	printf("Insert first digit\t");
	scanf("%d", &num1);
	printf("insert second digit\t");
	scanf("%d", &num2);


	switch (sign)
	{
		case '+':
			printf("\t%d + %d = %d\n", num1, num2, add(num1, num2));
			break;
		case '-':
			printf("\t%d - %d = %d\n", num1, num2, sub(num1, num2));
			break;
		case '*':
			printf("\t%d * %d = %d\n", num1, num2, mul(num1, num2));
			break;
		case '/':
			printf("\t%d / %d = %d\n", num1, num2, div(num1, num2));
			break;

		default:
			end_msg();
	}

	return (0);
}
