#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

bool isValidOperator(char op) {
    return op == '+' || op == '-' || op == '*' || op == '/';
}

int checker(float *operand1, float *operand2, char *op) {
    printf("Enter arithmetic operation (e.g., 2*5): ");
    if (scanf("%f%c%f", operand1, op, operand2) != 3) {
        printf("Invalid input format. Please use the format: operand operator operand.\n");
        return 1;  // Input error
    }

    if (!isValidOperator(*op)) {
        printf("Invalid operator. Please use +, -, *, or /.\n");
        return 1;  // Input error
    }

    return 0;  // Success
}

int mathsFunction(float operand1, float operand2, char op) {
    // Perform arithmetic operation based on operator
    float result;
    switch (op) {
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
