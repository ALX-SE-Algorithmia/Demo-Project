#include <stdio.h>
/**
 * main - entry point
 * Return: nothing
 */
int main()
{
    char operator;
    double number1, number2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &number1, &number2);

    switch (operator)
    {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number2 != 0)
                result = number1 / number2;
            else
	    {
                printf("Error: Cannot divide by zero.\n");
                return (1); // Exit with an error code
            }
            break;
        default:
            printf("Invalid operator.\n");
            return (1); // Exit with an error code
    }

    printf("Result: %.2lf\n", result);
    return (0);
}
