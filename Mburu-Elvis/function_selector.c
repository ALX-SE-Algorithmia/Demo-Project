#include "calc.h"
#include <stdio.h>
#include <string.h>

void func_sel(char *c, float a, float b)
{
    float result = 1;
    if (c[0] == '*' && c[1] == '*')
        result = exp1(a, b);
    else
    {
        switch (c[0])
        {
        case '+':
            result = add1(a, b);
            break;
        case '-':
            result = sub1(a, b);
            break;
        case '%':
            result = mod1(a, b);
            break;
        case '/':
            result = div1(a, b);
            break;
        case '*':
            result = mul1(a, b);
            break;
        default:
            result = 0;
            break;
        }
    }
    printf("Result: %.1f\n", result);
}