#include <stdio.h>
#include "main.h"

int main() 
{
    char operator;
    float num1, num2, result;
    char choice;

    printf("Welcome to the Four Basic Operations Calculator!\n");

    do 
    {
        printf("Enter the first number: ");
        scanf("%f", &num1);

        printf("Enter an arithmetic operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter the second number: ");
        scanf("%f", &num2);

        if (isValidOperator(operator)) 
	{
            switch (operator) 
	    {
                case '+':
                    result = addition(num1, num2);
                    break;
                case '-':
                    result = subtraction(num1, num2);
                    break;
                case '*':
                    result = multiplication(num1, num2);
                    break;
                case '/':
                    result = division(num1, num2);
                    break;
            }

            printf("Result: %.2f\n", result);
        } 
	else 
	{
            printf("Error: Invalid arithmetic operator!\n");
        }

        printf("Do you wish to perform another operation? (y/n): ");
        scanf(" %c", &choice);
    } 
    while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the calculator. Goodbye!\n");

    return 0;
}
