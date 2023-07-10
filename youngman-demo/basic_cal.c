#include "main.h"

/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int add(int a, int b)
{
    return (a + b);
}

/**
 * sub - subtracts second integer from first integer
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int sub(int a, int b)
{
    return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int mul(int a, int b)
{
    return (a * b);
}

/**
 * div - divides integer a by integer b
 * @a: first integer
 * @b: second integer
 * Return: quotient of a and b, or INT_MAX if b is 0
 */
int division(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by 0 is not valid\n");
        return (INT_MAX);
    }

    return (a / b);
}

/**
 * mod - calculates the remainder of integer division of a by b
 * @a: first integer
 * @b: second integer
 * Return: remainder of a divided by b, or INT_MAX if b is 0
 */
int mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by 0 is not valid\n");
        return (INT_MAX);
    }

    return (a % b);
}
