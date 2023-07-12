#include <stdio.h>

/*
main - A calculator program that takes in arithmetic ops
Return: 0(On Success)
*/
int main(void)
{
    double first_number, second_number;
    double rval;
    char arithmetic_operator;

    printf("Enter your preferred arithmetic operator. Choose between +, -, *, / :\n");
    scanf("%c", &arithmetic_operator);

    printf("Enter the first number: \n");
    scanf("%lf", &first_number);

    printf("Enter the second number: \n");
    scanf("%lf", &second_number);

    switch(arithmetic_operator)
    {
        case '+':
            rval = first_number + second_number;
            printf("Resulting addition is: %.2lf\n", rval);
            break;
        case '-':
            rval = first_number - second_number;
            printf("Resulting subtraction is: %.2lf\n", rval);
            break;
        case '*':
            rval = first_number * second_number;
            printf("Resulting multiplication is: %.2lf\n", rval);
            break;
        case '/':
            rval = first_number / second_number;
            printf("Resulting division is: %.2lf\n", rval);
            break;
        default:
            printf("%c is an invalid arithmetic operator\n", arithmetic_operator);
            break;
    }

    return (0);
}