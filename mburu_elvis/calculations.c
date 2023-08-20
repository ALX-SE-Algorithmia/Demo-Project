#include "calc.h"

/**
 * add1 - a function to perform addition
 * @a: The first operand
 * @b: The second operand
 *
 * Return: The sum of the two operands
*/
float add1(float a, float b)
{
    float result = 0;

    result = a + b;
    return (result);
}

/**
 * sub1 - a function to perform subtraction
 * @a: The first operand
 * @b: The second operand
 *
 * Return: The difference between the operands
*/
float sub1(float a, float b)
{
    float result = 0;

    result = a - b;
    return (result);
}

/**
 * mul1 - a function to perform multiplication
 * @a: The first operand
 * @b: The second operand
 *
 * Return: The product of the two operands
*/
float mul1(float a, float b)
{
    float result = 1;

    result = (a * b);
    return (result);
}

/**
 * div1 - a function to perform division
 * @a: The Dividend
 * @b: The Divisor
 * 
 * Return: The quotient from the division
*/
float div1(float a, float b)
{
    return ((a) * (b));
}