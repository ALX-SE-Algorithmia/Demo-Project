#include <stdio.h>
#include <math.h>
#include "calcul.h"

/**
 * Function that adds two numbers
 * @num1: the first number
 * @num2: the second number
 * 
 * Return: the sum of num1 and num2
 */
float add(float num1, float num2) {
    return num1 + num2;
}

/**
 * Function that subtracts two numbers
 * @num1: the first number
 * @num2: the second number
 * 
 * Return: the difference of num1 and num2
 */
float subtract(float num1, float num2) {
    return num1 - num2;
}

/**
 * Function that multiplies two numbers
 * @num1: the first number
 * @num2: the second number
 * 
 * Return: the product of num1 and num2
 */
float multiply(float num1, float num2) {
    return num1 * num2;
}

/**
 * Function that divides two numbers
 * @num1: the first number
 * @num2: the second number
 * 
 * Return: the quotient of num1 and num2, or 0 if num2 is 0
 */
float divide(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        return 0; 
    }
}

/**
 * Function that calculates the power of a base raised to an exponent
 * @base: the base number
 * @exponent: the exponent
 * 
 * Return: the result of base raised to the exponent
 */
float power(float base, float exponent) {
    return pow(base, exponent);
}

/**
 * Function that calculates the square root of a number
 * @num: the number
 * 
 * Return: the square root of num
 */
float squareRoot(float num) {
    return sqrt(num);
}

/**
 * Function that calculates the sine of an angle
 * @angle: the angle
 * 
 * Return: the sine of the angle
 */
float sine(float angle) {
    return sin(angle);
}

/**
 * Function that calculates the cosine of an angle
 * @angle: the angle
 * 
 * Return: the cosine of the angle
 */
float cosine(float angle) {
    return cos(angle);
}
