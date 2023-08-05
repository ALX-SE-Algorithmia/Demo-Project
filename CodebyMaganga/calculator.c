#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n-1);
}
int main()
{
    double a, b;
    char operator;

    printf("Input Number: ");
    scanf("%lf", &a);
    printf("Enter operator: ");
    scanf("  %c", &operator);
        
        if(operator == '!')
        {
            if (a < 0)
                {
                    printf("Invalid Input");
                    return 1;
                }
                printf("%d", factorial((int)a));
        }
        else
        {
            printf("Input Number: ");
            scanf("%lf", &b);

                switch (operator)
                {
                    case '+':
                        printf("%.2f", a + b);
                        break;
                    case '-':
                        printf("%.2f", a - b);
                        break;
                    case '*':
                        printf("%.2f", a*b);
                        break;
                    case '/':
                        if (a == 0)
                        {
                            printf("Cannot perform operation");
                            return 1;
                        }
                        printf("%.2f", a/b);
                        break;
                    default:
                        printf("Invalid Input");
                }
        }
}

     