#include <stdio.h>
#include "calcul.h"

int main(void) {
    float num1, num2;
    char operator;

    printf("Enter number one: ");
    scanf("%f", &num1);

    printf("Enter number two: ");
    scanf("%f", &num2);

    printf("Enter an operator (+, -, *, /, ^, r, s, c): ");
    scanf(" %c", &operator);

    float result;
    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        case '^':
            result = power(num1, num2);
            break;
        case 'r':
            result = squareRoot(num1);
            break;
        case 's':
            result = sine(num1);
            break;
        case 'c':
            result = cosine(num1);
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
