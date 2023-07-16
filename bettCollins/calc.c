#ifndef A3A1A85F_8541_445D_9357_0D147F09BD3E
#define A3A1A85F_8541_445D_9357_0D147F09BD3E
#include <stdio.h>
#include <math.h>

double getValidNumber() {
    double num;
    int validInput = 0;
    while (!validInput) {
        if (scanf("%lf", &num) != 1) {
            printf("Error: Invalid input. Please enter a valid number.\n");
            fflush(stdin); // Clear input buffer
        } else {
            validInput = 1;
        }
    }
    return num;
}

char getValidOperator() {
    char operator;
    int validInput = 0;
    while (!validInput) {
        if (scanf(" %c", &operator) != 1) {
            printf("Error: Invalid input. Please enter a valid operator.\n");
            fflush(stdin); // Clear input buffer
        } else if (operator != '+' && operator != '-' && operator != '*' && operator != '/' &&
                   operator != '^' && operator != 's' && operator != 'S' && operator != '%' &&
                   operator != 'a' && operator != 'A' && operator != '!' && operator != 'l' &&
                   operator != 'L' && operator != 'n' && operator != 'N' && operator != 'o' &&
                   operator != 'O' && operator != 't' && operator != 'T' && operator != 'm' &&
                   operator != 'M') {
            printf("Error: Invalid operator. Please enter a valid operator.\n");
            fflush(stdin); // Clear input buffer
        } else {
            validInput = 1;
        }
    }
    return operator;
}

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, ^, sqrt, %%, abs, !, log, sin, cos, tan, mem): ");
    operator = getValidOperator();

    switch (operator) {
        case '+':
            printf("Enter two numbers: ");
            num1 = getValidNumber();
            num2 = getValidNumber();
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            printf("Enter two numbers: ");
            num1 = getValidNumber();
            num2 = getValidNumber();
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            printf("Enter two numbers: ");
            num1 = getValidNumber();
            num2 = getValidNumber();
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            printf("Enter two numbers: ");
            num1 = getValidNumber();
            num2 = getValidNumber();
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '^':
            printf("Enter the base: ");
            num1 = getValidNumber();
            printf("Enter the exponent: ");
            num2 = getValidNumber();
            result = pow(num1, num2);
            printf("%.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
            break;
       
        case 'S':
            printf("Enter a number: ");
            num1 = getValidNumber();
            if (num1 >= 0) {
                result = sqrt(num1);
                printf("sqrt(%.2lf) = %.2lf\n", num1, result);
            } else {
                printf("Error: Square root of a negative number is not allowed.\n");
            }
            break;
        case '%':
            printf("Enter the number: ");
            num1 = getValidNumber();
            printf("Enter the percentage: ");
            num2 = getValidNumber();
            result = (num1 * num2) / 100;
            printf("%.2lf%% of %.2lf = %.2lf\n", num2, num1, result);
            break;
        
        case 'A':
            printf("Enter a number: ");
            num1 = getValidNumber();
            result = fabs(num1);
            printf("abs(%.2lf) = %.2lf\n", num1, result);
            break;
        case '!':
            printf("Enter a non-negative integer: ");
            num1 = getValidNumber();
            if (num1 >= 0 && num1 == (int)num1) {
                result = 1;
                for (int i = 1; i <= (int)num1; i++) {
                    result *= i;
                }
                printf("%.0lf! = %.0lf\n", num1, result);
            } else {
                printf("Error: Factorial is defined for non-negative integers only.\n");
            }
            break;
        
        case 'L':
            printf("Enter the number: ");
            num1 = getValidNumber();
            if (num1 > 0) {
                printf("Enter the base: ");
                num2 = getValidNumber();
                if (num2 > 0 && num2 != 1) {
                    result = log(num1) / log(num2);
                    printf("log%.0lf(%.2lf) = %.2lf\n", num2, num1, result);
                } else {
                    printf("Error: Logarithm base must be a positive number other than 1.\n");
                }
            } else {
                printf("Error: Logarithm is defined for positive numbers only.\n");
            }
            break;
        
        case 'N':
            printf("Enter an angle in degrees: ");
            num1 = getValidNumber();
            result = sin(num1 * M_PI / 180.0);
            printf("sin(%.2lf) = %.2lf\n", num1, result);
            break;
       
        case 'C':
            printf("Enter an angle in degrees: ");
            num1 = getValidNumber();
            result = cos(num1 * M_PI / 180.0);
            printf("cos(%.2lf) = %.2lf\n", num1, result);
            break;
        
        case 'T':
            printf("Enter an angle in degrees: ");
            num1 = getValidNumber();
            result = tan(num1 * M_PI / 180.0);
            printf("tan(%.2lf) = %.2lf\n", num1, result);
            break;
        
        case 'M':
        
        
           
           printf("Memory calculations not done here:).\n");
           
        
        
           
            
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}

#endif /* A3A1A85F_8541_445D_9357_0D147F09BD3E */
