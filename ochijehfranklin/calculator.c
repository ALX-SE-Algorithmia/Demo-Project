#include <stdio.h>

/**
 * Main - This is the entry point
 * Description - 'This would help you calculate numbers'
 * Return - Always 0
*/

int main(void)
{
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nchoose an operator (+, -, * or /): ");
    scanf("%c", &operator);

    printf("\nPick a number: ");
    scanf("%lf", &num1);

    printf("\nPick another number: ");
    scanf("%lf", &num2);

    switch(operator)
    {
        case '+':
            result = (num1 + num2);
            printf("\nYour answer is %.2lf", result);
            break;

        case '-':
            result = (num1 - num2);
            printf("\nYour answer is %.2lf", result);
            break;

        case '*':
            result = (num1 * num2);
            printf("\nYour answer is %.2lf", result);
            break;

        case '/':
            result = (num1 / num2);
            printf("\nYour answer is %.2lf", result);
            break;

        default:
        printf("\nPlease choose an operator");
    }

    return 0;
}
