#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include "errorhandler.h"

/*
 *intro - Welcome the user to the calculator
 *
 *Return: nothing
 */
void intro(void)
{
	char user[50];

	printf("welcome to this amazing calulator\n");
	sleep(2);

	printf("Enter User Name: ");
	scanf("%s", &user);
	printf("Thank you for choosing CALc %s\n", user);
	sleep(2);

}
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	intro();/*calling of the intro function */
	char key;

	/* some information on how to use the calculator*/
userman:
	printf("\n__________________________________________\n");
	printf("HOW TO USE CALC;\n");
	printf("\t>Press 'q' anytime to quit CALC\n");
	printf("\t>press 'c' clear screen\n");
	printf("\t>press 'm' to see user manual\n");
	printf("____________________________________________\n");
	printf("Warning: CALC only supports\n");
	printf("\t-Addition (+)\n\t-Subtraction(-)\n\t");
	printf("-Multipication(*)\n\t-Division(/)\n");
	printf("___________________________________________\n");
	sleep(1);
	printf("\nENTER EXPRESSION BELOW\n");

/*A loop to keep the program going until user decides to quit by pressig q*/
	while (1)
	{
		key = getchar();

		if (key == 'q')
		{
			break;
		}
		else if (key == 'c')
		{
			system("clear");
		}
		else if (key == 'm')
		{
			goto userman;
		}

		arithmetic_expression();
	}
	printf("Turning off...\n");
	sleep(2);
	return (0);

}
/**
 *arithmetic_expression- perfoms mathematical task accoding to sign
 *
 *returns: Always 0
 */
void arithmetic_expression(void)
{

	/* variable diclaration */
	double num1;
	double num2;
	double answer;
	char operator;

	scanf("%lf %c %lf", &num1, &operator, &num2);

	/* introducing a switch statement */
		switch (operator)
		{
		case '+':
			answer = add(num1, num2); /*addition*/
			printf("\n%.0lf + %.0lf = %.2lf\n", num1, num2, answer);
			break;

		case '-':
			answer = subtract(num1, num2); /*subtruction */
			printf("\n%.0lf - %.0lf = %.2lf\n", num1, num2, answer);
			break;

		case '*':
			answer = multiply(num1, num2); /* multiplication */
			printf("\n%.0lf x %.0lf = %.2lf\n", num1, num2, answer);
			break;

		case '/':
			answer = divide(num1, num2);  /* division */
			printf("\n%.0lf / %.0lf = %.2lf\n", num1, num2, answer);
			break;

		default:
			wrongInput();


		}


}
