#include "calculator.h"
/**
 * divide - the divide operation
 * @a: number
 * @b: number
 * Return: a divided by b
*/
long double divide(long double a, long double b)
{
        return (a / b);
}
/**
 * mul - the mul operation
 * @a: number
 * @b: number
 * Return: a multiplied by b
*/
long double mul(long double a, long double b)
{
        return (a * b);
}
/**
 * sub - the sub operation
 * @a: number
 * @b: number
 * Return: b subtracted from a
*/
long double sub(long double a, long double b)
{
        return (a - b);
}
/**
 * add - the add operation
 * @a: number
 * @b: number
 * Return: a added to b
*/
long double add(long double a, long double b)
{
        return (a + b);
}
/**
 * power - the exponentiation operation
 * @a: number
 * @b: number
 * Return: a exponential b
*/
long double power(long double a, long double b)
{
        return (b == 0 ? 1 : a * power(a, --b));
}


/**
 * modulo - the modulo operation
 * @a: number
 * @b: number
 * Return: the remainder of a divided by b
*/
long double modulo(long double a, long double b)
{
    return fmod(a, b);
}
