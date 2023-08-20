#include <stdio.h>
#include "cal.h"
#include <string.h>
#define sum(a, b) _Generic((a), int: sum, float: sum_0, double: sum_1)(a, b)
#define sub(a, b) _Generic((a), int: sub, float: sub_0, double: sub_1)(a, b)
#define mul(a, b) _Generic((a), int: mul, float: mul_0, double: mul_1)(a, b)
#define division(a, b) _Generic((a), int: division, float: division_0, double: division_1)(a, b)
int main()
{
	int result = 0, a, b;
	float c, d;
	double e, f;
	char operation;

	int status = 0;

	char data_types[10];

	while (1)
	{
		printf("Enter the first data type (int, float, or double): ");
    	scanf("%s", data_types);

		if (strcmp(data_types, "int") == 0)
		{
			if (validate_input("Enter the first number: ", "%d", &a) == 1)
			{
				if (validate_input("Enter the second number: ", "%d", &b) == 1)
					status = 1;
					break;
			}
		}
		else if (strcmp(data_types, "float") == 0)
		{
			if (validate_input("Enter the first number: ", "%f", &c) == 1)
			{
				if (validate_input("Enter the second number: ", "%f", &d) == 1)
				{
					status = 1;
					break;
				}
			}
		}
		else if (strcmp(data_types, "double") == 0)
		{
			if (validate_input("Enter the first number: ", "%le", &e) == 1)
			{
				if (validate_input("Enter the second number: ", "%le", &f) == 1)
				{
					status = 1;
					break;
				}
			}
		}

		else
		{
			printf("Invalid data type. Please enter either int, double or float\n");
			while (getchar() != '\n');
		}
	}

	while (1)
	{
    	printf("Enter one of these operations +, -, *, /: ");
    	if (scanf(" %c", &operation) != 1)
		{
        	printf("Error: Invalid input for the operator.\n");
        	while (getchar() != '\n');
    	}
		else
		{
        	if (operation != '+' && operation != '-' && operation != '*' && operation != '/')
			{
            	printf("Error: Invalid operation.\n");
        	}
			else
			{
            break;
        	}
    	}
	}

	if (operation == '+')
    {
        if (strcmp(data_types, "int") == 0)
        {
            result = sum(a, b);
            printf("The sum is:  %d\n", result);
        }
        else if (strcmp(data_types, "float") == 0)
        {
            float res = sum_0(c, d);
            printf("The sum is:  %f\n", res);
        }
        else if (strcmp(data_types, "double") == 0)
        {
            double res = sum_1(e, f);
            printf("The sum is:  %lf\n", res);
        }
    }
    else if (operation == '-')
    {
        if (strcmp(data_types, "int") == 0)
        {
            result = sub(a, b);
            printf("The difference is:  %d\n", result);
        }
        else if (strcmp(data_types, "float") == 0)
        {
            float res = sub_0(c, d);
            printf("The difference is:  %f\n", res);
        }
        else if (strcmp(data_types, "double") == 0)
        {
            double res = sub_1(e, f);
            printf("The difference is:  %lf\n", res);
        }
    }
    else if (operation == '*')
    {
        if (strcmp(data_types, "int") == 0)
        {
            result = mul(a, b);
            printf("The product is:  %d\n", result);
        }
        else if (strcmp(data_types, "float") == 0)
        {
            float res = mul_0(c, d);
            printf("The product is:  %f\n", res);
        }
        else if (strcmp(data_types, "double") == 0)
        {
            double res = mul_1(e, f);
            printf("The product is:  %lf\n", res);
        }
    }
    else if (operation == '/')
    {
        if (strcmp(data_types, "int") == 0)
        {
            result = division(a, b);
            if (result != 0)
                printf("The division is:  %d\n", result);
        }
        else if (strcmp(data_types, "float") == 0)
        {
            float res = division_0(c, d);
            if (res != 0.0)
                printf("The division is:  %f\n", res);
        }
        else if (strcmp(data_types, "double") == 0)
        {
            double res = division_1(e, f);
            if (res != 0.0)
                printf("The division is:  %lf\n", res);
        }
    }
	
}
