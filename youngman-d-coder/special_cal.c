#include "main.h"

/**
 * square - finds the square root of a number
 * @x: number
 * Return: square root of x, -1 if x is negative
 */
double square(double x)
{
    if (x < 0)
    {
        printf("Error: The input value must be greater than or equal to 0\n");
        return (-1);
    }

    double root = sqrt(x);
    return (root);
}

/**
 * cosine - finds the cosine of a number
 * @x: number
 * Return: cosine of x
 */
double cosine(double x)
{
    double co = cos(x);
    return (co);
}

/**
 * sine - finds the sine of a number
 * @x: number
 * Return: sine of x
 */
double sine(double x)
{
    double si = sin(x);
    return (si);
}

/**
 * expon - finds the power of base exponent exp
 * @base: base number
 * @exp: exponent
 * Return: base raised to the power of exponent
 */
double expon(double base, double exp)
{
    double pwr = pow(base, exp);
    return (pwr);
}

/**
 * logarithm - finds the logarithm of a number
 * @x: number
 * Return: logarithm of x, -1 if x is negative or 0
 */
double logarithm(double x)
{
    double l;
    	
    if (x <= 0)
    {
        printf("Error: The input value must be greater than 0\n");
        return -1;
    }

    l = log(x);
    return (l);
}

