#include "main.h" //includes function prototypes in main.h file
#include <stdlib.h> //includes standard library functions
#include <stdio.h> //includes functions for standard IO
#include <string.h> //includes string functions
#include <unistd.h> //includes functions for sleep
#include <windows.h> //includes windows functions
#include <math.h> // includes math functions
#include <ctype.h> // includes the standard C library header file
#include <stdbool.h> // includes for boolean statements
bool isValidOperator(char operator) {
    return operator == '+' || operator == '-' || operator == '*' || operator == '/';
}

int checker(float *operand1, float *operand2, char *operator) {
    char input[100];
    bool validInput = false;

    while (!validInput) {
        printf("Enter arithmetic operation (e.g., 2*5): ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            return 1;  // Input error
        }

        if (sscanf(input, "%f%c%f", operand1, operator, operand2) == 3) {
            if (isValidOperator(*operator)) {
                validInput = true;
            } else {
                printf("Invalid operator. Please use +, -, *, or /.\n");
            }
        } else {
            printf("Invalid input format. Please use the format: operand operator operand.\n");
        }
    }

    return 0;  // Success
}
int mathsFunction(void) {
    // Perform arithmetic operation based on operator
    float result;
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 == 0) {
                printf("Division by zero is not allowed.\n");
                return 1;
            }
            result = operand1 / operand2;
            break;
    }
    printf("Result: %.2f\n", result);
    return 0;
}
