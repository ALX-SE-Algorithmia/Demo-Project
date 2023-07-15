#include "calc.h"

/**
 * add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
double add(double a, double b)
{
    return (a + b);
}

/**
 * sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
double sub(double a, double b)
{
    return (a - b);
}

/**
 * mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
double mul(double a, double b)
{
    return (a * b);
}

/**
 * div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: quotient of a / b
 */
double div(double a, double b)
{
    if (b == 0)
    {
        printf("Error: Division by 0.\n");
        exit(1);
    }
    return (a / b);
}

/**
 * mod - modulo of two numbers
 * @a: first number
 * @b: second number
 * Return: modulus of a % b
 */

int mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Modulo by 0.\n");
        exit(1);
    }
    return (a % b);
}

/**
 * root - square root of a number
 * @num: number to find root
 * @root: root of num
 * Return: square root of num
 */
double root(double num, double root)
{
    if (root == 0)
    {
        printf("Error: Root by 0.\n");
        exit(1);
    }
    return (pow(num, 1 / root));
}

/**
 * logten - log base 10 of a number
 * @a: number to find log
 * Return: log base 10 of a
 */
double logten(double a)
{
    if (a <= 0)
    {
        printf("Error: Log of 0 or a negative number.\n");
        exit(1);
    }
    return (log10(a));
}

/**
 * exponent - exponent of a number
 * @base: base number
 * @exp: exponent number
 * Return: exponent of base ^ exp
 */
double exponent(double base, double exp)
{
    return (pow(base, exp));
}

/**
 * factorial - factorial of a number
 * @a: first number
 * Return: factorial of a
 */
int factorial(int a)
{   
    int result = 1;
    int i;

    if (a < 0)
    {
        printf("Error: Factorial of a negative number.\n");
        exit(1);
    }
    
    for (int i = 2; i <= a; i++)
    {
        result *= i;
    }
    return (result);   
}

/**
 * fib - fibonacci of a number
 * @a: first number
 * Return: fibonacci of a
 */
int fib(int a)
{
    int a = 0;
    int b = 1;
    int result = 0;

    if (a <= 0)
        return (0);

    for (int i = 2; i <= a; i++)
    {
        result = a + b;
        a = b;
        b = result;
    }
    return (result);
}