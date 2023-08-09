#include <stdio.h>
#include "calculator.h"
/**
 * main - This progam performs basic arithmetic operations on a pair of numbers
 * Return: (0) success, (1) fail
*/
int main()
{
    float num1, num2, result;
    char operator;

    printf("Enter a simple arithmetic expression. Example: 2 * 2\n");
	printf("(allowed operators: +, -, *, or /)\n");
	printf("\n");

    //Take numbers and operators from the user
    printf("Enter the first number: ");
    if (scanf("%f", &num1) != 1)
    {
        printf("Invalid input for the first number.\n");
        return (1);
    }

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    if (scanf("%f", &num2) != 1)
    {
        printf("Invalid input for the first number.\n");
        return (1);
    }

    //Perform the appropriate arithmetic operation based on the operator
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
        // Check for division by zero
        if (num2 == 0)
        {
            printf("Error: Cannot divide by zero.\n");
            return (1);
        }
        result = division(num1, num2);
        break;
        default:
        printf("Invalid operator. Please use any of '+', '-', '*', '/'. \n");
    }

    // Output the result
    printf("Result: %.2f\n", result);

    return (0);

}