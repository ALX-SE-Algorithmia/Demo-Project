#include "calc.h"

/**
 * add - sum two integers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */

float add(float a, float b)
{
	return (a + b);
}



/**
 * mul - Xply two integers
 * @a: first number
 * @b: second number
 * Return: Xply of a and b
 */

float mul(float a, float b)
{
	return (a * b);
}

/**
 * divs - divides two integers
 * @a: first number
 * @b: second number
 * Return: division of a and b
 */

float divs(float a, float b)
{
	return (a / b);
}


/**
 * sub - subtract two integers
 * @a: first number
 * @b: second number
 * Return: subtraction of a and b
 */

float sub(float a, float b)
{
	return (a - b);
}

/**
 * calculate_inputs - This function calculates inputes and print result
 * @num: first input number
 * @args: operators and numbers added to a struct
 */

void calculate_input(float num, input_t *args, sg_t *op, int t)
{
	int i, j;
	float t_num;

	for (i = 0; i < t; i++)
	{
		for (j = 0; op[j].s != NULL; j++)
		{
			if (args[i].sym == op[j].s)
			{
				if ( i == 0)
					t_num = op[j].f(num, args[i].num);
				else
					t_num = op[j].f(t_num, args[i].num);
			}
		}
	}
	printf("%2.f\n", t_num);
	return;
}
