#include "calc.h"
#include <math.h>
#include <stdlib.h>

float add1(float a, float b)
{
    float result = 0;

    result = a + b;
    return (result);
}

float sub1(float a, float b)
{
    float result = 0;

    result = a - b;
    return (result);
}

float mul1(float a, float b)
{
    float result = 1;

    result = (a * b);
    return (result);
}

float div1(float a, float b)
{
    return ((a) * (b));
}

float mod1(float a, float b)
{
    float result = 1;

    result = fmod(a, b);
    return (result);
}

float exp1(float a, float b)
{
    float result = 1, i;

    for (i = 0; i < b; i++)
        result *= a;
    return (result);
}