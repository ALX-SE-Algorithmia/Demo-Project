#include "calc.h"

/**
 * main - this is the main function of the calculator program
 * 
 * Return: 0
*/
int main(void)
{
    float a, b;
    char *c = malloc(sizeof(char) * 3);

    printf("This calculator supports: +, -, *, **, / and %% operations\n");
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the calculation operation: ");
    scanf("%3s", c);
    printf("Enter the second number: ");
    scanf("%f", &b);
    func_sel(c, a, b);
    return (0);
}