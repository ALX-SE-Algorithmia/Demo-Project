#include "main.h" /* including main header file */
#include <stdio.h> /* Including the standard input & output header file */
#include <string.h> /* Including the string function header file */

/**
 * main - a basic claculator that collects two numbers and an operator then perform a
 * mathimathecal operation according to the operator given and prints result
 *
 * Return: 0 (Success)
 */
int main(void)
{
    /* Initialise variables */
    double num1, num2;
    char operator;
    double result;
    char name;

    /* message */
    printf("Hello\n");

    /* ask for user_name */
    printf("Please enter a username: ");

    /* collects user_name */
    scanf("%s", &name);

    /* welcome message and about calculator */
    printf("Welcome %s to Samuel's calculator\n", &name);

    printf("This calculator takes in two numbers and an arithmetic operator\n");
    printf("These are the arithmetic operators\n");
    printf("For Addition: +\n");
    printf("For Subtraction: -\n");
    printf("for Multiplication: *\n");
    printf("for Division: /\n");

    /* asks for first number */
    printf("Enter your first number: ");

    /* collects first number */
    if (scanf("%lf", &num1) != 1)
    {
        /* if a charcter other than a number is inputed */
        printf("ERROR: Invalid input\n");
        printf("Recompile program again\n");
        return (1);
    }

         /* otherwise */
    else
    {
        /* asks for second number */
        printf("Enter your second number: ");

        if (scanf("%lf", &num2) != 1)
        {
            /* if a charcter other than a number is inputed */
            printf("ERROR: Invalid input\n");
            printf("Recompile program again\n");
            return (1);
        }
    }

    /* asks for operator */
    printf("Enter operator: ");
    
    /* collects operator */
    scanf(" %c", &operator);

    /* performing the arithmethic operation */
    switch (operator)
    {
        case '+':
        result = num1 + num2;
        break;

        case '-':
        result = num1 - num2;
        break;

        case '*':
        result = num1 * num2;
        break;

        case '/':
        /* if sencond number is 0, a number can't be devided by 0 */
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            printf("ERROR: you can't devide by 0\n");
            return (1);
        }
        break;

        default:
        printf("please input the right operator\n");
        printf("Recompile again\n");
    }

    /* output result of operation */
    printf("Result = %.2f\n", result);

    /* thanking message and end of program */
    printf("Thank you for using this basic calculator app\n");
    printf("Recompile to use again\n");


    return (0);
}