#include "calc.h"

/**
 * mod1 - a function to perform modulo division
 * @a: The Dividend
 * @b: The Divisor
 *
 * Return: The quotient from the division
*/
float mod1(float a, float b)
{
    float result = 1;

    result = fmod(a, b);
    return (result);
}

/**
 * exp1 - a function to perform exponential multiplication
 * @a: The first operand
 * @b: The second operand
 *
 * Return: the result of a power b
*/
float exp1(float a, float b)
{
    float result = 1, i;

    for (i = 0; i < b; i++)
        result *= a;
    return (result);
}