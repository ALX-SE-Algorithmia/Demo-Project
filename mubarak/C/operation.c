#include <stdio.h>
#include <unistd.h>

/**
 * operation function for the Calculator
 * handle only four basic operations 
 * takes in two numbers from the user (standard input)
 * takes in an arithmetic operator for the four math operations
 * ‘+’ for Addition, ‘-’ for subtraction, ‘/’ for division, and ‘*’ for multiplication
 * performs an arithmetic operation based on the arithmetic operator
 * prints the result to the screen
 * 
 * if wrong arithmetic operator other than the one above is received...
 * or does not receive correct numbers, will print an error to the screen
 * 
 * return 0
 */

int main()
{
    printf("Welcome!\n");
    sleep(1);
    printf("Thank you for using Mubarak's Basic Calculator.\n");
    printf("This Calculator takes in two numbers and your arithmetic operator.\n");
    
    printf("\n");

    sleep(1);
    printf("The arithmetic operators available are:\n");
    printf("+ - Addition\n");
    printf("- - Subtraction\n");
    printf("* - Multiplication\n");
    printf("/ - Division\n");
    sleep(1);

    double num1, num2;
    char operand;

    printf("\nEnter your first number: ");
    scanf("%lf", &num1);

    printf("Enter your second number: ");
    scanf("%lf", &num2);

    printf("Enter your operator (eg: +, -, *, or /): ");
    scanf(" %c", &operand);

    switch (operand)
    {
        case '+':
            printf("The result of %.2lf %c %.2lf = %.2lf\n", num1, operand, num2, (num1 + num2));
            break;
        
        case '-':
            printf("The result of %.2lf %c %.2lf = %.2lf\n", num1, operand, num2, (num1 - num2));
            break;

        case '*':
            printf("The result of %.2lf %c %.2lf = %.2lf\n", num1, operand, num2, (num1 * num2));
            break;

        case '/':
            if (num2 != 0) // Check for division by zero
            {
                printf("The result of %.2lf %c %.2lf = %.2lf\n", num1, operand, num2, (num1 / num2));
            }
            else
            {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error! Invalid operator. Operator must be +, -, * or /.\n");
            break;
    }
    
    return 0;
}
