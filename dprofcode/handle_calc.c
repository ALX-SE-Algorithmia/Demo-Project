#include "calc.h"

/**
 * handle_calc - handles the calculation
 *
 * Return: solution
 */

int handle_calc(int first_number, int second_number, char *operator)
{
    int soln;

    if (strcmp(operator, "+") == 0)
        soln = sum(first_number, second_number);
    else if (strcmp(operator, "-") == 0)
        soln = minus(first_number, second_number);
    else if (strcmp(operator, "*") == 0)
        soln = multiply(first_number, second_number);
    else if (strcmp(operator, "/") == 0)
        soln = divide(first_number, second_number);
    else
    {
        printf("operator not found\n");
        return (-1);
    }

    return (soln);
}
