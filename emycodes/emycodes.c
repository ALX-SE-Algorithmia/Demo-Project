#include "emycodes.h"
/*
 * Simple calculator program in C for
 * basic arithmetic operations on two real numbers.
 * The user can input the first number,
 * select an operator (+, -, *, /), and input the second number.
 * The program displays the result with two decimal places.
 * Proper input validation and error handling
 * for invalid operators and division by zero are implemented.
 */

int main(void)
{
    char operator;
    double num1, num2, result;

    /* Introduction and Input Gathering */
    printf("Simple Calculator\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);

    /* Operator Input Validation Loop */
    while (1)
    {
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        /* Check for valid operator input */
        if (operator == '+' || operator == '-' || operator == '*' || operator == '/')
            break;
        else
            printf("Error: Invalid operator. Please try again.\n\n");
    }


    printf("Enter second number: ");
    scanf("%lf", &num2);

    /* Perform the selected operation */
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
            /* Division by zero check*/
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; /* Exit the program with an error code */
            }
            break;
    }

    /* Output the result */
    printf("Result: %lf\n", result);

    return (0);
}
