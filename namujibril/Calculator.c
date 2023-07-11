#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
    int num1, num2, result;
    char operator;

    printf("Simple Calculator\n");
    printf("=================\n");

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = divide(num1, num2);
                printf("Result: %d\n", result);
            } else {
                printf("Error: Cannot divide by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}

// Function to perform addition
int add(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function to perform multiplication
int multiply(int a, int b) {
    return a * b;
}

// Function to perform division
int divide(int a, int b) {
    return a / b;
}

