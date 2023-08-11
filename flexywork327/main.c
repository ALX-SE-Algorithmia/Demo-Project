
#include <stdio.h>

/*
- a,b are the operands
- op is the operator

*/
int main(void)
{
    int a, b;
    char op;
    printf("\n======================= Welcome to my simple Calculator 💻 ===========================\n\n");
    printf("A few rules before we start 📝:\n\n");
    printf("1. The program only accepts math expressions and numbers \n");
    printf("2. The program only accepts numbers that are less than 2147483647\n");
    printf("3. The program only accepts the following operators: +, -, *, / and %%\n");
    printf("4. The program will print an error message if the user enters an invalid operator\n\n");
    printf("\t A correct format is shown 👉 Eg: 6 + 3 = 9\n\n");


    printf("\nEnter an expression: ");
    scanf("%d %c %d", &a, &op, &b);
    switch (op)
    {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            printf("Result: %d\n", a / b);
            break;
        default:
            printf("Invalid operator\n");
            printf("Eg: 6 + 3\n");
            break;
    }
    return 0;
}
