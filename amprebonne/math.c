#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_INPUT_SIZE 2

bool isValidOperator(char op) {
    return op == '+' || op == '-' || op == '*' || op == '/';
}

int checker(float *operand1, float *operand2, char *op) {
    char input[MAX_INPUT_SIZE + 1];
    bool validInput = false;

    while (!validInput) {
        printf("Enter arithmetic operation (e.g., 2*5): ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            return 1;  // Input error
        }

        if (strlen(input) != MAX_INPUT_SIZE + 1) {
            printf("Invalid input length. Please use the format: operand operator operand.\n");
            continue;
        }

        if (sscanf(input, "%f%c%f", operand1, op, operand2) == 3) {
            if (isValidOperator(*op)) {
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
