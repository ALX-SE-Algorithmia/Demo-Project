#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calc.h"

int main(void)
{
    float a, b;
    char *c = malloc(sizeof(char) * 3);

    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the calculation operation: ");
    scanf("%3s", c);
    printf("Enter the second number: ");
    scanf("%f", &b);
    func_sel(c, a, b);
    return (0);
}