#include "main.h" //includes function prototypes in main.h file
#include <stdlib.h> //includes standard library functions
#include <stdio.h> //includes functions for standard IO
#include <string.h> //includes string functions
#include <unistd.h> //includes functions for sleep
#include <windows.h> //includes windows functions
#include <math.h>
#include <ctype.h>

int mathsFunction(void) {
    char input[2]; // Assuming the input won't exceed 2 characters
    float operand1, operand2;
    char operator;

    printf("Enter an arithmetic operation (e.g., 2*4): "); // ~ need to add cursor blinking feature here
    fgets(input, sizeof(input), stdin);

    if (sscanf(input, "%f %c %f", &operand1, &operator, &operand2) != 3) {
        printf("Invalid input format.\n");
        return 1;
    }

    switch (operator) {
        case '+':
        case '-':
        case '*':
        case '/':
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    // Check if operands are valid floats
    char *endptr;
    if (!isdigit(input[0]) && input[0] != '-' && input[0] != '+') {
        printf("Invalid first operand.\n");
        return 1;
    }
    if (!isdigit(input[strlen(input) - 1])) {
        printf("Invalid second operand.\n");
        return 1;
    }

    operand1 = strtof(input, &endptr);
    operand2 = strtof(endptr, NULL);

    printf("Operand 1: %.2f\n", operand1);
    printf("Operand 2: %.2f\n", operand2);
    printf("Operator: %c\n", operator);

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
