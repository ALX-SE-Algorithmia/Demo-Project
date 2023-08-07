#include <stdio.h>
#include "operation.c"

/**
 * Basic Calculator - perform basic arithmetic operation and print answer
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
    int continuity;
    
    do
    {
        operation(num1, num2, operand);

        printf("Do you want to continue using the calculator?(1: Yes, 0: No): ");
		scanf("%d", &continuity);
    } while (continuity == 1);

    return 0;
}